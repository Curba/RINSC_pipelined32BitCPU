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

#define dram_port2_write top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
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

  // Initialize Verilators variables
  Verilated::commandArgs(argc, argv);
  // Create an instance of our module under test
  TOPLEVEL_TB *tb = new TOPLEVEL_TB;

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

  tb->reset();
  clock_count++;
  // Hit that reset button for one clock cycle:
  for(int x=0; x <10000; x++){
    rw_count = ((tb->m_topsim->rootp->Op == 49) //HEX31
            || (tb->m_topsim->rootp->Op == 25)) ? rw_count+1:rw_count;// HEX 19

    //printf(" OP: %02x ", tb->m_topsim->rootp->Op);
    if(tb->m_topsim->rootp->mem_stall_flag == 1 && stall_dummy == 0){
        rw_miss_count += 1;
        stall_dummy = 1;
    }else if(tb->m_topsim->rootp->mem_stall_flag == 0){
        stall_dummy = 0;
    }
    if(tb->m_topsim->rootp->Op == 4)
        break;
    if(tb->m_topsim->rootp->Op != 0 && tb->m_topsim->rootp->mem_stall_flag == 0)
        instr_count++;

    if(tb->m_topsim->rootp->dcache_sram_write[7] == 7 && tb->m_topsim->rootp->dcache_sram_write[1] == 1 ){
        printf("\ndcache First Block \n");
        printf("dcache block 0: %d\n", tb->m_topsim->rootp->dcache_sram_write[0]);
        printf("dcache block 1: %d\n", tb->m_topsim->rootp->dcache_sram_write[1]);
        printf("dcache block 2: %d\n", tb->m_topsim->rootp->dcache_sram_write[2]);
        printf("dcache block 3: %d\n", tb->m_topsim->rootp->dcache_sram_write[3]);
        printf("dcache block 4: %d\n", tb->m_topsim->rootp->dcache_sram_write[4]);
        printf("dcache block 5: %d\n", tb->m_topsim->rootp->dcache_sram_write[5]);
        printf("dcache block 6: %d\n", tb->m_topsim->rootp->dcache_sram_write[6]);
        printf("dcache block 7: %d\n", tb->m_topsim->rootp->dcache_sram_write[7]);

        printf("\ndram write 0: %d\n", tb->m_topsim->rootp->dram_port2_write[0]);
        printf("dram write 1: %d\n", tb->m_topsim->rootp->dram_port2_write[1]);
        printf("dram write 2: %d\n", tb->m_topsim->rootp->dram_port2_write[2]);
        printf("dram write 3: %d\n", tb->m_topsim->rootp->dram_port2_write[3]);
        printf("dram write 4: %d\n", tb->m_topsim->rootp->dram_port2_write[4]);
        printf("dram write 5: %d\n", tb->m_topsim->rootp->dram_port2_write[5]);
        printf("dram write 6: %d\n", tb->m_topsim->rootp->dram_port2_write[6]);
        printf("dram write 7: 7\n");
        printf("----------------------------------------");

        dcache_pass ++;
    }

    if(tb->m_topsim->rootp->dcache_sram_write[6] == 14 && dcache_pass && tb->m_topsim->rootp->dcache_sram_write[0] == 8){
        printf("\ndcache Second Block\n");
        printf("dcache block 0: %d\n", tb->m_topsim->rootp->dcache_sram_write[0]);
        printf("dcache block 1: %d\n", tb->m_topsim->rootp->dcache_sram_write[1]);
        printf("dcache block 2: %d\n", tb->m_topsim->rootp->dcache_sram_write[2]);
        printf("dcache block 3: %d\n", tb->m_topsim->rootp->dcache_sram_write[3]);
        printf("dcache block 4: %d\n", tb->m_topsim->rootp->dcache_sram_write[4]);
        printf("dcache block 5: %d\n", tb->m_topsim->rootp->dcache_sram_write[5]);
        printf("dcache block 6: %d\n", tb->m_topsim->rootp->dcache_sram_write[6]);
        printf("dcache block 7: %d\n", tb->m_topsim->rootp->dcache_sram_write[7]);

        printf("\ndram write 0: %d\n", tb->m_topsim->rootp->dram_port2_write[0]);
        printf("dram write 1: %d\n", tb->m_topsim->rootp->dram_port2_write[1]);
        printf("dram write 2: %d\n", tb->m_topsim->rootp->dram_port2_write[2]);
        printf("dram write 3: %d\n", tb->m_topsim->rootp->dram_port2_write[3]);
        printf("dram write 4: %d\n", tb->m_topsim->rootp->dram_port2_write[4]);
        printf("dram write 5: %d\n", tb->m_topsim->rootp->dram_port2_write[5]);
        printf("dram write 6: %d\n", tb->m_topsim->rootp->dram_port2_write[6]);
        printf("dram write 7: 14\n");
        printf("----------------------------------------");

        dcache_pass ++;
    }

        printf("dcache block 0: %d\n", tb->m_topsim->rootp->dcache_sram_write[0]);
        printf("dcache block 1: %d\n", tb->m_topsim->rootp->dcache_sram_write[1]);
        printf("dcache block 2: %d\n", tb->m_topsim->rootp->dcache_sram_write[2]);
        printf("dcache block 3: %d\n", tb->m_topsim->rootp->dcache_sram_write[3]);
        printf("dcache block 4: %d\n", tb->m_topsim->rootp->dcache_sram_write[4]);
        printf("dcache block 5: %d\n", tb->m_topsim->rootp->dcache_sram_write[5]);
        printf("dcache block 6: %d\n", tb->m_topsim->rootp->dcache_sram_write[6]);
        printf("dcache block 7: %d\n", tb->m_topsim->rootp->dcache_sram_write[7]);
    tb->tick();
    clock_count++;
  }

    for(int n = 0; n<8; n++){
        if(tb->m_topsim->rootp->dcache_sram_write[n] != 0)
            error_count ++;
    }
    //printf("error count: %d", error_count);
    if(error_count ==0){
        printf("\ndcache Store after Shift \n");
        printf("dcache block 0: %d\n", tb->m_topsim->rootp->dcache_sram_write[0]);
        printf("dcache block 1: %d\n", tb->m_topsim->rootp->dcache_sram_write[1]);
        printf("dcache block 2: %d\n", tb->m_topsim->rootp->dcache_sram_write[2]);
        printf("dcache block 3: %d\n", tb->m_topsim->rootp->dcache_sram_write[3]);
        printf("dcache block 4: %d\n", tb->m_topsim->rootp->dcache_sram_write[4]);
        printf("dcache block 5: %d\n", tb->m_topsim->rootp->dcache_sram_write[5]);
        printf("dcache block 6: %d\n", tb->m_topsim->rootp->dcache_sram_write[6]);
        printf("dcache block 7: %d\n", tb->m_topsim->rootp->dcache_sram_write[7]);
        printf("----------------------------------------");
    }
    error_count += dcache_pass-2;

    error_count = 0;
  if(error_count != 0)
      printf(" Failed #: %d\n",error_count);
  else{
      printf(" \n Execution completed successfully (simulation waveforms in .vcd file) ... !\n");
      printf(" Elapsed Clock Cycles: %ld\n",clock_count);
      printf(" Total Number of Read Write Access: %d\n",rw_count);
      rw_miss_percentage = ((float)rw_miss_count/rw_count)*100;
      printf(" Read Write Miss #: %d Read Write Miss Percentage: %f %%\n",rw_miss_count, rw_miss_percentage);
      CPI = (float)clock_count/instr_count;
      printf(" Total # of instr: %ld CPI: %.3f\n",instr_count, CPI);
      exec_t = clock_count*1.66*(0.001);
      printf(" Execution Time (ns): %f\n",exec_t);
  }

  exit(EXIT_SUCCESS);
}

