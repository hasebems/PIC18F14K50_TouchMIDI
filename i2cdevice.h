/* 
 * File:   i2cdevice.h
 * Author: jca03205
 *
 * Created on 2014/12/14, 18:25
 */

#ifndef I2CDEVICE_H
#define	I2CDEVICE_H

#ifdef	__cplusplus
extern "C" {
#endif

extern bool i2cErr;
    
void initI2c( void );
void quitI2c( void );
int i2c_checkAdrs( unsigned char adrs );

void LPS331AP_init( void );
int LPS331AP_getPressure( int* retPrs );

void MPR121_init( void );
int MPR121_getTchSwData( unsigned char* retSw );

void ADXL345_init( unsigned char chipnum );
int ADXL345_getAccel( unsigned char chipnum, signed short* value );

void ADS1015_init( void );
void ADS1015_setNext( int adNum );
int ADS1015_getVolume( unsigned char* reg );

void MBR3110_init( void );
int MBR3110_writeConfig( uint8_t* capSenseConfigData );
int MBR3110_readTouchSw( unsigned char* touchSw );
int MBR3110_checkDevice( void );

#ifdef	__cplusplus
}
#endif

#endif	/* I2CDEVICE_H */

