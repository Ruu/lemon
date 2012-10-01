#include "lemon/core/system/process_runner.h"

namespace lemon {

void process_runner::add(std::unique_ptr<process> p)
{
	m_processes.push_back(std::move(p));
}

void process_runner::run() const
{
	for (auto &p : m_processes) 
		p->run();
}

}

