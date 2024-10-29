#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Provider.h>
#include <iostream>
#include <memory>
#include <catch.hpp>


using namespace std;

TEST_CASE( "Correct creation of Provider","[Provider construction]" )
{
    // Arrange
    shared_ptr<Provider> provider1 = make_shared<Provider>(1,"Juan", "Calle123");
    
    // Act
    
    int providerCode = provider1->getCode();
    string providerName = provider1->getName();
    string providerAddress = provider1->getAddress();

    // Assert
    CHECK( providerCode == 1);
    CHECK( providerName == "Pedro" );
    CHECK( providerAddress == "Calle1123");
}




