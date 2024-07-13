SELECT *
FROM table1
JOIN table2 ON table1.column_name = table2.column_name
JOIN table3 ON table2.column_name = table3.column_name
JOIN table4 ON table3.column_name = table4.column_name
JOIN table5 ON table4.column_name = table5.column_name;
