#include "lemon/core/system/process_manager.h"

namespace lemon {
namespace core {
namespace system {

void process_manager::add(std::unique_ptr<process> p)
{
	processes.push_back(std::move(p));
}

void process_manager::run() const
{
	for (auto &p : processes) 
		p->run();
}

}
}
}
