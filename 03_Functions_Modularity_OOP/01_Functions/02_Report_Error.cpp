/*
Your program is logging system errors but the error message is optional.

Implement a reportError message that utilizes pointers to model this and handle
errors that dont have an error message.

If message is not null, print "ERROR: <message>".

If message is null, print "No error message provided."
*/
#include <iostream>
#include <string>

// TODO: implement reportError
void reportError(std::string* message)
{
    // error handling for null pointers
    if(message!= nullptr)
    {
        //*message is needed to dereference the pointer, prints the address otherwise
        std::cout<<"ERROR : " << *message << std::endl;
    }
    else
    {
        std::cout<<"No ERROR" << std::endl;
    }
}

int main()
{
    std::string msg = "Camera Stream Failed.";
    reportError(&msg);
    reportError(nullptr);
    return 0;
}