#ifndef FRAMES_H  // Guardas de inclusão
#define FRAMES_H

#include "pico/stdlib.h"

#define NUM_PIXELS 25

double teclaA_frame[25] = { 0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0 }; 

double teclaB_frame[25] = { 1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0, 
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0 };

double teclaC_frame[25] = { 0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8};

double teclaD_frame[25] = { 0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5 };

double teclaHASHTAG_frame[25] = { 0.2, 0.2, 0.2, 0.2, 0.2,
                                  0.2, 0.2, 0.2, 0.2, 0.2,
                                  0.2, 0.2, 0.2, 0.2, 0.2,
                                  0.2, 0.2, 0.2, 0.2, 0.2,
                                  0.2, 0.2, 0.2, 0.2, 0.2};

double tecla1_frame1[25] = { 0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0}; 

double tecla1_frame2[25] = { 0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 1.0, 1.0, 1.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0};

double tecla1_frame3[25] = { 0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0};

double tecla1_frame4[25] = { 0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 1.0, 1.0, 1.0, 0.0, 
                             0.0, 1.0, 1.0, 1.0, 0.0,
                             0.0, 1.0, 1.0, 1.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0};

double tecla1_frame5[25] = { 1.0, 0.0, 0.0, 0.0, 1.0,
                             0.0, 1.0, 1.0, 1.0, 0.0, 
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             0.0, 1.0, 1.0, 1.0, 0.0,
                             1.0, 0.0, 0.0, 0.0, 1.0};

double tecla1_frame6[25] = { 1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 1.0, 1.0, 1.0, 1.0, 
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             1.0, 1.0, 1.0, 1.0, 1.0};


double tecla6_frame1[25] = { 1.0, 0.0, 0.0, 0.0, 1.0, 
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             1.0, 0.0, 0.0, 0.0, 1.0 };

