////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: bcd_to_7seg_synthesis.v
// /___/   /\     Timestamp: Tue Sep  9 19:27:44 2025
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim bcd_to_7seg.ngc bcd_to_7seg_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: bcd_to_7seg.ngc
// Output file	: /home/pedro/Facultad/Tercero/Tecnicas/tecnicas-digitales-1/tp2/tp2-tecnicas/netgen/synthesis/bcd_to_7seg_synthesis.v
// # of Modules	: 1
// Design Name	: bcd_to_7seg
// Xilinx        : /home/pedro/Opt/14.7/ISE_DS/ISE/
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module bcd_to_7seg (
  LT, BL, LE, BCD, display
);
  input LT;
  input BL;
  input LE;
  input [3 : 0] BCD;
  output [7 : 0] display;
  wire BCD_3_IBUF_0;
  wire BCD_2_IBUF_1;
  wire BCD_1_IBUF_2;
  wire BCD_0_IBUF_3;
  wire LT_IBUF_4;
  wire BL_IBUF_5;
  wire display_0_OBUF_6;
  wire display_7_OBUF_7;
  wire display_6_OBUF_8;
  wire display_5_OBUF_9;
  wire display_4_OBUF_10;
  wire display_3_OBUF_11;
  wire display_2_OBUF_12;
  wire display_1_OBUF_13;
  LUT6 #(
    .INIT ( 64'h02222828FFFFFFFF ))
  Mmux_display21 (
    .I0(BL_IBUF_5),
    .I1(BCD_3_IBUF_0),
    .I2(BCD_1_IBUF_2),
    .I3(BCD_0_IBUF_3),
    .I4(BCD_2_IBUF_1),
    .I5(LT_IBUF_4),
    .O(display_1_OBUF_13)
  );
  LUT6 #(
    .INIT ( 64'h22020A2AFFFFFFFF ))
  Mmux_display71 (
    .I0(BL_IBUF_5),
    .I1(BCD_3_IBUF_0),
    .I2(BCD_2_IBUF_1),
    .I3(BCD_0_IBUF_3),
    .I4(BCD_1_IBUF_2),
    .I5(LT_IBUF_4),
    .O(display_6_OBUF_8)
  );
  LUT6 #(
    .INIT ( 64'h00400444FFFFFFFF ))
  Mmux_display41 (
    .I0(BCD_0_IBUF_3),
    .I1(BL_IBUF_5),
    .I2(BCD_1_IBUF_2),
    .I3(BCD_3_IBUF_0),
    .I4(BCD_2_IBUF_1),
    .I5(LT_IBUF_4),
    .O(display_3_OBUF_11)
  );
  LUT6 #(
    .INIT ( 64'h222022AAFFFFFFFF ))
  Mmux_display61 (
    .I0(BL_IBUF_5),
    .I1(BCD_3_IBUF_0),
    .I2(BCD_0_IBUF_3),
    .I3(BCD_2_IBUF_1),
    .I4(BCD_1_IBUF_2),
    .I5(LT_IBUF_4),
    .O(display_5_OBUF_9)
  );
  LUT6 #(
    .INIT ( 64'h022002A2FFFFFFFF ))
  Mmux_display31 (
    .I0(BL_IBUF_5),
    .I1(BCD_1_IBUF_2),
    .I2(BCD_2_IBUF_1),
    .I3(BCD_3_IBUF_0),
    .I4(BCD_0_IBUF_3),
    .I5(LT_IBUF_4),
    .O(display_2_OBUF_12)
  );
  LUT6 #(
    .INIT ( 64'h02A8028AFFFFFFFF ))
  Mmux_display81 (
    .I0(BL_IBUF_5),
    .I1(BCD_1_IBUF_2),
    .I2(BCD_2_IBUF_1),
    .I3(BCD_3_IBUF_0),
    .I4(BCD_0_IBUF_3),
    .I5(LT_IBUF_4),
    .O(display_7_OBUF_7)
  );
  LUT6 #(
    .INIT ( 64'h0228028AFFFFFFFF ))
  Mmux_display51 (
    .I0(BL_IBUF_5),
    .I1(BCD_1_IBUF_2),
    .I2(BCD_2_IBUF_1),
    .I3(BCD_3_IBUF_0),
    .I4(BCD_0_IBUF_3),
    .I5(LT_IBUF_4),
    .O(display_4_OBUF_10)
  );
  IBUF   BCD_3_IBUF (
    .I(BCD[3]),
    .O(BCD_3_IBUF_0)
  );
  IBUF   BCD_2_IBUF (
    .I(BCD[2]),
    .O(BCD_2_IBUF_1)
  );
  IBUF   BCD_1_IBUF (
    .I(BCD[1]),
    .O(BCD_1_IBUF_2)
  );
  IBUF   BCD_0_IBUF (
    .I(BCD[0]),
    .O(BCD_0_IBUF_3)
  );
  IBUF   LT_IBUF (
    .I(LT),
    .O(LT_IBUF_4)
  );
  IBUF   BL_IBUF (
    .I(BL),
    .O(BL_IBUF_5)
  );
  OBUF   display_7_OBUF (
    .I(display_7_OBUF_7),
    .O(display[7])
  );
  OBUF   display_6_OBUF (
    .I(display_6_OBUF_8),
    .O(display[6])
  );
  OBUF   display_5_OBUF (
    .I(display_5_OBUF_9),
    .O(display[5])
  );
  OBUF   display_4_OBUF (
    .I(display_4_OBUF_10),
    .O(display[4])
  );
  OBUF   display_3_OBUF (
    .I(display_3_OBUF_11),
    .O(display[3])
  );
  OBUF   display_2_OBUF (
    .I(display_2_OBUF_12),
    .O(display[2])
  );
  OBUF   display_1_OBUF (
    .I(display_1_OBUF_13),
    .O(display[1])
  );
  OBUF   display_0_OBUF (
    .I(display_0_OBUF_6),
    .O(display[0])
  );
  INV   LT_INV_1_o1_INV_0 (
    .I(LT_IBUF_4),
    .O(display_0_OBUF_6)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

