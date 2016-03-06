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

TEST_F(TemperatureConverterTest, TestFarenheitToCelciusWithFloatiness) {
  ASSERT_DOUBLE_EQ(FarenheitToCelcius(46.4), 8);
}

TEST_F(TemperatureConverterTest, TestNegativeFarenheitToCelcius) {
  ASSERT_DOUBLE_EQ(FarenheitToCelcius(14), -10);
}

TEST_F(TemperatureConverterTest, TestCelciusToFarenheit) {
  EXPECT_EQ(CelciusToFarenheit(0), 32);
}

TEST_F(TemperatureConverterTest, TestCelciusToFarenheitWithFloatiness) {
  ASSERT_DOUBLE_EQ(CelciusToFarenheit(8), 46.4) << "CelciusToFarenheit(8) was equal to " << CelciusToFarenheit(8);
}

TEST_F(TemperatureConverterTest, TestNegativeCelciusToFarenheit) {
  ASSERT_DOUBLE_EQ(CelciusToFarenheit(-10), 14);
}


