#ifndef DRIVERS_CONSOLE_HH
#define DRIVERS_CONSOLE_HH

#include <boost/format.hpp>

class Console {
public:
    virtual ~Console() {}
    virtual void write(const char *str, size_t len) = 0;
    virtual void newline() = 0;
};

namespace console {

void write(const char *msg, size_t len, bool lf);

}

#endif
