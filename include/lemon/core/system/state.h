#ifndef LEMON_CORE_SYSTEM_STATE_H
#define LEMON_CORE_SYSTEM_STATE_H

#include "lemon/core/system/process_runner.h"

namespace lemon {

class state
{
public:
	virtual void exec() = 0;

protected:
	process_runner *get_process_runner();

private:
	process_runner m_process_runner;
};

}

#endif // STATE_H
