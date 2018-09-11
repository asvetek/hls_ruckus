#include <stdio.h>
#include "hls_demo.hpp"

int main(void)
{
   algo_config_t algo_config; 
   algo_in_t algo_in;
   algo_out_t algo_out;

   algo_config.cfg0=10;
   algo_config.cfg1=20;
   algo_config.cfg2=30;

   algo_in.a=1;
   algo_in.b=2;
   algo_in.c=3;
   algo_in.d=4;

   hls_demo(algo_config, algo_in, algo_out);

   // for demonstration purposes only
   if (algo_out.w == (algo_in.a + algo_in.b + algo_config.cfg0) )
	   return 0; // indicate success by returning zero
   else
	   return 1; // indicate failure by returning non-zero
}
