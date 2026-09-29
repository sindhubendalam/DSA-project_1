// Display all students
void displayStudents()
{
    if (count == 0)
    {
        printf("No student records available.\n");
        return;
    }

    printf("\nRoll No\tName\t\tMarks\tAttendance\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d\t%-15s %.2f\t%.2f%%\n",
               students[i].rollNo,
               students[i].name,
               students[i].marks,
               students[i].attendance);
    }
}


// Save student records to file
void saveRecords()
{
    FILE *fp;

    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d %s %.2f %.2f\n",
                students[i].rollNo,
                students[i].name,
                students[i].marks,
                students[i].attendance);
    }

    fclose(fp);

    printf("Student records saved successfully.\n");
}