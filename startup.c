#include <stdint.h>

#define	__weak_function__	 __attribute__((weak, alias("Default_Handler")))

#define RAM_START	0x20000000U
#define RAM_SIZE	(128 * 1024U)
#define RAM_END		((RAM_START) + (RAM_SIZE))
#define STACK_START	RAM_END



extern	uint32_t _etext; // end of text start of data src
extern	uint32_t _sdata; // dst of data
extern	uint32_t _edata;
extern	uint32_t _sbss; // src of bss
extern	uint32_t _ebss;

void	Reset_Handler(void);
void	Default_Handler(void);

void	NMI_Handler(void) __weak_function__;
void	HardFault_Handler(void) __weak_function__;
void	MemManage_Handler(void) __weak_function__;
void	BusFault_Handler(void) __weak_function__;
void	UsageFault_Handler(void) __weak_function__;
void	SVC_Handler(void) __weak_function__;
void	DebugMon_Handler(void) __weak_function__;
void	PendSV_Handler(void) __weak_function__;
void	SysTick_Handler(void) __weak_function__;
void	WWDG_IRQHandler(void) __weak_function__;
void	PVD_IRQHandler(void) __weak_function__;
void	TAMP_STAMP_IRQHandler(void) __weak_function__;
void	RTC_WKUP_IRQHandler(void) __weak_function__;
void	FLASH_IRQHandler(void) __weak_function__;
void	RCC_IRQHandler(void) __weak_function__;
void	EXTI0_IRQHandler(void) __weak_function__;
void	EXTI1_IRQHandler(void) __weak_function__;
void	EXTI2_IRQHandler(void) __weak_function__;
void	EXTI3_IRQHandler(void) __weak_function__;
void	EXTI4_IRQHandler(void) __weak_function__;
void	DMA1_Stream0_IRQHandler(void) __weak_function__;
void	DMA1_Stream1_IRQHandler(void) __weak_function__;
void	DMA1_Stream2_IRQHandler(void) __weak_function__;
void	DMA1_Stream3_IRQHandler(void) __weak_function__;
void	DMA1_Stream4_IRQHandler(void) __weak_function__;
void	DMA1_Stream5_IRQHandler(void) __weak_function__;
void	DMA1_Stream6_IRQHandler(void) __weak_function__;
void	ADC_IRQHandler(void) __weak_function__;
void	CAN1_TX_IRQHandler(void) __weak_function__;
void	CAN1_RX0_IRQHandler(void) __weak_function__;
void	CAN1_RX1_IRQHandler(void) __weak_function__;
void	CAN1_SCE_IRQHandler(void) __weak_function__;
void	EXTI9_5_IRQHandler(void) __weak_function__;
void	TIM1_BRK_TIM9_IRQHandler(void) __weak_function__;
void	TIM1_UP_TIM10_IRQHandler(void) __weak_function__;
void	TIM1_TRG_COM_TIM11_IRQHandler(void) __weak_function__;
void	TIM1_CC_IRQHandler(void) __weak_function__;
void	TIM2_IRQHandler(void) __weak_function__;
void	TIM3_IRQHandler(void) __weak_function__;
void	TIM4_IRQHandler(void) __weak_function__;
void	I2C1_EV_IRQHandler(void) __weak_function__;
void	I2C1_ER_IRQHandler(void) __weak_function__;
void	I2C2_EV_IRQHandler(void) __weak_function__;
void	I2C2_ER_IRQHandler(void) __weak_function__;
void	SPI1_IRQHandler(void) __weak_function__;
void	SPI2_IRQHandler(void) __weak_function__;
void	USART1_IRQHandler(void) __weak_function__;
void	USART2_IRQHandler(void) __weak_function__;
void	USART3_IRQHandler(void) __weak_function__;
void	EXTI15_10_IRQHandler(void) __weak_function__;
void	RTC_Alarm_IRQHandler(void) __weak_function__;
void	OTG_FS_WKUP_IRQHandler(void) __weak_function__;
void	TIM8_BRK_TIM12_IRQHandler(void) __weak_function__;
void	TIM8_UP_TIM13_IRQHandler(void) __weak_function__;
void	TIM8_TRG_COM_TIM14_IRQHandler(void) __weak_function__;
void	TIM8_CC_IRQHandler(void) __weak_function__;
void	DMA1_Stream7_IRQHandler(void) __weak_function__;
void	FMC_IRQHandler(void) __weak_function__;
void	SDIO_IRQHandler(void) __weak_function__;
void	TIM5_IRQHandler(void) __weak_function__;
void	SPI3_IRQHandler(void) __weak_function__;
void	UART4_IRQHandler(void) __weak_function__;
void	UART5_IRQHandler(void) __weak_function__;
void	TIM6_DAC_IRQHandler(void) __weak_function__;
void	TIM7_IRQHandler(void) __weak_function__;
void	DMA2_Stream0_IRQHandler(void) __weak_function__;
void	DMA2_Stream1_IRQHandler(void) __weak_function__;
void	DMA2_Stream2_IRQHandler(void) __weak_function__;
void	DMA2_Stream3_IRQHandler(void) __weak_function__;
void	DMA2_Stream4_IRQHandler(void) __weak_function__;
void	CAN2_TX_IRQHandler(void) __weak_function__;
void	CAN2_RX0_IRQHandler(void) __weak_function__;
void	CAN2_RX1_IRQHandler(void) __weak_function__;
void	CAN2_SCE_IRQHandler(void) __weak_function__;
void	OTG_FS_IRQHandler(void) __weak_function__;
void	DMA2_Stream5_IRQHandler(void) __weak_function__;
void	DMA2_Stream6_IRQHandler(void) __weak_function__;
void	DMA2_Stream7_IRQHandler(void) __weak_function__;
void	USART6_IRQHandler(void) __weak_function__;
void	I2C3_EV_IRQHandler(void) __weak_function__;
void	I2C3_ER_IRQHandler(void) __weak_function__;
void	OTG_HS_EP1_OUT_IRQHandler(void) __weak_function__;
void	OTG_HS_EP1_IN_IRQHandler(void) __weak_function__;
void	OTG_HS_WKUP_IRQHandler(void) __weak_function__;
void	OTG_HS_IRQHandler(void) __weak_function__;
void	DCMI_IRQHandler(void) __weak_function__;
void	FPU_IRQHandler(void) __weak_function__;
void	SPI4_IRQHandler(void) __weak_function__;
void	SAI1_IRQHandler(void) __weak_function__;
void	SAI2_IRQHandler(void) __weak_function__;
void	QUADSPI_IRQHandler(void) __weak_function__;
void	CEC_IRQHandler(void) __weak_function__;
void	SPDIF_RX_IRQHandler(void) __weak_function__;
void	FMPI2C1_EV_IRQHandler(void) __weak_function__;
void	FMPI2C1_ER_IRQHandler(void) __weak_function__;


