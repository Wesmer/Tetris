#ifndef UTIL_NON_MOVEABLE
#define UTIL_NON_MOVEABLE

namespace util
{
    
class NonMovable
{
public:    
    NonMovable(NonMovable &&) = delete;
    NonMovable &operator = (NonMovable &&) = delete;
    
protected:
    NonMovable() = default;
};

} // namespace util

#endif // UTIL_NON_MOVEABLE
