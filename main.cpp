#include <stdio.h>
#include <cstring>

#define EMPLOYEE_NAME_STR_LEN_MAX           256

class employee {
  public:
    void set_employee_id(int num) {
      employee_id = num;
    }

    void set_employee_name(char *name) {
      strcpy(employee_name, name);
    }

    void get_employee_details(void) {
      printf("============================================\n");
      printf("EMPLOYEE_ID:   %d\n", employee_id);
      printf("EMPLOYEE_NAME: %s\n", employee_name);
      printf("============================================\n");
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