uint32_t isr_vertor[] __attribute__((section (".ivh_addrs"))) = {
	STACK_START,
	(uint32_t)Reset_Handler,
	(uint32_t)NMI_Handler,
	(uint32_t)HardFault_Handler,
	(uint32_t)MemManage_Handler,
	(uint32_t)BusFault_Handler,
	(uint32_t)UsageFault_Handler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SVC_Handler,
	(uint32_t)DebugMon_Handler,
	(uint32_t)0,
	(uint32_t)PendSV_Handler,
	(uint32_t)SysTick_Handler,
	(uint32_t)WWDG_IRQHandler,
	(uint32_t)PVD_IRQHandler,
	(uint32_t)TAMP_STAMP_IRQHandler,
	(uint32_t)RTC_WKUP_IRQHandler,
	(uint32_t)FLASH_IRQHandler,
	(uint32_t)RCC_IRQHandler,
	(uint32_t)EXTI0_IRQHandler,
	(uint32_t)EXTI1_IRQHandler,
	(uint32_t)EXTI2_IRQHandler,
	(uint32_t)EXTI3_IRQHandler,
	(uint32_t)EXTI4_IRQHandler,
	(uint32_t)DMA1_Stream0_IRQHandler,
	(uint32_t)DMA1_Stream1_IRQHandler,
	(uint32_t)DMA1_Stream2_IRQHandler,
	(uint32_t)DMA1_Stream3_IRQHandler,
	(uint32_t)DMA1_Stream4_IRQHandler,
	(uint32_t)DMA1_Stream5_IRQHandler,
	(uint32_t)DMA1_Stream6_IRQHandler,
	(uint32_t)ADC_IRQHandler,
	(uint32_t)CAN1_TX_IRQHandler,
	(uint32_t)CAN1_RX0_IRQHandler,
	(uint32_t)CAN1_RX1_IRQHandler,
	(uint32_t)CAN1_SCE_IRQHandler,
	(uint32_t)EXTI9_5_IRQHandler,
	(uint32_t)TIM1_BRK_TIM9_IRQHandler,
	(uint32_t)TIM1_UP_TIM10_IRQHandler,
	(uint32_t)TIM1_TRG_COM_TIM11_IRQHandler,
	(uint32_t)TIM1_CC_IRQHandler,
	(uint32_t)TIM2_IRQHandler,
	(uint32_t)TIM3_IRQHandler,
	(uint32_t)TIM4_IRQHandler,
	(uint32_t)I2C1_EV_IRQHandler,
	(uint32_t)I2C1_ER_IRQHandler,
	(uint32_t)I2C2_EV_IRQHandler,
	(uint32_t)I2C2_ER_IRQHandler,
	(uint32_t)SPI1_IRQHandler,
	(uint32_t)SPI2_IRQHandler,
	(uint32_t)USART1_IRQHandler,
	(uint32_t)USART2_IRQHandler,
	(uint32_t)USART3_IRQHandler,
	(uint32_t)EXTI15_10_IRQHandler,
	(uint32_t)RTC_Alarm_IRQHandler,
	(uint32_t)OTG_FS_WKUP_IRQHandler,
	(uint32_t)TIM8_BRK_TIM12_IRQHandler,
	(uint32_t)TIM8_UP_TIM13_IRQHandler,
	(uint32_t)TIM8_TRG_COM_TIM14_IRQHandler,
	(uint32_t)TIM8_CC_IRQHandler,
	(uint32_t)DMA1_Stream7_IRQHandler,
	(uint32_t)FMC_IRQHandler,
	(uint32_t)SDIO_IRQHandler,
	(uint32_t)TIM5_IRQHandler,
	(uint32_t)SPI3_IRQHandler,
	(uint32_t)UART4_IRQHandler,
	(uint32_t)UART5_IRQHandler,
	(uint32_t)TIM6_DAC_IRQHandler,
	(uint32_t)TIM7_IRQHandler,
	(uint32_t)DMA2_Stream0_IRQHandler,
	(uint32_t)DMA2_Stream1_IRQHandler,
	(uint32_t)DMA2_Stream2_IRQHandler,
	(uint32_t)DMA2_Stream3_IRQHandler,
	(uint32_t)DMA2_Stream4_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)CAN2_TX_IRQHandler,
	(uint32_t)CAN2_RX0_IRQHandler,
	(uint32_t)CAN2_RX1_IRQHandler,
	(uint32_t)CAN2_SCE_IRQHandler,
	(uint32_t)OTG_FS_IRQHandler,
	(uint32_t)DMA2_Stream5_IRQHandler,
	(uint32_t)DMA2_Stream6_IRQHandler,
	(uint32_t)DMA2_Stream7_IRQHandler,
	(uint32_t)USART6_IRQHandler,
	(uint32_t)I2C3_EV_IRQHandler,
	(uint32_t)I2C3_ER_IRQHandler,
	(uint32_t)OTG_HS_EP1_OUT_IRQHandler,
	(uint32_t)OTG_HS_EP1_IN_IRQHandler,
	(uint32_t)OTG_HS_WKUP_IRQHandler,
	(uint32_t)OTG_HS_IRQHandler,
	(uint32_t)DCMI_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)FPU_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SPI4_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SAI1_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SAI2_IRQHandler,
	(uint32_t)QUADSPI_IRQHandler,
	(uint32_t)CEC_IRQHandler,
	(uint32_t)SPDIF_RX_IRQHandler,
	(uint32_t)FMPI2C1_EV_IRQHandler,
	(uint32_t)FMPI2C1_ER_IRQHandler,
};

void	custom_main(void);

void	Reset_Handler(void)
{
	// copy all data section to ram
	uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
	uint32_t *src_addr = &_etext;
	uint32_t *dst_data = &_sdata;


	for (uint32_t i = 0; i < size; ++i)
		*(dst_data + i) = *(src_addr + i);

	// init bss at ram
	size = (uint32_t)&_ebss - (uint32_t)&_sbss;
	src_addr = &_sbss;

	for (uint32_t i = 0; i < size; ++i)
		*(src_addr + i) = 0;
	// call main
	custom_main();
}



void	Default_Handler(void)
{
	while(1);
}
