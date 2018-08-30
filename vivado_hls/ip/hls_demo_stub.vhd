-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.2 (lin64) Build 1909853 Thu Jun 15 18:39:10 MDT 2017
-- Date        : Thu Aug 30 10:23:15 2018
-- Host        : moonraker.cern.ch running 64-bit Scientific Linux CERN SLC release 6.10 (Carbon)
-- Command     : write_vhdl -force -mode synth_stub /data/alex/repos/hls_ruckus/vivado_hls/ip/hls_demo_stub.vhd
-- Design      : hls_demo
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7vx690tffg1927-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity hls_demo is
  Port ( 
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    algo_config_cfg0_V : in STD_LOGIC_VECTOR ( 31 downto 0 );
    algo_config_cfg1_V : in STD_LOGIC_VECTOR ( 15 downto 0 );
    algo_config_cfg2_V : in STD_LOGIC_VECTOR ( 7 downto 0 );
    algo_in_a_V : in STD_LOGIC_VECTOR ( 4 downto 0 );
    algo_in_b_V : in STD_LOGIC_VECTOR ( 19 downto 0 );
    algo_in_c_V : in STD_LOGIC_VECTOR ( 30 downto 0 );
    algo_in_d_V : in STD_LOGIC_VECTOR ( 18 downto 0 );
    algo_out_w_V : out STD_LOGIC_VECTOR ( 24 downto 0 );
    algo_out_x_V : out STD_LOGIC_VECTOR ( 17 downto 0 );
    algo_out_y_V : out STD_LOGIC_VECTOR ( 31 downto 0 );
    algo_out_z_V : out STD_LOGIC_VECTOR ( 8 downto 0 )
  );

end hls_demo;

architecture stub of hls_demo is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,algo_config_cfg0_V[31:0],algo_config_cfg1_V[15:0],algo_config_cfg2_V[7:0],algo_in_a_V[4:0],algo_in_b_V[19:0],algo_in_c_V[30:0],algo_in_d_V[18:0],algo_out_w_V[24:0],algo_out_x_V[17:0],algo_out_y_V[31:0],algo_out_z_V[8:0]";
begin
end;
