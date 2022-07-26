SELECT * FROM Cinema 
where id%2 = 1 AND Description NOT LIKE "boring"
ORDER BY RATING desc;
