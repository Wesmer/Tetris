#ifndef CF49644F_1A53_416B_9CDF_3C8C57345B08
#define CF49644F_1A53_416B_9CDF_3C8C57345B08

#include "Base_Renderer.hpp"
  
class Base_Renderable
{

public:
    Base_Renderable() = default;
    virtual ~Base_Renderable() = default;

    virtual void render(Base_Renderer* render) const = 0;
};

#endif /* CF49644F_1A53_416B_9CDF_3C8C57345B08 */
