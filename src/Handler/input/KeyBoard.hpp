#ifndef SRC_KEY_BOARD_HPP_
#define SRC_KEY_BOARD_HPP_

#include <array>
#include <SDL2/SDL.h>

/**
 *  Class for  Keyboard representation
 */
class KeyBoard
{
    private:
    /**
     *  @brief Array for Storing key States
     */
    std::array<bool, SDL_NUM_SCANCODES> m_keys;

    /// Stores the last relesed Key (Button Up)
    int m_lastReleastKey;

    public:
    /**
     *  @brief get the last releast key
     */
    int getLastReleased() const;

    /**
      *  @brief Constructor Init array m_keys with false vales
      */
    KeyBoard();

     /**
      *  @brief Return the state of a key
      *  @param key    The key
      *  @return true  if the key is is pressed (button down)
      *          false if not (button up)
      */
    bool isKeyPressed(const int& key) const;
    
     /**
      *  @brief update key state
      *  @param key the key to update
      *  @param inPressed true if pressed (button down)
      *                   false if not (button up)
      */
    void update(const int key, bool isPressed);


};

#endif //SRC_KEY_BOARD_HPP_