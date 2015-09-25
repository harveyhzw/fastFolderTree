


#ifdef FUNCTIONS_EXPORTS
#define FUNCTIONSDLL_API __declspec(dllexport) 
#else
#define FUNCTIONSDLL_API __declspec(dllimport) 
#endif

namespace Funcs
{
    // This class is exported from the MathFuncsDll.dll
    class MyMathFuncs
    {
    public: 
        // Returns a + b
        static FUNCTIONSDLL_API double Add(double a, double b); 

        // Returns a - b
        static FUNCTIONSDLL_API double Subtract(double a, double b); 

        // Returns a * b
        static FUNCTIONSDLL_API double Multiply(double a, double b); 

        // Returns a / b
        // Throws const std::invalid_argument& if b is 0
        static FUNCTIONSDLL_API double Divide(double a, double b); 
    };
}