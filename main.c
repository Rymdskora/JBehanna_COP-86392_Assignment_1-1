#include <stdio.h>
#include "unitTests/unit_1.c"
#include "unitTests/unit_2.c"
#include "unitTests/unit_3.c"
#include "unitTests/unit_4.c"


int personOne(void);
int personTwo(void);
int personThree(void);
int personFour(void);


int main(void) {
  personOne();
  personTwo();
  personThree();
  personFour();
  return 0;
}