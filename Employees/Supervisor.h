/**
 * @file Supervisor.h
 * @author Kevin Austin
 * @date 2023-11-17
 * @brief Supervisor class header
 * 
 * Declares Supervisor class variables and functions
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;//amount of employees supervisor supervised
 public:

/**
 * print function for supervisor clas
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates superviosr pay
 *
 * @pre 
 * @return double amount payed
 * @post 
 * 
 */
  double calculatePay();

/**
 * supervisor class constructor
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();

/**
 * supervisor class constuctor that calls the employee clas instructor and uses variables given
 *
 * @param int ID employee ID
 * @param int years employee years
 * @param double hourlyRate employee hourly rate
 * @param float hoursWorked employee hours worked
 * @param int numSupervised amount of employees supervised
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
