#pragma once
namespace TestProgram {
    class Test {
        // All fields in a `class` are presumed private -RJM
    protected:
        // The above is overridden by `protected` and `public` labels -RJM

        // You can not call a protected method inside global namespace. -RJM

        // Also, you can "pure" virtual functions to indicate that they
        //  shall not be called except by their children's overrides -RJM
        virtual void doThing() = 0;

    public:
        Test();

        ~Test();
    };
}