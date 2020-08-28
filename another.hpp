#pragma once
// You might want to use `pragma once` to guard instead -RJM
#include "test.hpp"

namespace TestProgram {
    class Another : public Test {
        // Ought to be here that we declare the `doThing` -RJM
    public:
        Another(); // Extra qualification. No need for Another:: here. -RJM
        ~Another();

        void doThing() override; // You (optionally) can annotate these w/override -RJM
    };
}