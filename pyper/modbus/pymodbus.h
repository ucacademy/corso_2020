#ifndef _PY_MODBUS_H
#define _PY_MODBUS_H

#include <circle/serial.h>

class PyModbus
{
public:
	PyModbus(CSerialDevice *serial);
	~PyModbus();
	
	int sendReadDiscreteInputs(uint16_t first, uint16_t cnt, uint8_t *data);
	int sendReadCoils(uint16_t first, uint16_t cnt, uint8_t *data);
	int sendWriteSingleCoil(uint16_t ix, uint8_t data);
	int sendWriteMultipleCoils(uint16_t first, uint16_t cnt, uint8_t *data);
	int sendReadInputRegisters(uint16_t first, uint16_t cnt, uint16_t *data);
	int sendReadMultipleHoldingRegisters(uint16_t first, uint16_t cnt, uint16_t *data);
	int sendWriteSingleHoldingRegister(uint16_t ix, uint16_t data);
	int sendWriteMultipleHoldingRegisters(uint16_t first, uint16_t cnt, uint16_t *data);
	
	int waitResponse();
		
private:
	CSerialDevice *_serial;
	
};

#endif // _PY_MODBUS_H
