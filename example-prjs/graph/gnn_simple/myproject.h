#ifndef MYPROJECT_H_
#define MYPROJECT_H_

#include <complex>
#include "ap_int.h"
#include "ap_fixed.h"

#include "parameters.h"

void myproject(
	       input_t     N[N_NODES][N_FEATURES],
	       input_t     E[N_EDGES][E_FEATURES],
               index_t     receivers[N_EDGES][1],
               index_t     senders[N_EDGES][1],
	       result_t    e[N_EDGES][1],
	       unsigned short &const_size_in,
	       unsigned short &const_size_out);
#endif
