#ifndef CLIENT
#define CLIENT

#include <string>
class client
{
private:
    std::string name;
public:
    std::string getName();
    void setName(std::string name);
};


#endif