#include "lemon/core/system/state_manager.h"

namespace lemon {
namespace core {
namespace system {

void state_manager::push(std::unique_ptr<state> s)
{
	m_states.push(std::move(s));
	m_states.top()->exec();
}

void state_manager::pop()
{
	m_states.pop();

	if (!m_states.empty())
		m_states.top()->exec();
}

}
}
}
