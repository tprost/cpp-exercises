#include "temperature_converter.h"

double CelciusToFarenheit(double celcius) {
  return celcius * 1.8 + 32;
}

double FarenheitToCelcius(double farenheit) {
  return (farenheit - 32) / 1.8;
}
