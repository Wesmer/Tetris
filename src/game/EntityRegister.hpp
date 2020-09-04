#ifndef E1CF7222_1495_4C3E_8FDE_EB87DDBDD70B
#define E1CF7222_1495_4C3E_8FDE_EB87DDBDD70B

#include <vector>
#include "CompleteStone.hpp"
#include "../util/Singleton.hpp"

class EntityRegister : public util::Singleton<EntityRegister>
{
private:
    friend class util::Singleton <EntityRegister>;

    std::vector<CompleteStone*> allStones;

    EntityRegister() = default;
    ~EntityRegister();
public:

    int createStone(Component com);
    CompleteStone* getStone(int id);
    void removeStone(int id);

private:
    void pushEvent(CompleteStone* stone);
};





#endif /* E1CF7222_1495_4C3E_8FDE_EB87DDBDD70B */
