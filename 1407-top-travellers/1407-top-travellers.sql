SELECT name, IFNULL(sum(Rides.distance),0) as travelled_distance 
FROM Users 
LEFT JOIN Rides
    ON users.id = rides.user_id
GROUP BY rides.user_id
ORDER BY travelled_distance DESC, name;

