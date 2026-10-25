/*
Instructions:

Open logs.txt using std::ifstream.

Read each line using std::getline(file, line).

Use a std::stringstream to split each line using , as the delimiter.

Store the parsed fields in:

    std::string timestamp

    std::string level

    std::string message

Print each part clearly.

If level is "ERROR", print "!!! This is an error."
*/

#include<iostream>
#include<string>
#include<sstream>
#include <fstream>

int main()
{
    std::ifstream file("log.txt");
    if(!file)
    {
        std:: cerr << "Could not open log file. " << std::endl;        
    }

    std::string line;
     while (std::getline(file,line))
     {
        std::stringstream ss(line);
        std::string timestamp, level, message;
        std::getline(ss,timestamp,',');
        std::getline(ss,level,',');
        std::getline(ss,message);
    
        std::cout << "Timestamp is : " << timestamp <<std::endl;;
        std::cout << "Severity is : " << level <<std::endl;;
        std::cout << "Message is : " << message <<std::endl;;                
        if (level == "ERROR")
        {
            std::cerr << "ERROR! Fix now" << std::endl;
        }        
        std::cout << "----------------------\n";
     }
     file.close();
     /*
      C++ supports this through the RAII pattern: when a file stream object goes out of scope, 
      it automatically closes the file and releases the resource. 
      RAII : Resource Acquisition Is Initialization.
      RAII binds resource lifetime to object scope for deterministic cleanup.
      You can also close files manually with .close() if you need to free a resource early or flush data to disk. 
      Handling errors and resources properly makes your programs more robust and production-ready.
     */
     return 0;
}