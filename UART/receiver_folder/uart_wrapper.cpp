//Wrapper for the UART

#include "uart_wrapper.h"
#include "uart2.hpp"
#include "uart3.hpp"

/////////uart  2 ///////////
bool uart2_init(unsigned int baud, int rx_size, int tx_size)
{
    return Uart2::getInstance().init(baud, rx_size, tx_size);
}

bool uart2_putChar(char msg_char, unsigned int timeout)
{
  return Uart2::getInstance().putChar(msg_char, timeout=portMAX_DELAY);
}

bool uart2_getChar(char* pInputChar, unsigned int timeout)
{
    return Uart2::getInstance().getChar(pInputChar, timeout=portMAX_DELAY);
}

///////uart 3 /////////////

bool uart3_init(unsigned int baud, int rx_size, int tx_size)
{
    return Uart3::getInstance().init(baud, rx_size, tx_size);
}

bool uart3_putChar(char msg_char, unsigned int timeout_ms)
{
  return Uart3::getInstance().putChar(msg_char, timeout_ms);
}

bool uart3_getChar(char* pInputChar, unsigned int timeout_ms)
{
    return Uart3::getInstance().getChar(pInputChar, timeout_ms);
}

