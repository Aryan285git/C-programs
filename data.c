#include <stdio.h>
struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};
int main() {
    
    struct Marks marks[5];
    for(int i=0; i<4; i++){
        printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }
    for(int i=0; i<4; i++) {
        printf("Student %d\n",i+1);
        float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
        printf("Percentage : %f\n", percentage);
    }
    return 0;
}
