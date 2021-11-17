#include <dir2/file2.hpp>
#include <dir1/file1.hpp>

#include <iostream>

namespace Namespace2
{

void method()
{
    Namespace1::method();
    std::cout << "method - 2" << std::endl;
}

} // namespace Namespace2
