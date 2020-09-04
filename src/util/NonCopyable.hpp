#ifndef UTIL_NON_COPYABLE
#define UTIL_NON_COPYABLE

namespace util
{

class NonCopyable
{
public:    
    // Note: Scott Meyers mentions in his Effective Modern
	//       C++ book, that deleted functions should generally
	//       be public as it results in better error messages
	//       due to the compilers behavior to check accessibility
	//       before deleted status

    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator = (const NonCopyable&) = delete;

protected:
    NonCopyable() = default;
};
  
} // namespace util


#endif /* UTIL_NON_COPYABLE */
