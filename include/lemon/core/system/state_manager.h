#ifndef LEMON_CORE_SYSTEM_STATEMANAGER_H
#define LEMON_CORE_SYSTEM_STATEMANAGER_H

#include <memory>
#include <stack>
#include "lemon/core/system/state.h"

namespace lemon {
namespace core {
namespace system {

class state_manager
{
public:
	void push(std::unique_ptr<state> s);
	void pop();

private:
	std::stack<std::unique_ptr<state>> m_states;
};

}
}
}

#endif //STATEMANAGER_H
