-- Neha Singh | 29 June, 2021

-- Change the query shown so that it displays Nobel prizes for 1950.
SELECT yr, subject, winner
  FROM nobel
 WHERE yr = 1950

-- Show who won the 1962 prize for Literature.
SELECT winner
  FROM nobel
 WHERE yr = 1962
   AND subject = 'Literature'

--Show the year and subject that won 'Albert Einstein' his prize.
select yr, subject
from nobel
where winner = 'albert einstein'

-- Give the name of the 'Peace' winners since the year 2000, including 2000.
select winner
from nobel
where (yr > '2000' or yr = '2000') and subject = 'peace'

-- Show all details (yr, subject, winner) of the Literature prize winners for 1980 to 1989 inclusive.
select yr, subject, winner
from nobel
where (yr > 1979 and yr < 1990) and subject = 'literature'

-- Show all details of the presidential winners:Theodore Roosevelt, Woodrow Wilson, Jimmy Carter, Barack Obama
SELECT * FROM nobel
 WHERE winner IN ('Theodore Roosevelt',
                  'Woodrow Wilson',
                  'Jimmy Carter',
                  'Barack Obama')

-- Show the winners with first name John
select winner
from nobel
where winner like 'john%'

-- Show the year, subject, and name of Physics winners for 1980 together with the Chemistry winners for 1984.
select * 
from nobel
where (subject='physics' and yr='1980') or (subject='chemistry' and yr='1984')


-- Show the year, subject, and name of winners for 1980 excluding Chemistry and Medicine
select *
from nobel
where yr=1980 and subject <> 'chemistry' and subject <> 'medicine'

-- Show year, subject, and name of people who won a 'Medicine' prize in an early year (before 1910, not including 1910) together with winners of a 'Literature' prize in a later year (after 2004, including 2004)
select *
from nobel
where (subject = 'medicine' and yr<1910) or (subject='literature' and yr>2003)

-- Find all details of the prize won by PETER GRÜNBERG
select *
from nobel
where winner = 'PETER GRÜNBERG'

-- Find all details of the prize won by EUGENE O'NEILL
select *
from nobel
where winner = 'EUGENE O''NEILL'

-- Knights in order List the winners, year and subject where the winner starts with Sir. Show the the most recent first, then by name order.
select winner, yr, subject
from nobel
where winner like 'sir%' 
ORDER BY yr DESC, winner














