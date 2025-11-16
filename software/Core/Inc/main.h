/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g4xx_hal.h"

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

void HAL_HRTIM_MspPostInit(HRTIM_HandleTypeDef *hhrtim);

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BLED3_Pin GPIO_PIN_13
#define BLED3_GPIO_Port GPIOC
#define BLED4_Pin GPIO_PIN_14
#define BLED4_GPIO_Port GPIOC
#define PLL_INH_Pin GPIO_PIN_0
#define PLL_INH_GPIO_Port GPIOA
#define RELAY_Pin GPIO_PIN_1
#define RELAY_GPIO_Port GPIOA
#define VBUS_MEAS_Pin GPIO_PIN_2
#define VBUS_MEAS_GPIO_Port GPIOA
#define VBUCK_MEAS_Pin GPIO_PIN_3
#define VBUCK_MEAS_GPIO_Port GPIOA
#define BLED1_Pin GPIO_PIN_7
#define BLED1_GPIO_Port GPIOB
#define BLED2_Pin GPIO_PIN_9
#define BLED2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
