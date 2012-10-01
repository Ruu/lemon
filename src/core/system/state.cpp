#include "lemon/core/system/state.h"

namespace lemon {

process_runner *state::get_process_runner()
{
	return &m_process_runner;
}

}
