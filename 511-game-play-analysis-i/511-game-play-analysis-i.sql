SELECT player_id, min(event_date) as first_login from activity 
GROUP BY player_id;
