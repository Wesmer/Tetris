#ifndef UTIL_SINGLETON
#define UTIL_SINGLETON

#include "NonCopyable.hpp"
#include "NonMovable.hpp"

namespace util
{

template <class C>    
class Singleton : public NonCopyable 
{
public:    
    static C& getInstance()
    {
       static C instance;
       return instance;
    }

    virtual ~Singleton() = default;

protected:
    Singleton() = default;
};
    
} // namespace util

#endif // UTIL_SINGLETON