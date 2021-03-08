#include "doctest.h"
#include "snowman.hpp"

using namespace ariel;

#include <string>
#include <algorithm>

using namespace std;

TEST_CASE ("Good snowman code") {
    CHECK(snowman(11111111) == string("\n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("\n  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(33333333) == string("\n   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("\n  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
    CHECK(snowman(33232124) == string("\n   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
    CHECK(snowman(12222212) == string("\n       \n _===_ \n\\(o.o)/\n ( : ) \n (\" \") "));
    CHECK(snowman(32443333) == string("\n   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444432) == string("\n  ___  \n (_*_) \n (- -) \n (> <) \n (\" \") "));
    CHECK(snowman(44242123) == string("\n  ___  \n (_*_) \n\\(o -) \n (] [)>\n (___) "));
    CHECK(snowman(41341144) == string("\n  ___  \n (_*_) \n (O,-) \n<(   )>\n (   ) "));
    CHECK(snowman(12341214) == string("\n _===_ \n (O.-)/ \n<( : )\n (   ) "));
    CHECK(snowman(12333321) == string("\n _===_ \n (O.O) \n/(] [)\\\n ( : ) "));
    CHECK(snowman(23232223) == string("\n  ___  \n ..... \n\\(o_O)/\n (] [) \n (___) "));
    CHECK(snowman(11112311) == string("\n _===_ \n\\(.,.) \n ( : )\\\n ( : ) "));
    CHECK(snowman(44114432) == string("\n  ___  \n (_*_) \n (. .) \n (> <)\n (\" \") "));
    CHECK(snowman(23232223) == string("\n  ___  \n ..... \n (o o) \n ( : ) \n ( : ) "));
    CHECK(snowman(31333342) == string("\n   _   \n  /_\\  \n (O,O) \n/(   )\\\n (\" \") "));
    CHECK(snowman(43232122) == string("\n  ___  \n (_*_) \n\\(o_O) \n (] [)>\n (\" \") "));

}

TEST_CASE ("Bad snowman code") {
    CHECK_THROWS(snowman(555)); //input number too small
    CHECK_THROWS(snowman(123412234)); //input number too big
    CHECK_THROWS(snowman(-1234123)); //negative value
    CHECK_THROWS(snowman(12361238));//illegal digits
}