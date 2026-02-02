-- URL = https://leetcode.com/problems/product-sales-analysis-i/?envType=study-plan-v2&envId=top-sql-50 
-- Date = FEB 2 2026
select 
    p.product_name,
    s.year,
    s.price
from Sales s left join Product p using(product_id);
