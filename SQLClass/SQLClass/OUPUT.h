#ifndef Z_OUTPUT_H_
#define Z_OUTPUT_H_

/*
=====================SQL=====================
create table test fields first,last,major,age
=====================SQL=====================
insert into test values Richard,Harris,CS,23
=====================SQL=====================
insert into test values Bob,Harris,CS,30
=====================SQL=====================
insert into test values Jack,Smith,CS,40
=====================SQL=====================
insert into test values Steven,Herrera,CS,25
=====================SQL=====================
select first,last from test

test:
first last
Bob   Harris
Jack  Smith
Richard Harris
Steven Herrera

=====================SQL=====================
select first,last,major from test

test:
first last major
Bob   Harris CS
Jack  Smith CS
Richard Harris CS
Steven Herrera CS

=====================SQL=====================
select first,last,age from test

test:
first last age
Bob   Harris 30
Jack  Smith 40
Richard Harris 23
Steven Herrera 25

=====================SQL=====================
select * from test

test:
first last major age
Richard Harris CS 23
Bob   Harris CS 30
Jack  Smith CS 40
Steven Herrera CS 25

=====================SQL=====================
select first,last,age from test where age > 30

test:
first last age
Jack  Smith 40

=====================SQL=====================
select first,last,age from test where age >= 30

test:
first last age
Bob   Harris 30
Jack  Smith 40

=====================SQL=====================
select first,last,age from test where age < 30

test:
first last age
Richard Harris 23
Steven Herrera 25

=====================SQL=====================
select first,last,age from test where age <= 30

test:
first last age
Richard Harris 23
Steven Herrera 25
Bob   Harris 30

=====================SQL=====================
exit

C:\Users\Steven_dev\Desktop\CS_Stuff\SQLClass\SQLClass\Debug\SQLClass.exe (process 8140) exited with code 0.
Press any key to close this window . . .

*/

#endif // !Z_OUTPUT_H_
