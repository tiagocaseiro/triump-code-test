/////////////////////////////////////////////////////////////
// Name: Tiago Ferreira
/////////////////////////////////////////////////////////////

#include <iostream>
#include <limits>
#include <vector>

class TObject
{
public:
    // Added default ctor and dtor
    TObject()  = default;
    ~TObject() = default;

    void SetID(int pValue)
    {
        FID = pValue;
    }

    int GetID() const
    {
        return FID;
    }

    // Didn't feel safe to rely on a const char* and then just hold that pointer
    // It could come from anywhere and have whatever lifetime
    void SetName(const std::string& pValue)
    {
        FName = pValue;
    }
    const std::string& GetName() const
    {
        return FName;
    }

    // Didn't feel like a safe API to have the length being set separate to the name. What if we forget to set the
    // length and then have an operation that relies on it?
    int GetNameLength() const
    {
        return FName.size();
    }

private:
    // FID and FNameLength were unitialized and using before initializing it is Undefined Behavior
    int FID = -1;
    // Set FName to std::string it gives us the length of the string by default
    std::string FName;
};

// Complete function, the size of the vector should be equal to num elements
// The values in the vector should be semi random but the sum elements should be
// equal to total
std::vector<float> Function1(float, unsigned int numElements)
{
    std::vector<float> values = std::vector<float>(numElements, 0);
    return values;
}

// Complete function, the size of the vector should be equal to num elements
// The values in the vector should be semi random but the sum elements should be
// equal to total
std::vector<unsigned int> Function2(unsigned int, unsigned int numElements)
{
    std::vector<unsigned int> values = std::vector<unsigned int>(numElements, 0);
    return values;
}

template <typename T>
std::vector<T> GenerateSumTotalRandomValues(T total, unsigned int numElements)
{
    // static_assert
    std::vector<T> values = std::vector<T>(numElements, 0);
    return values;
}

// Write a function that will output the following
// Loop over 100 and:
// Output each number but:
// For each number that is multiple of 3 will need to return "Appel"
// For each number that is multiple of 5 will need to return "Moes"
// For each number that is multiple of 3 and 5 return "Appel Moes"
void Function3()
{
    for(int i = 0; i != 100; i++)
    {
        std::string msg;
        if(i % 3 == 0)
        {
            msg += "Appel ";
        }

        if(i % 5 == 0)
        {
            msg += "Moes";
        }

        if(msg.empty() == false)
        {
            std::cout << i << ": " << msg << std::endl;
        }
    }
}

// See a reason to return a pointer
// This function has multiple issues fix as many you can find
TObject Function4()
{
    TObject Object;

    // Is this random?
    int random = rand() % 10 + 1;
    printf("this actually works number is %d\n", random);

    // if dividable by 5 set up differently
    if(random % 5 == 0)
    {
        Object.SetName("5 works");
    }
    else
    {
        Object.SetName("not 5 works");
    }

    // Moved SetID up so it doesn't attempt to execute after return
    Object.SetID(random);

    // Return no longer returns reference to local variable
    return Object;
}

// This function is not functioning as expected.
long double Factorial(long double n)
{
    if(n <= 1)
        return 1;
    return n * Factorial(n - 1);
}

// Assignment: Make sure main runs smoothly
int main()
{
    std::cout << "Hello World!\n";

    Function1(100.0f, 12);

    Function2(100, 10);

    Function3();

    const TObject Object = Function4();
    // It used to return a pointer and we'd dereference that pointer with null checking
    int ID = Object.GetID();

    auto Answer = Factorial(10000);
}
