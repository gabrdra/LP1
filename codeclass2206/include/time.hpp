#ifndef TIME
#define TIME

#include <string>
struct time
{
    std::string format_current_date(const std::string &format);
    std::string get_current_date();
    std::string get_current_time();
};


#endif
