#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll tc;cin>>tc;
    for(;tc--;)
    {
        ll i,j,n;
    char c[50][50];
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cin>>c[i][j];
        }
    }
    for(i=1;i<=3;i++)
    {
        if(c[i][1]==c[i][2] && c[i][2]==c[i][3] && c[i][1]!='.')
        {
            cout<<c[i][1]<<endl;
            goto ff;
        }
        if(c[1][i]==c[2][i] && c[2][i]==c[3][i] && c[1][i]!='.')
        {
            cout<<c[1][i]<<endl;
            goto ff;
        }
    }
    if(c[1][1]==c[2][2] && c[2][2]== c[3][3] && c[2][2] != '.')
    {
        cout<<c[2][2]<<endl;
        goto ff;
    }
    if(c[3][1]==c[2][2] && c[2][2]== c[1][3] && c[2][2] != '.')
    {
        cout<<c[2][2]<<endl;
        goto ff;
    }
    cout<<"DRAW"<<endl;
    ff:;
    }
    return 0;
}

INSERT INTO Enrollments (EnrollmentID, StudentID, CourseID, EnrollmentDate)
VALUES
    (1, 43, 1, '2023-10-01'),
    (2, 85, 2, '2023-10-01'),
    (3, 84, 3, '2023-10-02'),
    (4, 56, 4, '2023-10-02'),
    (5, 29, 5, '2023-10-03'),
    (6, 65, 6, '2023-10-03'),
    (7, 39, 7, '2023-10-03'),
    (8, 25, 8, '2023-09-29'),
    (9, 10, 6, '2023-09-29'),
    (10, 3, 5, '2023-09-30'),
    (11, 5, 1, '2023-10-01'),
    (12, 57, 2, '2023-10-05'),
    (13, 61, 3, '2023-10-05'),
    (14, 59, 4, '2023-10-06'),
    (15, 36, 5, '2023-10-07'),
    (16, 63, 6, '2023-09-30'),
    (17, 62, 7, '2023-09-28'),
    (18, 6, 8, '2023-10-08'),
    (19, 126, 6, '2023-10-08'),
    (20, 43, 5, '2023-10-10');



INSERT INTO Courses (CourseID, CourseName, Instructor, Credits)
VALUES
    (141, 'Math', 'Mohhammad Ali', 3),
    (143, 'Physics', 'Mr Belal', 4),
    (181, 'Chemistry', 'Ranjit Dhar', 3),
    (100, 'CSE-Ethics', 'Koushik Deb', 4),
    (241, 'OOP', 'Ashim Kumar', 4),
    (243, 'Algorithm', 'Murad Hasan', 3),
    (251, 'DBMS', 'Atikul Rizvi', 3),
    (221, 'DSP', 'Ashfaq Habib', 4),
    (231, 'English', 'Kamrul Hasan', 2),
    (351, 'Compiler Design', 'Mokammel Hosen', 2);


-- Insert sample data into the "Courses" table
INSERT INTO Courses (CourseID, CourseName, Instructor, Credits)
VALUES
    (1, 'Math', 'Mohhammad Ali', 3),
    (2, 'Physics', 'Mr Belal', 4),
    (3, 'Chemistry', 'Ranjit Dhar', 3),
    (4, 'CSE-Ethics', 'Koushik Deb', 4),
    (5, 'OOP', 'Ashim Kumar', 4),
    (6, 'Algorithm', 'Murad Hasan', 3),
    (7, 'DBMS', 'Atikul Rizvi', 3),
    (8, 'DSP', 'Ashfaq Habib', 4),
    (9, 'English', 'Kamrul Hasan', 2),
    (10, 'Compiler Design', 'Mokammel Hosen', 2);
























