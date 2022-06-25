// Booth Mulitplier Top level verilator simulation file:
// EEE 446 Spring 2021
// Ali Muhtaroglu, Middle East Technical University - Northern Cyprus Campus

#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "testbench.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// Top level interface signals defined here:
#define	Op          Op
// Internal signals defined here:
// Note systemverilog design hierarchy can be traced by appending __DOT__ at every level:
#define MemRead         top__DOT__MemRead
#define MemWrite        top__DOT__MemWrite
#define PCSrc           top__DOT__PCSrc
#define MemToReg        top__DOT__MemToReg
#define RegWrite        top__DOT__RegWrite
#define ALUOp           top__DOT__ALUOp
#define ALUSrc          top__DOT__ALUSrc
#define RbSelect        top__DOT__RbSelect
#define IdEx            top__DOT__datapath__DOT__IdEx
#define RF              top__DOT__datapath__DOT__RF
#define Alu1out         top__DOT__datapath__DOT__Alu1out
#define PC              top__DOT__datapath__DOT__PC
#define mem_stall_flag  top__DOT__datapath__DOT__mem_stall_flag
#define dcache_sram_write top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
#define dcache_array	top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
#define dcache_write    top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write
#define dram_port2_write top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
#define RF              top__DOT__datapath__DOT__RF
// In case you would like he simulator to do operations conditional to DEBUG mode:
#define DEBUG       1

// Note the use of top level design name here after 'V' as class type:
class	TOPLEVEL_TB : public TESTBENCH<Vtop> {

  long m_tickcount;

public:

  TOPLEVEL_TB(void) {
  }

  // Every time this procedure is called, clock is ticked once and associated
  // simulation tests and/or signal outputs for debug can be put into action:
  void tick(void) {

    TESTBENCH<Vtop>::tick();

    // we are often interested in keeping track of number of clock ticks:
    m_tickcount++;

    // if DEBUG macro is set, we will then dump some signal values out every clock cycle
    // only the top level interface signals are listed here, but note you can use the
    // above defined macros to look at internal signals as well in debug mode. This is
    // quite useful when gtkwave cannot handle very large memory arrays etc.
  }
};

TOPLEVEL_TB *tb = new TOPLEVEL_TB;
void printer(int counter, int type);
int main(int argc, char** argv, char** env){


  long clock_count = 0;
  long instr_count = 0;
  long read_count = 0;
  long write_count = 0;
  int rw_count = 0;
  int rw_miss_count = 0;
  float rw_miss_percentage = 0;
  float CPI = 0;
  float exec_t = 0;
  float enj = 0;

  // Initialize Verilators variables
  Verilated::commandArgs(argc, argv);
  // Create an instance of our module under test

  // Message to standard output that test is starting:
  printf("Executing the test ...\n");

  // Data will be dumped to trace file in gtkwave format to look at waveforms later:
  tb->opentrace("lab2_waveforms.vcd");

  // Note this message will only be output if we are in DEBUG mode:
  if (DEBUG) printf("Giving the system 1 cycle to initialize with reset...\n");

  int PC = 0;
  int error_count = 0;
  int dcache_pass = 0;
  int stall_dummy = 0;
  int check_next_write = 0;
  int dcache_counter = 0;
  int mem_stall_count = 0;

  tb->reset();
  clock_count++;
  // Hit that reset button for one clock cycle:
  for(int x=0; tb->m_topsim->rootp->PC != 148; x++){
    rw_count = ((tb->m_topsim->rootp->Op == 49) //lw
            || (tb->m_topsim->rootp->Op == 33) || (tb->m_topsim->rootp->Op == 41) //lb lh
            || (tb->m_topsim->rootp->Op == 25) || (tb->m_topsim->rootp->Op == 17) //sw sh
            || (tb->m_topsim->rootp->Op == 9)) ? rw_count+1:rw_count;// sb

    //printf(" OP: %02x ", tb->m_topsim->rootp->Op);
    //printf(" PC: %02x ", tb->m_topsim->rootp->PC);
    if(tb->m_topsim->rootp->dcache_write == 1){
        check_next_write = 1;
    }
    //printf("write: %d %d \n",tb->m_topsim->rootp->dcache_write, check_next_write);

    mem_stall_count = (tb->m_topsim->rootp->mem_stall_flag == 1) ? mem_stall_count+1:mem_stall_count;

    if(tb->m_topsim->rootp->mem_stall_flag == 1 && stall_dummy == 0){
        rw_miss_count += 1;
        stall_dummy = 1;
    }else if(tb->m_topsim->rootp->mem_stall_flag == 0){
        stall_dummy = 0;
    }
    if(tb->m_topsim->rootp->Op != 0 && tb->m_topsim->rootp->mem_stall_flag == 0)
        instr_count++;

    tb->tick();
    clock_count++;

    if(check_next_write){
        check_next_write = 0;
        dcache_counter ++;
        printer(dcache_counter, 1);
    }

  }
  /*
    for(int i=0;i<16;i++){
        if(tb->m_topsim->rootp->dcache_array[i][0] != 0){
            if( tb->m_topsim->rootp->dcache_array[i][0] != 544366946)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][1] != 1931503883)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][2] != 1963616032)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][3] != 1701607968)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][4] != 0)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][5] != 0)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][6] != 0)
                error_count =1;
            if( tb->m_topsim->rootp->dcache_array[i][7] != 0)
                error_count =1;
            if(error_count != 0)
                break;
            }
        }
        */
  if(error_count != 0)
      printf(" Failed #: %d\n",error_count);
  else{
      printer(0, 0);
      printf(" \n Execution completed successfully (simulation waveforms in .vcd file) ... !\n");
      printf(" Elapsed Clock Cycles: %ld\n",clock_count);
      printf(" Total Number of Read Write Access: %d\n",rw_count);
      printf(" Total Number of Memory Stall Clock Cycles: %d\n",mem_stall_count);
      rw_miss_percentage = ((float)rw_miss_count/rw_count)*100;
      printf(" Read Write Miss #: %d Read Write Miss Percentage: %f %%\n",rw_miss_count, rw_miss_percentage);
      CPI = (float)clock_count/instr_count;
      printf(" Total # of instr: %ld CPI: %.3f\n",instr_count, CPI);
      exec_t = clock_count*1.92*(0.001);
      printf(" Execution Time: %f (ns) \n",exec_t);
      enj = exec_t*0.876;
      printf(" Energy: %f(uJ)\n",enj);
  }

  exit(EXIT_SUCCESS);
}
void printer(int counter, int type){
    if(type == 0){
        printf("RF Status: %dth Call\n", counter);
		for(int i = 0 ; i<32; i +=4){
            int j = 0;
            for(j =0; j<8; j++){
                if(j+i > 31)
                    break;
                printf("r%d = %07x  \t",j+i,tb->m_topsim->rootp->RF[j+i]);
				}
            printf("\n");
            if(j+i > 31)
                break;
		}
    }else if(type == 1){
        printf("Non Zero DCache Blocks : %dth Call\n", counter);

        int k=0;
        for(int i = 0; i < 16; i++){
            if(tb->m_topsim->rootp->dcache_array[i][k] != 0){
            printf("DCache Block[%d]: ",i);
                for(k =0; k < 8; k++){
                    printf("%d= %07x\t ",k,tb->m_topsim->rootp->dcache_array[i][k] );
                }
                k= 0;
            printf("\n");
            }
        }
    }
    printf("_________________________________________________________________________");
    printf("_________________________________________________________________________\n");
}
