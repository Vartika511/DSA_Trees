SELECT concat(NAME,concat("(",LEFT(occupation,1),")")) 
FROM OCCUPATIONS 
ORDER BY NAME ASC;

select CONCAT("There are a total of", " ",COUNT(occupation), " ",LCASE(occupation),"s",".")AS stat
from OCCUPATIONS
group by occupation
order by COUNT(occupation) ASC,occupation
