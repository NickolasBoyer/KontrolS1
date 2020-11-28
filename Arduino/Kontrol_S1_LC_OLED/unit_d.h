#ifndef UNIT_D
#define UNIT_D

#define CUP_CHIP_NR 0
#define CUE_CHIP_NR 1
#define LDG_CHIP_NR 2
#define RDG_CHIP_NR 3
#define DISP_CHIP_NR 4
#define LP_CHIP_NR 5
#define FX_CHIP_NR 6

#define BUTTONS_SERIAL_OFF_STATE 0b00000000, 0b00000000, 0b00000000, 0b00001100
#define LEDS_SERIAL_OFF_STATE 0b00000000, 0b01010101, 0b11111111, 0b11111111, 0b00000000, 0b11000000, 0b00000000

// 1.RB 2.CC 3.RT 4.CT 5.CB 6.LB 7.LT 8.DOT
#define DIGIT_STATE_1_32 0b10000011, 0b00000110
#define DIGIT_STATE_1_16 0b00100001, 0b01011110
#define DIGIT_STATE_1_8 0b00000000, 0b11111111
#define DIGIT_STATE_1_4 0b00011100, 0b11111111
#define DIGIT_STATE_1_2 0b10000010, 0b11111111
#define DIGIT_STATE_1 0b01011111, 0b11111111
#define DIGIT_STATE_2 0b10000011, 0b11111111
#define DIGIT_STATE_4 0b00011101, 0b11111111
#define DIGIT_STATE_8 0b00000001, 0b11111111
#define DIGIT_STATE_16 0b00100001, 0b01011111
#define DIGIT_STATE_32 0b10000011, 0b00000111

#define BUTTON_MAP 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31

#endif
