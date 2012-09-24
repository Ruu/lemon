#include "lemon/core/system/state_manager.h"

namespace lemon {
namespace core {
namespace system {

void state_manager::push(std::unique_ptr<state> s)
{
	states.push(std::move(s));
	states.top()->exec();
}

void state_manager::pop()
{
	states.pop();

	if (!states.empty())
		states.top()->exec();
}

}
}
}
