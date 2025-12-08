#include "data_entry.c"
#include "data_operations.c"
#include "fees_security.c"
#include "room_management.c"

int main() {
    secureLogin();

    int ch;
    do {
        printf("\n--- HOSTEL MANAGEMENT SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Edit Student\n");
        printf("5. Delete Student\n");
        printf("6. Assign Room\n");
        printf("7. Check Room Capacity\n");
        printf("8. Pay Fees\n");
        printf("9. Show Defaulters\n");
        printf("10. Change Password\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: addStudent(); break;
            case 2: viewAll(); break;
            case 3: searchStudent(); break;
            case 4: editStudent(); break;
            case 5: deleteStudent(); break;
            case 6: assignRoom(); break;
            case 7: checkRoomCapacity(); break;
            /*
            case 8: payFees(); break;
            case 9: showDefaulters(); break;
            case 10: changePassword(); break;
            */
        }

    } while(ch != 0);

    printf("Data Saved. Exiting...\n");
    return 0;
}