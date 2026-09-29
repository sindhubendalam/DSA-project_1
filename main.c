int main()
{
    int ch;
    while(1)
        {
            printf("***********student Record System*************\n");
            printf("1.Student Registration\n");
            printf("2.Display Students\n");
            printf("3.Search for Student Details\n");
            printf("4.sorting Students According to the roll numbers\n");
            printf("5.Student Peformance in Academics\n");
            printf("6.Performance Analysis\n");
            printf("7.At risk students\n");
            printf("8.Ai prediction\n");
            printf("9.Save Records\n");
            printf("10.exit.\n");
            printf("enter your choice");
            scanf("%d",&ch);
            switch(ch)
                {
                    case 1:
                        {
                            registerStudent();
                            break;
                
                        }
                    case 2:
                        {
                            displayStudents();
                               break;
                
                        }
                    case 3:
                        {
                            searchStudent();
                               break;
                
                        }
                    case 4:
                        {
                            sortStudents();
                               break;
                
                        }
                    case 5:
                        {
                            generateRanking();
                               break;
                
                        }
                    case 6:
                        {
                            performanceAnalysis();
                               break;
                
                        }
                    case 7:
                        {
                            identifyAtRiskStudents();
                               break;
                
                        }
                    case 8:
                        {
                            aiPrediction();
                               break;
                
                        }
                    case 9:
                        {
                            saveRecords();
                               break;
                
                        }
                    case 10:
                        {
                           return 0;
                        }
                    default:
                        {
                            printf("invalid choice");
                        }
                }
            
            
        }
}