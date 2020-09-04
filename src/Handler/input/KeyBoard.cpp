#include "KeyBoard.hpp"


    KeyBoard::KeyBoard()
    {
        for (unsigned int i = 0; i < m_keys.size(); i++)
        {
            m_keys[i] = false;
        }
        this->m_lastReleastKey = -1;   
    }

    void KeyBoard::update(const int key, bool isPressed)
    {
        m_keys[key] = isPressed; 

        if (!isPressed)
        {
            m_lastReleastKey = key;
        }
    }

    bool KeyBoard::isKeyPressed(const int& key) const
    {     
        return m_keys[key];
    }

    int KeyBoard::getLastReleased() const
    {
        return this->m_lastReleastKey;
    }


