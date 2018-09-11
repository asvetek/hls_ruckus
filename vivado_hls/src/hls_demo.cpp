#include <stdio.h>
#include "hls_demo.hpp"

// group all algo outputs in algo_out_t structure so that
// Vivado HLS automatically synchronizes all algo outputs

void hls_demo(algo_config_t algo_config, algo_in_t algo_in, algo_out_t & algo_out)
		{
#pragma HLS PIPELINE II=6
#pragma HLS INTERFACE ap_none port=algo_out

	// Basic arithmetic operations
	algo_out.w = algo_in.a + algo_in.b + algo_config.cfg0;
	algo_out.x = algo_in.a + algo_in.b + algo_config.cfg1;
	algo_out.y = algo_in.a * algo_in.c - algo_config.cfg1;
	algo_out.z = algo_in.b / algo_in.d + algo_config.cfg2;

	return;
}
