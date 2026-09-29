void performanceAnalysis()
{
    if (count == 0)
    {
        printf("No student records available.\n");
        return;
    }

    printf("\n========== PERFORMANCE ANALYSIS ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nStudent: %s\n", students[i].name);

        if (students[i].marks >= 75)
        {
            printf("Performance: Excellent\n");
        }
        else if (students[i].marks >= 60)
        {
            printf("Performance: Good\n");
        }
        else if (students[i].marks >= 40)
        {
            printf("Performance: Average\n");
        }
        else
        {
            printf("Performance: Poor\n");
        }
    }
}

void identifyAtRiskStudents()
{
    int found = 0;

    printf("\n========== AT-RISK STUDENTS ==========\n");

    for (int i = 0; i < count; i++)
    {
        if (students[i].marks < 40 ||
            students[i].attendance < 75)
        {
            printf("\nName       : %s", students[i].name);
            printf("\nRoll No    : %d", students[i].rollNo);
            printf("\nMarks      : %.2f", students[i].marks);
            printf("\nAttendance : %.2f%%\n",
                   students[i].attendance);

            found = 1;
        }
    }

    if (!found)
    {
        printf("No students are currently at risk.\n");
    }
}

void aiPrediction()
{
    if (count == 0)
    {
        printf("No student records available.\n");
        return;
    }

    printf("\n========== AI PERFORMANCE PREDICTION ==========\n");

    for (int i = 0; i < count; i++)
    {
        float score;

        score = (students[i].marks * 0.60) +
                (students[i].attendance * 0.40);

        printf("\nStudent: %s", students[i].name);
        printf("\nPrediction Score: %.2f", score);

        if (score >= 75)
        {
            printf("\nPrediction: Low Academic Risk\n");
        }
        else if (score >= 50)
        {
            printf("\nPrediction: Medium Academic Risk\n");
        }
        else
        {
            printf("\nPrediction: High Academic Risk\n");
        }
    }
}
