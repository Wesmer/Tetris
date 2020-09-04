#ifndef C0BC1AD1_E7F0_4CE7_8E22_49599F4A9E40
#define C0BC1AD1_E7F0_4CE7_8E22_49599F4A9E40

#include "./input/KeyBoard.hpp"

class InputHandler
{
private:
    KeyBoard keyboard;

public:
    InputHandler() = default;
    ~InputHandler() = default;

    void update(int key,bool isPressd);
    void handleInput();

};




#endif /* C0BC1AD1_E7F0_4CE7_8E22_49599F4A9E40 */
