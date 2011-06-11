#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int x, y, z, x2, y2, z2, day, month, year;


int main(void) {

    time_t now;
    struct tm* now_struct;

    now = time(NULL);
    now_struct = gmtime(&now);

    /* now_struct holds current date, see http://goo.gl/Mi6UP */

    printf("Ποσο ειχε την μερα που γεννηθηκες; ");
    scanf("%d", &x2);

    printf("Ποιον μηνα γεννηθηκες: ");
    scanf("%d", &y2);

    printf("Ποια χρονιά γεννηθηκες: ");
    scanf("%d", &z2);



    day = (now_struct->tm_mday - x2);
    month = (now_struct->tm_mon - y2);
    year = (now_struct->tm_year + 1900 - z2);

    printf("Είσαι %d χρονών, %d μηνών και %d ημερών \n", year, month, day);
}
