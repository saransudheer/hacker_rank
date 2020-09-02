/*
Enter your query here.
*/
select (MONTHS*SALARY) as EARNINGS, 
count(*) from EMPLOYEE 
group by EARNINGS 
order by EARNINGS
DESC LIMIT 1;
