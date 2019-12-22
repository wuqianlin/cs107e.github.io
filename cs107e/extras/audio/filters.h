void filters_init();
void filters_phaserinit(unsigned length);
void filters_delayinit(unsigned length);
void filters_printtremarr();
unsigned filters_nofilter();
unsigned filters_lowpass();
unsigned filters_distortion();
unsigned filters_cirlowpass();
unsigned * filters_reverb(unsigned length, unsigned delay);
unsigned filters_totaldecay();
unsigned * filters_test(unsigned (*function)(void), int samples);
unsigned filters_phaser();
unsigned filters_delay();
unsigned * filters_reverb_wrapper(unsigned samples);
unsigned * filters_reverse(unsigned samples);