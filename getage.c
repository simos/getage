#include <stdio.h>
#include <math.h>
#include <string.h>

int x, y, z, x2, y2, z2, day, month, year;


int main(void) {


    printf("Πόσο έχει ο μήνας: ");
    scanf("%d", &x);

    printf("Ποιος μήνας είναι: ");
    scanf("%d", &y);

    printf("Ποια χρονιά είναι: ");
    scanf("%d", &z);



    printf("Ποσο ειχε την μερα που γεννηθηκες; ");
    scanf("%d", &x2);

    printf("Ποιον μηνα γεννηθηκες: ");
    scanf("%d", &y2);

    printf("Ποια χρονιά γεννηθηκες: ");
    scanf("%d", &z2);



    day = (x-x2);
    month = (y-y2);
    year = (z-z2);

    printf("Είσαι %d χρονών, %d μηνών και %d ημερών \n", year, month, day);
}
