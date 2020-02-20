#include <ArduinoFake.h>
#include <unity.h>
#include <MyLib.h>

void test_something() {
    TEST_ASSERT_EQUAL(1,1);
}

int main(int argc, char **argv){
    UNITY_BEGIN();
    RUN_TEST(test_something);
    UNITY_END();
}
