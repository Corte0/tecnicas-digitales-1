`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:18:16 09/09/2025 
// Design Name: 
// Module Name:    bcd-to-7seg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module bcd_to_7seg(
    input [3:0] BCD,
	 input LT, BL, LE,
    output reg [7:0] display
    );

always @(*) begin
    if (!LT) 
        display = 8'b11111111;   // Test lamp
    else if (!BL) 
        display = 8'b00000000;   // Blank
    else begin
        case (BCD)
            4'd0: display = 8'b11111100; 
            4'd1: display = 8'b01100000;
            4'd2: display = 8'b11011010;
            4'd3: display = 8'b11110010;
            4'd4: display = 8'b01100110;
            4'd5: display = 8'b10110110;
            4'd6: display = 8'b10111110;
            4'd7: display = 8'b11100000;
            4'd8: display = 8'b11111110;
            4'd9: display = 8'b11110110;
            default: display = 8'b00000000;
        endcase
    end
end



endmodule
