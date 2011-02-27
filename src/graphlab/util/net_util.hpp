#ifndef NET_UTIL_HPP
#define NET_UTIL_HPP
#include <string>
#include <stdint.h>

namespace graphlab {
/// Returns the first non-localhost ipv4 address 
uint32_t get_local_ip();
/// Returns the first non-localhost ipv4 address as a standard dot delimited string
std::string get_local_ip_as_str();
/** Find a free tcp port. Note that this does not bind the port
 * so there is technically a race between calling this function and 
 * actually acquiring the port */
size_t get_free_tcp_port();
};

#endif