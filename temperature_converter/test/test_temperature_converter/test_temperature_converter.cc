#include "temperature_converter.h"
#include "test_temperature_converter.h"

using ::testing::Return;

TemperatureConverterTest::TemperatureConverterTest() {

}

TemperatureConverterTest::~TemperatureConverterTest() {};

void TemperatureConverterTest::SetUp() {};

void TemperatureConverterTest::TearDown() {};

TEST_F(TemperatureConverterTest, TestFarenheitToCelcius) {
  EXPECT_EQ(FarenheitToCelcius(32), 0);
}

TEST_F(TemperatureConverterTest, TestCelciusToFarenheit) {
  EXPECT_EQ(CelciusToFarenheit(0), 32);
}
