#include <stdio.h>
#include <cstring>

#define EMPLOYEE_NAME_STR_LEN_MAX           256

class employee {
  public:
    void set_employee_id(int num) {
      employee_id = num;
    }

    /* This function gives ISO C++ warning */
    void set_employee_name(char *name) {
      strcpy(employee_name, name);
    }

    void get_employee_details(void) {
      printf("============================================\n");
      printf("EMPLOYEE_ID:   %d\n", employee_id);
      display_employee_name_based_on_length();
      printf("EMPLOYEE_NAME: %s\n", employee_name);
      printf("============================================\n");
    }

    void display_employee_name_based_on_length()
    {
      int name_len = 0;
      for (int i = 0; i < EMPLOYEE_NAME_STR_LEN_MAX; i++) {
        if (employee_name[i] == '\0')
          break;
        name_len++;
      }

#ifdef DEBUG
      printf("EMPLOYEE_NAME_LEN = %d\n", name_len);
#endif
    }

  private:
    int employee_id;
    char employee_name[EMPLOYEE_NAME_STR_LEN_MAX];
};

int main (int argc, char *argv[]) {

  employee employee_1;
  employee_1.set_employee_id(4);
  employee_1.set_employee_name("Hitachi Digital Payment Solutions Inc.");
  employee_1.get_employee_details();

  return 0;
}
