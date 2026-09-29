// Search student by roll number
void searchStudent()
{
    int roll;
    int found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNo == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", students[i].rollNo);
            printf("Name        : %s\n", students[i].name);
            printf("Marks       : %.2f\n", students[i].marks);
            printf("Attendance  : %.2f%%\n", students[i].attendance);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found!\n");
    }
}


// Sort students according to marks
void sortStudents()
{
    struct Student temp;

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Students sorted according to marks.\n");
}


// Generate ranking
void generateRanking()
{
    if (count == 0)
    {
        printf("No student records available.\n");
        return;
    }

    sortStudents();

    printf("\n========== CLASS RANKING ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("Rank %d : %s - Marks: %.2f\n",
               i + 1,
               students[i].name,
               students[i].marks);
    }
}