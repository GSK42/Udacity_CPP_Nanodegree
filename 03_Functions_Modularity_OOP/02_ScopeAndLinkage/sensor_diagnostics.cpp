/* Define the global totalErrors
Add a static int log_level = 2; for internal linkage
Implement runSensorDiagnostics(sensorName, localErrors) to:
Loop and print simulated errors for the sensor
Increment the global totalErrors */
#include "sensor_diagnostics.h"
#include <iostream>
#include <iomanip>

int totalErrors {0};

static int log_level = 2;
void runSensorDiagnostics(std::string sensorName,int localErrors)
{   
    std::cout << std::setw(35) << "Running diognistics for : " << sensorName << std::endl;
    for (int i=0; i < localErrors; i++)
    {
        int j = 0;
        std::cout << std::setw(35) << "[Level  " << log_level << "]" <<
         ++j << "1: Detected anomaly" << std::endl;
         totalErrors++;
         
    }
    std::cout <<  "Diagnostics complete. Errors found: " << localErrors << std::endl;
    localErrors = 0;
    
    
}