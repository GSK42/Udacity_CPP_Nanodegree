/* Call runSensorDiagnostics for at least three different sensors
Print a system summary using the global error count
Demonstrate shadowing by declaring a local totalErrors variable inside main() */
#include <iostream>
#include "sensor_diagnostics.h"
#include <iomanip>
int main()
{
    int totalErrors = 999; 
    runSensorDiagnostics("Pitot Tube", 4);
    runSensorDiagnostics("Fuel Tank", 4);
    runSensorDiagnostics("Fuel monitor", 4);

    std::cout << "\n--- GLOBAL SYSTEM SUMMARY ---" << std::endl;
    std::cout << std::setw(15) << "Total local errors : " << totalErrors << std::endl;
    std::cout << std::setw(15) << "Total global errors : " << ::totalErrors << std::endl;

    return 0;
}