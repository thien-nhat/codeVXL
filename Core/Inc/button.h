/*
 * button.h
 *
 *  Created on: 1 thg 11, 2022
 *      Author: Nhat Thien
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdio.h>
#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define MAX_MODE 4

extern int MODE;
extern int TERM;

void button_processing();
void getKeyInput();


#endif /* INC_BUTTON_H_ */
