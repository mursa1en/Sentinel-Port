#include <stdbool.h>
#include <platform.h>
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"

timerHardware_t timerHardware[] = {
    // --- PWM / Motor Outputs ---
    DEF_TIM(TIM3, CH1, PB4,  TIM_USE_OUTPUT_AUTO,  0, 0), // S1
    DEF_TIM(TIM3, CH2, PB5,  TIM_USE_OUTPUT_AUTO,  0, 0), // S2
    DEF_TIM(TIM4, CH1, PB6,  TIM_USE_OUTPUT_AUTO,  0, 0), // S3
    DEF_TIM(TIM4, CH2, PB7,  TIM_USE_OUTPUT_AUTO,  0, 0), // S4
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_OUTPUT_AUTO,  0, 0), // S5
    DEF_TIM(TIM2, CH3, PB10, TIM_USE_OUTPUT_AUTO,  0, 0), // S6
    DEF_TIM(TIM5, CH1, PA0,  TIM_USE_OUTPUT_AUTO,  0, 0), // S7
    DEF_TIM(TIM5, CH2, PA1,  TIM_USE_OUTPUT_AUTO,  0, 0), // S8
    DEF_TIM(TIM2, CH1, PA15, TIM_USE_OUTPUT_AUTO,  0, 0), // S9
    DEF_TIM(TIM2, CH2, PB3,  TIM_USE_OUTPUT_AUTO,  0, 0), // S10
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_OUTPUT_AUTO,  0, 0), // S11

    // --- LED Strip on TIM3, CH3 on PB0 ---
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_LED,    0, 0), // 2812LED
};
const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);