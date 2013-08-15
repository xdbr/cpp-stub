#include "lest.hpp"

const lest::test specification[] =
{
    "Empty string has length zero (succeed)", []
    {
        EXPECT( 0 == std::string(  ).length() );
        EXPECT( 0 == std::string("").length() );
    },
};

int main() {
    return lest::run( specification );
}