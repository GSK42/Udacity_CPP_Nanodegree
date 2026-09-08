#include<iostream>
#include<string>
#include<sstream>

int main()
{
    std::string logline = "[2025-07-14 10:15:32] ERROR: Camera stream failed to start";
    std::stringstream ss(logline);

    std::string timestamp , severity , message ;
    std::getline (ss, timestamp, ']');
    //Removes "[" from th first element
    timestamp.erase(0,1);

    //Ignores space
    ss.ignore(1);
    std::getline (ss, severity, ':');

    //Ignores space
    ss.ignore(1);
    std::getline (ss, message);


    std::cout << "Timestamp is : " << timestamp <<std::endl;;
    std::cout << "Severity is : " << severity <<std::endl;;
    std::cout << "Message is : " << message <<std::endl;;
    return 0;
}
