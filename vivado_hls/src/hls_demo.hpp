#include "ap_int.h"

////////////////////////////////////////////////////////////////
//   algo_config_cfg0_V <= s_cfg_reg(0);
//   algo_config_cfg1_V <= s_cfg_reg(1)(15 downto 0);
//   algo_config_cfg2_V <= s_cfg_reg(2)(7 downto 0);

typedef struct {
	ap_int<32> cfg0;
	ap_int<16> cfg1;
	ap_uint<8> cfg2;
} algo_config_t;

////////////////////////////////////////////////////////////////
// algo_in_a_V <= s_INPUT_link_arr( 0 )( 4 downto 0 );
// algo_in_b_V <= s_INPUT_link_arr( 1 )( 19 downto 0 );
// algo_in_c_V <= s_INPUT_link_arr( 2 )( 30 downto 0 );
// algo_in_d_V <= s_INPUT_link_arr( 2 )( 50 downto 32 );

typedef struct {
	ap_int<5> a;
	ap_int<20> b;
	ap_int<31> c;
	ap_int<19> d;
} algo_in_t;

////////////////////////////////////////////////////////////////
// s_OUTPUT_link_arr( 0 )(24 DOWNTO 0)     <= algo_out_w_V;
// s_OUTPUT_link_arr( 0 )(191 DOWNTO 167)  <= algo_out_w_V;

// s_OUTPUT_link_arr( 1 )(17 DOWNTO 0)     <= algo_out_x_V;

// s_OUTPUT_link_arr( 2 )(31 DOWNTO 0)     <= algo_out_y_V;
// s_OUTPUT_link_arr( 2 )(40 DOWNTO 32)    <= algo_out_z_V;

// s_OUTPUT_link_arr( 47 )(24 DOWNTO 0)    <= algo_out_w_V;
// s_OUTPUT_link_arr( 47 )(191 DOWNTO 167) <= algo_out_w_V;

typedef struct {
	ap_uint<25> w;
	ap_uint<18> x;
	ap_int<32> y;
	ap_int<9> z;
} algo_out_t;

void hls_demo(algo_config_t algo_config, algo_in_t algo_in, algo_out_t & algo_out);
