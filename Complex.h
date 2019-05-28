/*
 * Complex.h
 *
 *  Created on: Mar 28, 2019
 *      Author: NEERAJ
 */

#ifndef HEADER_FILES_COMPLEX_H_
#define HEADER_FILES_COMPLEX_H_

#include <iostream>
#include <math.h>
using namespace std;
#define PI  3.1415926535897932

struct Complex
{
  float real,imag;
  public:
  Complex( float real = 0., float imag = 0.);            // constructor
  inline Complex operator+(const Complex&) const;        // operator+()
  inline Complex operator-(const Complex&) const;        // operator-()
  inline Complex operator*(const Complex&) const;        // operator*()
};

Complex cexp(float real, float imag);                    //Complex exponential  e^(a+ib)


/**
 * @brief Constructor- Initialize the data members
 *
 * @return Complex number
 */
Complex::Complex( float r, float i )
{
      real = r;
      imag = i;
}


/**
 * @brief Operator+ Used to add two Complex numbers
 *
 * @return Complex number
 */
inline Complex Complex::operator+ (const Complex& c) const
{
      Complex result;
      result.real = (this->real + c.real);
      result.imag = (this->imag + c.imag);
      return result;
}


/**
 * @brief Operator- Used to subtract two Complex numbers
 *
 * @return Complex number
 */
inline Complex Complex::operator- (const Complex& c) const
{
      Complex result;
      result.real = (this->real - c.real);
      result.imag = (this->imag - c.imag);
      return result;
}


/**
 * @brief Operator* Used to multiply two Complex numbers
 *
 * @return Complex number
 */
inline Complex Complex::operator* (const Complex& c) const
{
      Complex result;
      result.real = (this->real * c.real) - (this->imag * c.imag);
      result.imag = (this->imag * c.real) + (this->real * c.imag);
      return result;
}


/**
 * @brief Cmplex exponential Function- Used to add compute e^(a+ib)
 *
 * @return Complex number
 */
Complex cexp (float real, float imag)
{
    Complex result;
    float er = expf(real);
    result.real = er * cosf(imag);
    result.imag = -er * sinf(imag);
    return result;
}

#endif /* HEADER_FILES_COMPLEX_H_ */
