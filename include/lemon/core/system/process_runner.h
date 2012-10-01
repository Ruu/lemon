#ifndef LEMON_CORE_SYSTEM_PROCESSRUNNER_H
#define LEMON_CORE_SYSTEM_PROCESSRUNNER_H

#include <memory>
#include <vector>
#include "lemon/core/system/process.h"

namespace lemon {

class process_runner
{
public:
	void add(std::unique_ptr<process> p);
	void run() const;

private:
	std::vector<std::unique_ptr<process>> m_processes;
};

}

#endif // PROCESSRUNNER_H
