//18 pins / 2 pins per encoder = 9 maximum encoders
#define max_encoders 9

struct encoder
{
    int pin_a;
    int pin_b;
    volatile long value;
    volatile int lastEncoded;
};

struct encoder encoders[max_encoders];

/*
  Should be run for every rotary encoder you want to control
  Returns a pointer to the new rotary encoder structer
  The pointer will be NULL is the function failed for any reason
*/
struct encoder *setupencoder(int pin_a, int pin_b); 
