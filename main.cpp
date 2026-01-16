#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

#define EMPLOYEE_NAME_STR_LEN_MAX           256
#define EMPLOYEE_LIST_LEN                   10
#define ENDLINE_NUM_OF_EQUAL_MAX            60
#define ENDLINE_CHAR                        '='

class employee {
  public:
    void set_employee_id(int num) {
      employee_id = num;
    }

    void set_employee_name(string name) {
      employee_name = name;
    }

    void set_employee_initialized_state()
    {
      if (!is_initialized)
        is_initialized = true;
    }

    bool get_employee_initialized_state()
    {
      return is_initialized;
    }

    void get_employee_details(void) {
      display_border_line(ENDLINE_NUM_OF_EQUAL_MAX);
      printf("EMPLOYEE_ID:   %d\n", employee_id);
      display_employee_name_based_on_length();
      display_border_line(ENDLINE_NUM_OF_EQUAL_MAX);
    }

    void display_employee_name_based_on_length(void)
    {
      int name_len = employee_name.length();
      int newline_num = name_len / EMPLOYEE_NAME_STR_LEN_MAX;

      if (newline_num == 0)
        printf("EMPLOYEE_NAME: %s\n", employee_name);

    }

    void display_border_line(int max_num)
    {
      for (int i = 0; i < max_num; i++)
        putchar(ENDLINE_CHAR);
      putchar('\n');
    }

  private:
    int employee_id;
    string employee_name;
    bool is_initialized;
};

void example_array();

int main (int argc, char *argv[]) {
  example_array();

  return 0;
}

void example_array()
{
  employee employee_list[EMPLOYEE_LIST_LEN];

  employee_list[0].set_employee_id(1);
  employee_list[0].set_employee_name("Microchip Technology Incorporated");
  employee_list[0].set_employee_initialized_state();

  employee_list[1].set_employee_id(2);
  employee_list[1].set_employee_name("Cavite State University - Bacoor Campus");
  employee_list[1].set_employee_initialized_state();

  employee_list[2].set_employee_id(3);
  employee_list[2].set_employee_name("Sercomm Philippines Incorporated");
  employee_list[2].set_employee_initialized_state();

  employee_list[3].set_employee_id(4);
  employee_list[3].set_employee_name("Hitachi Digital Payment Solutions Inc.");
  employee_list[3].set_employee_initialized_state();

  for (int i = 0; i < EMPLOYEE_LIST_LEN; i++) {
    if (!employee_list[i].get_employee_initialized_state())
      continue;

    employee_list[i].get_employee_details();
  }

}
