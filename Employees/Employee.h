/**
 * @file Employee.h
 * @author Kevin Austin
 * @date 2023-11-17
 * @brief The Employee class Header
 * 
 * Declares the following functions and variables of the employee class 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;//employee years
  
 protected:
  double hourlyRate;//employee hourly rate
  float hoursWorked;//employee hours worked
 public:

/**
 * print function
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * Functino that calculates pay for employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * Function that congratulates employee on years worked
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * Employee class constuctor
 *
 * @pre 
 * @post 
 * 
 */
  Employee();

/**
 * Another Employee class instructor that is used when given variables are used
 *
 * @param int ID employee Id
 * @param int years employee years
 * @param double hourlyRate employee hourlyrate
 * @param float hoursWorked employee hours worked
 * @pre 
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
