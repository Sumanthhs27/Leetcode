SELECT  date_id, 
        make_name, 
        count(DISTINCT lead_id) as unique_leads , 
        count(DISTINCT partner_id) as unique_partners
        
FROM DailySales
group by date_id , make_name;

