#include <iostream>

// Stubbed function based on Ryan Gordon's implementation here:
//   http://icculus.org/SteamDevDays/SteamDevDays2014-LinuxPorting.pdf
#define STUBBED(msg)                                         \
do {                                                         \
  std::cerr << "STUBBED: " << msg << " at " << __FUNCTION__  \
            << " (" << __FILE__ << ":" << __LINE__ << ")\n"; \
} while (0)
