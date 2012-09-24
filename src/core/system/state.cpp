#include "lemon/core/system/state.h"

namespace lemon {
namespace core {
namespace system {

process_manager *state::get_process_manager()
{
	return &m_process_manager;
}

}
}
}
