#ifndef LEMON_CORE_SYSTEM_PROCESSMANAGER_H
#define LEMON_CORE_SYSTEM_PROCESSMANAGER_H

#include <memory>
#include <vector>
#include "lemon/core/system/process.h"

namespace lemon {
namespace core {
namespace system {

class process_manager
{
public:
	void add(std::unique_ptr<process> p);
	void run() const;

private:
	std::vector<std::unique_ptr<process>> processes;
};

}
}
}

#endif // PROCESSMANAGER_H
