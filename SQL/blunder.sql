/*
Enter your query here.
*/
select 
CEIL(avg (SALARY)- avg(replace(SALARY,'0','')))
from EMPLOYEES;