double tecla6_frame2[25] = { 0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             1.0, 0.0, 0.0, 0.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla6_frame3[25] = { 0.0, 1.0, 0.0, 1.0, 0.0, 
                             1.0, 0.0, 0.0, 0.0, 1.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             1.0, 0.0, 0.0, 0.0, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0 };

double tecla6_frame4[25] = { 0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 0.0, 0.0, 0.0, 
                             1.0, 0.0, 1.0, 0.0, 1.0,
                             0.0, 0.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla6_frame5[25] = { 0.0, 0.0, 0.0, 0.0, 0.0, 
                             1.0, 0.0, 0.0, 0.0, 1.0, 
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             1.0, 0.0, 0.0, 0.0, 1.0,
                             0.0, 0.0, 0.0, 0.0, 0.0 };

double tecla6_frame6[25] = { 0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla5_frame1[25] = { 1.0, 0.5, 0.0, 0.5, 1.0,
                             0.5, 0.0, 0.0, 0.0, 0.5, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.5, 0.0, 0.0, 0.0, 0.5,
                             1.0, 0.5, 0.0, 0.5, 1.0};

double tecla5_frame2[25] = { 0.5, 0.0, 0.5, 0.0, 0.5,
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.5, 0.0, 0.0, 0.0, 0.5,
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             0.5, 0.0, 0.5, 0.0, 0.5};

double tecla5_frame3[25] = { 0.0, 0.5, 1.0, 0.5, 0.0,
                             0.5, 0.0, 0.5, 0.0, 0.5, 
                             1.0, 0.5, 0.0, 0.5, 1.0,
                             0.5, 0.0, 0.5, 0.0, 0.5,
                             0.0, 0.5, 1.0, 0.5, 0.0};

double tecla5_frame4[25] = { 0.0, 1.0, 0.0, 1.0, 0.0,
                             1.0, 0.5, 0.5, 0.5, 1.0, 
                             0.0, 0.5, 0.0, 0.5, 0.0,
                             1.0, 0.5, 0.5, 0.5, 1.0,
                             0.0, 1.0, 0.0, 1.0, 0.0};

double tecla5_frame5[25] = { 0.5, 0.5, 0.5, 0.5, 0.5,
                             0.5, 1.0, 1.0, 1.0, 0.5, 
                             0.5, 1.0, 0.0, 1.0, 0.5,
                             0.5, 1.0, 1.0, 1.0, 0.5,
                             0.5, 0.5, 0.5, 0.5, 0.5};

double tecla5_frame6[25] = { 1.0, 0.0, 1.0, 0.0, 1.0,
                             0.0, 0.5, 0.5, 0.5, 0.0, 
                             1.0, 0.5, 0.0, 0.5, 1.0,
                             0.0, 0.5, 0.5, 0.5, 0.0,
                             1.0, 0.0, 1.0, 0.0, 1.0};

double tecla3_frame1[25] = { 0.0, 1.0, 1.0, 1.0, 0.0, 
                             1.0, 0.0, 1.0, 0.0, 1.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 1.0, 0.0,
                             0.0, 1.0, 1.0, 0.0, 0.0 };

double tecla3_frame2[25] = { 0.0, 0.0, 0.0, 0.0, 0.0, 
                             0.0, 1.0, 0.0, 0.0, 0.0, 
                             1.0, 1.0, 1.0, 1.0, 1.0,
                             0.0, 1.0, 0.0, 0.0, 0.0,
                             0.0, 0.0, 0.0, 0.0, 0.0 };

double tecla3_frame3[25] = { 0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 1.0, 0.0, 1.0, 0.0, 
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             0.0, 1.0, 0.0, 1.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla3_frame4[25] = { 0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla3_frame5[25] = { 1.0, 0.0, 0.0, 0.0, 1.0, 
                             1.0, 0.0, 0.0, 1.0, 1.0, 
                             1.0, 0.0, 1.0, 0.0, 1.0,
                             1.0, 1.0, 0.0, 0.0, 1.0,
                             1.0, 0.0, 0.0, 0.0, 1.0 };

double tecla3_frame6[25] = { 0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0,
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla4_frame1[25] = { 0.5, 1.0, 0.5, 1.0, 0.5, 
                             0.5, 1.0, 0.5, 1.0, 0.5, 
                             0.5, 1.0, 0.5, 1.0, 0.5, 
                             0.5, 1.0, 0.5, 1.0, 0.5, 
                             0.5, 1.0, 0.5, 1.0, 0.5 };

double tecla4_frame2[25] = { 1.0, 0.5, 0.0, 1.0, 0.5, 
                             1.0, 0.5, 0.0, 1.0, 0.5, 
                             1.0, 0.5, 0.0, 1.0, 0.5, 
                             1.0, 0.5, 0.0, 1.0, 0.5, 
                             1.0, 0.5, 0.0, 1.0, 0.5 };

double tecla4_frame3[25] = { 0.5, 0.0, 0.0, 0.5, 0.0, 
                             0.5, 0.0, 0.0, 0.5, 0.0, 
                             0.5, 0.0, 0.0, 0.5, 0.0, 
                             0.5, 0.0, 0.0, 0.5, 0.0, 
                             0.5, 0.0, 0.0, 0.5, 0.0 };

double tecla4_frame4[25] = { 0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0, 
                             0.0, 0.0, 1.0, 0.0, 0.0 };

double tecla4_frame5[25] = { 1.0, 1.0, 0.0, 1.0, 1.0, 
                             1.0, 1.0, 0.0, 1.0, 1.0, 
                             1.0, 1.0, 0.0, 1.0, 1.0, 
                             1.0, 1.0, 0.0, 1.0, 1.0, 
                             1.0, 1.0, 0.0, 1.0, 1.0 };

double tecla4_frame6[25] = { 0.0, 0.5, 0.0, 0.0, 0.5, 
                             0.0, 0.5, 0.0, 0.0, 0.5, 
                             0.0, 0.5, 0.0, 0.0, 0.5, 
                             0.0, 0.5, 0.0, 0.0, 0.5, 
                             0.0, 0.5, 0.0, 0.0, 0.5 };

                             
#endif
