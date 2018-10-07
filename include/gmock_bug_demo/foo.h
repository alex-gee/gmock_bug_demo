#include <iostream>
#include <memory>

class Foo
{
public:

  Foo(){};
  virtual ~Foo(){};
  virtual bool sayHello()
  {
    std::cout << "Hello" << std::endl;
    return true;
  }
};

typedef std::unique_ptr<Foo> FooUniquePtr;