#include "state_holder.h"

namespace example_include {
    StateHolder::StateHolder(std::string initial_state) {
        this->state = initial_state;
    }

    std::string StateHolder::GetState() {
        return this->state;
    }

    void StateHolder::SetState(std::string state) {
        this->state = state;
    }
}
