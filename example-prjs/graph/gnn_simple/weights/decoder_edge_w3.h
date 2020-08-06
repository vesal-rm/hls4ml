//Numpy array shape [4, 1]
//Min -0.283384860780
//Max 0.593480522081
//Number of zeros 0

#ifndef DECODER_EDGE_W3_H_
#define DECODER_EDGE_W3_H_

#ifndef __SYNTHESIS__
ap_fixed<16,6> decoder_edge_w3[4];
#else
ap_fixed<16,6> decoder_edge_w3[4] = {0.472278, -0.283385, 0.593481, 0.394813};
#endif

#endif