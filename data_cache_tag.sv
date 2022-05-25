// This is the tag-ram unit for direct-mapped write-allocate, write-back data cache,
// developed by Ali Muhtaroglu in support of education for Computer Architecture / Organization courses
// at METU Northern Cyprus Campus.

`include "config.sv"
`include "constants.sv"

module data_cache_tag(
    input           clock, //write clock
    input 			we, // tag request/command, e.g. RW
    input [`DCACHE_INDEX-1:0]  index, // cache index
    input 			valid_in,
    input 			dirty_in,
    input [`DTAGMSB:`DTAGLSB]  tag_in, // input tag bits
    output 			valid_out,
    output 			dirty_out,
    output [`DTAGMSB:`DTAGLSB] tag_out);  // output tag bits

   bit dcache_valid[`DCACHE_SIZE-1:0];
   bit dcache_dirty[`DCACHE_SIZE-1:0];
   bit [`DTAGMSB:`DTAGLSB] dcache_tag[`DCACHE_SIZE-1:0];

   initial begin
        dcache_valid = '{default:0};  // initialize all valid bits in cache to 0
        dcache_dirty = '{default:0};  // initialize all dirty bits in cache to 0
        dcache_tag = '{default:0};    // initialize all tag bits in cache to 0
   end

   assign tag_out = dcache_tag[index];
   assign valid_out = dcache_valid[index];
   assign dirty_out = dcache_dirty[index];

   always_ff @(posedge(clock)) begin
      if (we) begin
        dcache_tag[index] <= tag_in;
        dcache_valid[index] <= valid_in;
        dcache_dirty[index] <= dirty_in;
      end
   end

endmodule
