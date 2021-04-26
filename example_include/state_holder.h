#pragma once

#include<string>

namespace example_include {
    class StateHolder {
        private:
            std::string state;
        public:
            StateHolder(std::string initial_state);
            std::string GetState();
            void SetState(std::string state);
    };
}
