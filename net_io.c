/* Net TP2_2022_IOPT_TOOLS - IOPT */
/* Automatic code generated by IOPT2C XSLT transformation. */
/* Please fill the necessary code to perform hardware IO. */

#include <stdlib.h>
#include "net_types.h"

#ifdef ARDUINO
#include <Arduino.h>
#define ANALOG_IN_MAX  1023
#define ANALOG_OUT_MAX 255
#else
#define INPUT    0
#define OUTPUT   1
#define ANALOG_IN_MAX  1023
#define ANALOG_OUT_MAX 1023
extern void pinMode( int, int );
extern int  digitalRead( int );
extern void digitalWrite( int, int );
extern int  analogRead( int );
extern void analogWrite( int, int );
#endif

// Remote IcE/Debug forced values:
#ifdef HTTP_SERVER
iopt_param_info *input_fv = NULL, *output_fv = NULL;
#endif

/* Executed just once, before net execution starts: */
void TP2_2022_IOPT_TOOLS_InitializeIO()
{
}

/* Read all hardware input signals and fill data-structure */
void TP2_2022_IOPT_TOOLS_GetInputSignals(
  TP2_2022_IOPT_TOOLS_InputSignals* inputs,
  TP2_2022_IOPT_TOOLS_InputSignalEvents* events )
{
  inputs->is_Humidity_Soil = 26;       // Soil Himudity Sensor Value%     <25
  inputs->is_Humidity_Air = 29;        // Air Humidy Sensor Value%        <60
  inputs->is_Meteo_Station_Rain =  rainMap; // Rain Forecast % of rainig  <40

   // Global variables receive values from Local variables
  inputSoilHumiValue = inputs->is_Humidity_Soil;
  inputAirHumiValue =  inputs->is_Humidity_Air;
  inputOverride = inputs->is_Override_Irrigation;

  // Transform analog value in boolean
  
  if (analogRead(OVERRIDE) > 750) {      // Analog input read on override PIN A0  
    inputs->is_Override_Irrigation = 1;  // Override Jumper calculation to BOL
  }else {
    inputs->is_Override_Irrigation = 0;  // Override Jumper calculation to BOL
  }
  

}

/* Write all output values to physical hardware outputs */
void TP2_2022_IOPT_TOOLS_PutOutputSignals(
  TP2_2022_IOPT_TOOLS_PlaceOutputSignals* place_out,
  TP2_2022_IOPT_TOOLS_EventOutputSignals* event_out,
  TP2_2022_IOPT_TOOLS_OutputSignalEvents* events )
{

  outputIrrigationValue = event_out->os_Irrigation;
  outputIrrigationDurationValue = place_out->os_Irrigation_Duration;
  outputSensorCheck = place_out->os_Sensor_Check;

  //digitalWrite(GREEN_LED, event_out->os_Irrigation);
  place_out->os_Irrigation_Duration;
  place_out->os_Sensor_Check;

  /* event_out->os_Irrigation */
  /* place_out->os_Irrigation_Duration */
  /* place_out->os_Sensor_Check */
}


/* Delay between loop iterations to save CPU and power consumption */
void TP2_2022_IOPT_TOOLS_LoopDelay()
{
  delay(5000);
}

/* Must return 1 to finish net execution */
int TP2_2022_IOPT_TOOLS_FinishExecution( TP2_2022_IOPT_TOOLS_NetMarking* marking )
{
  return 0;
}
