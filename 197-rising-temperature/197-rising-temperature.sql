
SELECT today.id from weather as today
join weather as prev
on DATEDIFF(today.recorddate, prev.recorddate) = 1
where today.temperature > prev.temperature;