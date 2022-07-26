# SELECT Weather.id from Weather
# join weather as w
# on w.id + 1 = weather.id 
# where w.temperature < weather.temperature;


SELECT weather.id from weather
join weather as w
on DATEDIFF(weather.recorddate, w.recorddate) = 1
where weather.temperature > w.temperature;