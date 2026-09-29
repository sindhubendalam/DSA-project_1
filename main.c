int main()
{
    int choice;

    do {
        printf("\n===== STUDENT PERFORMANCE SYSTEM =====\n");
        printf("1. Add student\n");
        printf("2. Show all students\n");
        printf("3. Search student\n");
        printf("4. Sort by marks\n");
        printf("5. Show class ranking\n");
        printf("6. Performance analysis\n");
        printf("7. At-risk students\n");
        printf("8. Show linked list\n");
        printf("9. Risk prediction\n");
        printf("10. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  addStudent();        break;
            case 2:  showAll();           break;
            case 3:  findStudent();       break;
            case 4:  sortByMarks();       break;
            case 5:  showRanks();         break;
            case 6:  checkPerformance();  break;
            case 7:  showAtRisk();        break;
            case 8:  showLinkedList();    break;
            case 9:  predictRisk();       break;
            case 10: printf("\nBye!\n");  break;
            default: printf("\nWrong choice, try again.\n");
        }
    } while (choice != 10);

    return 0;
}
