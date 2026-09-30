#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Student
{
    int rollNo;
    char name[50];
    float marks;
    float attendance;
};

struct Node
{
    struct Student data;
    struct Node *link;
};

struct Student students[MAX];
int count = 0;
struct Node *head = NULL;

void addToLinkedList(struct Student s)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = s;
    newNode->link = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *p = head;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = newNode;
    }
}

void registerStudent()
{
    if (count >= MAX)
    {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &students[count].rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    printf("Enter Attendance Percentage: ");
    scanf("%f", &students[count].attendance);

    addToLinkedList(students[count]);
    count++;

    printf("Student registered successfully!\n");
}
