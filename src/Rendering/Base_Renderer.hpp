#ifndef F91288A4_7252_4C34_B6E2_8B8D004ADC46
#define F91288A4_7252_4C34_B6E2_8B8D004ADC46

    
class Base_Renderer
{
public:
    Base_Renderer() = default;
    virtual ~Base_Renderer() = default;

    virtual void render() const = 0;
    virtual void addData() = 0;
    virtual void removeData() = 0;
};


#endif /* F91288A4_7252_4C34_B6E2_8B8D004ADC46 */
