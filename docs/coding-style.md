 # CS 2400 C++ Coding Style
 ### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---

* Use a consistant style for naming identifiers
  * ```camelCase``` or ```snake_case```
* Use meaningful variable names that describe the content of the variable, the purpose of the function, or the class.
  * ```employeeSalary``` instead of ```es```
  * ```Employee``` instead of ```e```
* Add a space around operators
  * ```total = amount + tax;``` instead of ```total=amount+tax;```
* Add documentations throughout your program
  * Start by adding documentation for the whole program at the top of the file that includes:
    * File name
    * Author name
    * Date
    * Description of the program
* Each statement should be on a line by itself
* Add documentation for each of the functions under the prototype. For example:

  ```cpp
  double finSpaceCost(double distance, double weight);
  /*
   *  Function:   findSpaceCost
   *              calculates and returns the charge for shipping cargo
   *              between two planets.
   *
   *  @param distance - distance in miles between two planets
   *  @param weight   - weight in pounds of item being shipped
   *  @return - the space cost in dollars
   */


  ```

* Always prompt the user for input
* The program output should be readable and clearly labeled
* Use lower case letters for identifier names. If an identifier has multiple words, then use one of the styles mentioned above for naming identifiers (example: ```employeeSalary``` instead of ```es```)
* All constants must be in upper case letters. For example: ```const double OHIO_TAX = 0.07;```. Use underscore character to separate words in the constant name.
* Indent blocks for ```if```, ```while```, ```for``` etc. For example:

  ```cpp
  if (hours <= 40) {
      wages = hours * hourlyRate;
  }
  ```

* Keep lines at a reasonable length
* Break long statements into either multiple statements or multiple lines
* Skip lines between logical groups of statements
* Limit the scope of variables. Use local variables
* Avoid global variables
* Always initialize your variables before using them
* Always check for failure when you open a file

  ```cpp
  inStream.open("somefile.txt");
  if (inStream.fail()) {
      cout << "File is not accessable" << endl;
      exit(1);
  }
  ```

* Always compile with ```-Wall``` option to detect and eliminate all warnings

## Classes and Structures

* Capitalize class and structure names
* All member variables should be in the private section of the class
* Always include a default constructor
* When using dynamic allocation always include a destructor and a copy constructor
* Always include getter (accessors) and setters (mutators)
* When using separate compilation, always guard against multiple includes of the same class (using `#ifndef`)
* Class example:

  ```cpp
  #ifndef STUDENT_H
  #define STUDENT_H
  class Student {
  public:
      // Constructors
      Student();
      // getters/accessors
      int getId();
      string getName();
      // Setters/mutators
      void setId();
      void setName();

  private:
      int id;
      string name;
  };
  #endif
  ```
