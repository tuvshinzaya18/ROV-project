/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_12
#define LED3_GPIO_Port GPIOB
#define SPI_CS_Pin GPIO_PIN_8
#define SPI_CS_GPIO_Port GPIOA
#define ACCEL_INT_Pin GPIO_PIN_15
#define ACCEL_INT_GPIO_Port GPIOA
#define GYRO_INT_Pin GPIO_PIN_4
#define GYRO_INT_GPIO_Port GPIOB
#define MAG_INT_Pin GPIO_PIN_5
#define MAG_INT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

enum peripheral_idx {
    PERIPHERAL_STM32_CONFIG = 0,
    PERIPHERAL_MOTOR_CONRTOL= 1,
    PERIPHERAL_LED          = 2,
    PERIPHERAL_LEAK_DETECT  = 3,
    PERIPHERAL_TEMP_SENS    = 4,
    PERIPHERAL_PRES_SENS    = 5,
    PERIPHERAL_RAD_SENS     = 6,
    PERIPHERAL_CHLOR_SENS   = 7,
    PERIPHERAL_INVALID      = 8,
};

enum write_or_read {
    WRITE = 0,
    READ  = 1,
};

struct command {
    enum peripheral_idx peripheral;
    enum write_or_read writeRead;
    char type;
    char channel;
    short data;
};

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
