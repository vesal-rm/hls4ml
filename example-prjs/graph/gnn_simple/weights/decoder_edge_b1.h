//Numpy array shape [4]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 4

#ifndef DECODER_EDGE_B1_H_
#define DECODER_EDGE_B1_H_

#ifndef __SYNTHESIS__
ap_fixed<16,6> decoder_edge_b1[4];
#else
ap_fixed<16,6> decoder_edge_b1[4] = {0.000000, 0.000000, 0.000000, 0.000000};
#endif

#endif