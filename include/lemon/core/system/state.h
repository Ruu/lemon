#ifndef LEMON_CORE_SYSTEM_STATE_H
#define LEMON_CORE_SYSTEM_STATE_H

#include "lemon/core/system/process_manager.h"

namespace lemon {
namespace core {
namespace system {

class state
{
public:
	virtual void exec() = 0;

protected:
	process_manager *get_process_manager();

private:
	process_manager m_process_manager;
};

}
}
}

#endif // STATE_H
