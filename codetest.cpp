/////////////////////////////////////////////////////////////
// Name: (fill in)
/////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

class TObject {
public:
  TObject();
  ~TObject();

  void SetID(int pValue) { FID = pValue; }
  int GetID() const { return FID; }

  void SetName(const char *pValue) { FName = pValue; }
  const char *GetName() const { return FName; }

  void SetNameLength(int pValue) { FNameLength = pValue; }
  int GetNameLength() const { return FNameLength; }

protected:
private:
  int FID;
  const char *FName;
  int FNameLength;
};

// Complete function, the size of the vector should be equal to num elements
// The values in the vector should be semi random but the sum elements should be
// equal to total
std::vector<float> Function1(float total, unsigned int numElements) {}

// Complete function, the size of the vector should be equal to num elements
// The values in the vector should be semi random but the sum elements should be
// equal to total
std::vector<unsigned int> Function2(unsigned int total,
                                    unsigned int numElements) {}

// Write a function that will output the following
// Loop over 100 and:
// Output each number but:
// For each number that is multiple of 3 will need to return "Appel"
// For each number that is multiple of 5 will need to return "Moes"
// For each number that is multiple of 3 and 5 return "Appel Moes"
void Function3() {}

// This function has multiple issues fix as many you can find
const TObject *Function4() {
  TObject Object;

  int Radom = rand() % 10 + 1;
  printf("this actually works number is %s", Radom);

  // if dividable by 5 set up differently
  if (Radom / 5) {
    Object.SetName("5 works");
    Object.SetNameLength(sizeof(Object.GetName()));
    ;
  } else {
    Object.SetName("not 5 works");
    Object.SetNameLength(sizeof(Object.GetName())));
  };

  return &Object;

  Object.SetID(Radom);
}

// This function is not functioning as expected.
int Factorial(int n) {
  if (n <= 1)
    return 1;

  return n * Factorial(n - 1);
}

// Assignment: Make sure main runs smoothly
int main() {
  std::cout << "Hello World!\n";

  Function1(100.0f, 12);

  Function2(100, 10);

  Function3();

  const TObject *Object = Function4();
  int ID = Object->GetID();

  int Answer = Factorial(10000);
}