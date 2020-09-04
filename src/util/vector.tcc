#include <algorithm>

namespace util
{
    
template <typename T>
void remove(std::vector<T>& vector,const T& valueToRemove)
{
    vector.erase(std::remove(vector.begin(), vector.end(), valueToRemove), vector.end());
}
    

} // namespace util
