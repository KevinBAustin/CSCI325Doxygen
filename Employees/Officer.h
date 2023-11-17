/**
 * @file Officer.h
 * @author Kevin Austin
 * @date 2023-11-17
 * @brief Officer class header
 * 
 * Declares Officer class and uses employee class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;//Officer Evilness
 public:

/**
 * print function for Officer
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * Calculates pay for Officer
 *
 * @pre 
 * @return double the amount to payed
 * @post 
 * 
 */
  double calculatePay();

/**
 * Officer class constructor
 *
 * @pre 
 * @post 
 * 
 */
  Officer();

/**
 * Officer class constructor that uses employee class conctuctor with variables given
 *
 * @param int ID employee id
 * @param int years employee years
 * @param double hourlyRate employee hourly rate
 * @param float hoursWorked employee hours worked
 * @param double evilness officer's evilness
 * @pre 
 * @post 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
