#if !defined(_RADIOBOARDS_MAINTAINED_STMicroelectronics_Nucleo_WL55JC_H)
#define _RADIOBOARDS_MAINTAINED_STMicroelectronics_Nucleo_WL55JC_H

#define RADIO_BOARDS_NAME "Nucleo_WL55JC"

#if RADIOLIB_SUPPORT_ENABLED
  #define Radio       STM32WLx

  // it also has custom RF switching
  #define RADIO_RF_SWITCH

  #define RADIO_RF_SWITCH_PINS                              \
    static const uint32_t RadioBoards_rfswitch_pins[] = {   \
    PC3,  PC5,  PC5, RADIOLIB_NC, RADIOLIB_NC};             \  

  #define RADIO_RF_SWITCH_TABLE \
  static const Module::RfSwitchMode_t RadioBoards_rfswitch_table[] = {  \
    /* mode                    PC3   PC4   PC5 */             \
    { STM32WLx::MODE_STBY,   { LOW,  LOW,  LOW  } },          \
    { STM32WLx::MODE_RX,     { HIGH, HIGH, LOW  } },          \
    { STM32WLx::MODE_TX_LP,  { HIGH, HIGH, HIGH } },          \
    { STM32WLx::MODE_TX_HP,  { HIGH, LOW, HIGH  } },          \
    END_OF_MODE_TABLE,                                        \
  };

#endif

#endif
