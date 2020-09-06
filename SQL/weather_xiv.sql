/*
Enter your query here.
*/
select max(round(LAT_N,4)) 
from STATION
where LAT_N<137.2345;
