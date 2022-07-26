
    # DELETE FROM person
    # WHERE id NOT IN (SELECT min(id) FROM person GROUP BY email);
    
    
DELETE P1
FROM
    Person P1,
    Person P2
WHERE
    P1.Email = P2.Email
    AND P1.Id > P2.Id;