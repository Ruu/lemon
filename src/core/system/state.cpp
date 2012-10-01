#include "lemon/core/system/state.h"

namespace lemon {
namespace core {
namespace system {

process_runner *state::get_process_runner()
{
	return &m_process_runner;
}

}
}
}
