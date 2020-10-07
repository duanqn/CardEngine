#include <iostream>
#include "const.h"
#include "card.pb.h"

int main()
{
    JoinRequest req;
    req.set_version(VERSION_LATEST);
    std::cout << "Hello World!\n";
    return 0;
}
