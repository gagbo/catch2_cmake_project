#include "catch2/catch.hpp"
#include "project/lib.hpp"

TEST_CASE("BASIC_TEST", "[ant][set]") {
  Test instance;
  CHECK(instance.get_name() == "Test");
}
