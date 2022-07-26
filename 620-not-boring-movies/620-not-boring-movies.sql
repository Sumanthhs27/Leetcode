SELECT * FROM Cinema 
where id%2 = 1 AND Description != "boring"
ORDER BY RATING desc;
