#ifndef SRC_INPUT_BUTTONS_STRUCT_HPP_
#define SRC_INPUT_BUTTONS_STRUCT_HPP_


namespace tfa
{

/**
 *  Struct that holds the button Definition
 *
 */
struct Buttons
{
    /// Button to go left
    int left;
    /// Button to go right
    int right;
    /// Button unused
    int up;
    /// Button unused
    int down;
    /// Button to shoot
    int jump;
    /// Button to jump
    int shoot;
    /**
     * Is it a Controller?
     * This Flag activates the use of Extra Buttons and the extraFunktion.
     * InputDevice::extraFunktions(const int& key, const int& int2 , const int& int3)
     */
    bool isController = false;
    /// Extra button 0
    int extra ;
    /// Extra button 1
    int extra1;
    /**
     * Extra button 2
     * Default Init -32768
     * Defines max Angle for Left Controller stick
     */
    int extra2 = -32768;
    /**
     * Extra button 3
     * Default Init -15000
     * Defines min Angle for Left Controller stick
     */
    int extra3 = -15000;
    /**
     * Extra button 4
     * Default Init 15000
     * Defines min Angle for Left Controller stick
     */
    int extra4 =  15000;
    /**
     * Extra button 5
     * Default Init 32768
     * Defines max Angle for Left Controller stick
     */
    int extra5 =  32767;


};


} //namespace tfa

#endif //SRC_INPUT_BUTTONS_STRUCT_HPP_