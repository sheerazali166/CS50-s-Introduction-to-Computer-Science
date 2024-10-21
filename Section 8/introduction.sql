

-- Today

-- What are databases? What makes for good database design?

-- What is SQL?

-- Problem set 7 

-- Apple Numbers
-- Google Sheets
-- Microsoft Excel

--    ...


-- Databases

    -- A collection of data organized for creating, 
    -- reading, updating, and deleting.


-- Scale


-- Scale
-- Frequency


-- Scale
-- Frequency
-- Speed


-- Database Management System

    -- Software via which you can interact with a database.


-- MySQL
-- Oracle
-- PostgreSQL
-- SQLite

-- ...


-- SQL

    -- A language via which you can create, read, update, and delete data
    -- in a database 


-- Databse Design

    -- Organizing information


-- goodreads


-- goodreads


-- Design Principles

    -- Create one table for each entity in your dataset.
    -- All tables should have primary key.
    -- The information in the table should depend on the
    -- primary key only.  


-- QUERY 1

sqlite3 reads.db


----------------------------------------------------------------------------------------------



-- Design Principles

    -- Create one table for each entity in your dataset.
    -- All tables should have primary key.
    -- The information in the table should depend on the
    -- primary key only.  


------------------------------------------------------------------------------------------------


-- Creating a table

    -- In your terminal, create a database called reads.db

        -- sqlite3 reads.db




                --|--------------------------------------------------------|--
                --|                                                        |--  
                --|    sqlite>  CREATE TABLE table_name (                  |--  
                --|                                                        |--  
                --|    ...>         column0  TYPE,                         |--  
                --|    ...>         column1  TYPE,                         |--  
                --|    ...>         column2  TYPE,                         |--  
                --|    ...>         column3  TYPE,                         |--  
                --|    ...>);                                              |--  
                --|                                                        |--  
                --|                                                        |--  
                --|                                                        |--  
                --|--------------------------------------------------------|--



-- QUERY 2



CREATE TABLE books (
    id INTEGER,
    title TEXT,
    published NUMERIC,
    ratiing INTEGER



                --|--------------------------------------------------------|--
                --|                                                        |--  
                --|    sqlite>  CREATE TABLE table_name_two (              |--  
                --|                                                        |--  
                --|    ...>         column_two0  INTEGER,                  |--  
                --|    ...>         column_two1  TEXT,                     |--  
                --|    ...>         column_two2  NUMERIC,                  |--  
                --|    ...>         column_two3  REAL,                     |-- 
                --|    ...>         PRIMARY KEY (comun_two0),              |-- 
                --|    ...>);                                              |--  
                --|                                                        |--  
                --|                                                        |--  
                --|                                                        |--  
                --|--------------------------------------------------------|--


-- QUERY 3



CREATE TABLE books_two (
    id_two INTEGER,
    title_two TEXT,
    published_two NUMERIC,
    ratiing_two INTEGER,
    PRIMARY KEY (id_two));


-- QUERY 4

.tables

-- QUERY 5

.schema books_two


--------------------------------------------------------------------------------------------------------


-- QUERY 6

CREATE TABLE authors(
    id INTEGER,
    author TEXT,
    author_birth INTEGER,
    PRIMARY KEY (id)    
)


-- QUERY 7

.tables

-- QUERY 8

.schema authors

-- QUERY 9

.schema books_two


--------------------------------------------------------------------------------------------------------

-- QUERY 10

CREATE TABLE authored (
    author_id INTEGER,
    book_id INTEGER,
    PRIMARY KEY (author_id, book_id),
    FOREIGN KEY (author_id) REFERENCES authors (id),
    FOREIGN KEY (book_id) REFERENCES books_two(id_two)

);

-- QUERY 11

.tables



--------------------------------------------------------------------------------------------------------


                --|--------------------------------------------------------|--
                --|                                                        |--  
                --|    sqlite>  CREATE TABLE table_name_three (            |--  
                --|                                                        |--  
                --|    ...>         column_three0  INTEGER,                |--  
                --|    ...>         column_three1  TEXT,                   |--  
                --|    ...>         column_three2  NUMERIC,                |--  
                --|    ...>         column_three3  REAL,                   |-- 
                --|    ...>         PRIMARY KEY (comun_three0),            |-- 
                --|    ...>);                                              |--  
                --|                                                        |--  
                --|                                                        |--  
                --|                                                        |--  
                --|--------------------------------------------------------|--



--------------------------------------------------------------------------------------------------------



               --|-----------------------------------------------------------|--
               --|                                                           |-- 
               --|    sqlite>  DROP TABLE table_name_four                    |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|                                                           |-- 
               --|-----------------------------------------------------------|--             



--------------------------------------------------------------------------------------------------------


-- Inserting, Deleting


        --|------------------------------------------------------------------|--
        --|     sqlite>  INSERT INTO table (column_four0, column_four1)      |--
        --|        ...>  VALUES (value0, value1);                            |--
        --|------------------------------------------------------------------|--


        --|------------------------------------------------------------------|--
        --|     sqlite>  DELETE FROM table (column_five0, column_five1)      |--
        --|        ...>  WHERE condition;                                    |--
        --|------------------------------------------------------------------|--


-- QUERY 12

INSERT INTO books_two (title_two, author_two, published_two, rating_two)


--------------------------------------------------------------------------------------------------------

-- QUERY 13

INSERT INTO books_two (title_two, published_two, rating_two)
    VALUES ('Flights', '2017-05-17', 4);


-- QUERY 14

SELECT * FROM books_two;


-- QUERY 15

DELETE FROM books_two WHERE title_two = 'Flights';


-- QUERY 16

SELECT * FROM books_two;


-- QUERY 17

.schema authored



--------------------------------------------------------------------------------------------------------


-- Inserting, Deleting


        --|-------------------------------------------------------------------|--
        --|     sqlite>  INSERT INTO table_two (column_six0, column_six1)     |--
        --|        ...>  VALUES (value_two0, value_two1);                     |--
        --|-------------------------------------------------------------------|--


        --|--------------------------------------------------------------------|--
        --|     sqlite>  DELETE FROM table_two (column_seven0, column_seven1)  |--
        --|        ...>  WHERE condition_two;                                  |--
        --|--------------------------------------------------------------------|--



-- Songs

    -- Querying a database of songs



-- Implementation Details

    -- For each of the following problems, you should write a single SQL query that outputs the results specified
    -- by each problem. your response must take the form of a single SQL query though you may nest other queries
    -- inside of your query. You should not assume anything about the ids of any particular songs or artists: your
    -- queries should be accurate even the id of any particular song or person were different. Finally, each query
    -- should return only the data necessary to answer the question: if the problems only asks you to output the
    -- names of songs, for example, then your query should not also output each song's tempo.


    
-- 1.   In 1.sql, write a SQL query to list the names of all songs in the database.
--      Your query should output a table with a single column for the name of each song.

-- 2.  In 2.sql, write a SQL query to list the names of all songs in increasing order of tempo.
--     Your query should output a table with a single column for the name of each song.

-- 3.  In 3.sql, write a SQL query to list the names of the top 5 longest songs, in descending order of length.
--     Your query should output a table with a single column for the name of each song.

-- 4.  In 4.sql, write a SQL query that lists the names of any songs that have danceability, energy, and valence
--     greater than 0.75. Your query should output a table with a single column for the name of each song.

-- 5.  In 5.sql, write a SQL query that returns the average energy of all the songs.
--     Your query should output a table with a single column and a single row containing the average energy.

-- 6.  In 6.sql, write a SQL query that lists the names of songs that are by Post Malone.
--     Your query should output a table with a single column for the name of each song.
--     You should not make any assumptions about what Post Malone’s artist_id is.

-- 7.  In 7.sql, write a SQL query that returns the average energy of songs that are by Drake.
--     Your query should output a table with a single column and a single row containing the average energy.
--     You should not make any assumptions about what Drake’s artist_id is.

-- 8.  In 8.sql, write a SQL query that lists the names of the songs that feature other artists.
--     Songs that feature other artists will include “feat.” in the name of the song.
--     Your query should output a table with a single column for the name of each song.       


--  QUERY 18

    .quit 


--  QUERY 19

sqlite3 songs.db


--  QUERY 20

.schema

--  QUERY 21

SELECT * FROM songs;

--  QUERY 22

SELECT title FROM songs LIMIT 5;

--  QUERY 23

SELECT name FROM songs LIMIT 5;

--  QUERY 24

SELECT name from songs;


-- QUERY 25

SELECT name FROM songs;


-- Songs

    -- Quering a database of songs

-- Schema

-- Schema

    -- How data organize in a database


        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $                                                   |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--




        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3 DB_NAME                                  |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--



        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3 songs.db                                 |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--


        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3> ...                                     |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--


        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3> .tables                                 |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--



--      |----------------------------------------------------------------------------|
--      |                                                                            |
--      |                                                                            |
--      |    songs.db                                                                |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |----------------------------------------------------------------------------| 


--      |----------------------------------------------------------------------------|
--      |                                                                            |
--      |                                                                            |
--      |    songs.db                                                                |
--      |                                                                            |
--      |                                                                            |
--      |    songs                                                                   |
--      |                                                                            |
--      |    artists                                                                 |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |----------------------------------------------------------------------------| 



        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3>                                         |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--




        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3> .schema songs                           |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--



        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3>                                         |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--




        --|-------------------------------------------------------|--
        --|                                                       |--      
        --|   $  sqlite3> SELECT * FROM songs LIMIT 3;            |--
        --|                                                       |--      
        --|                                                       |--
        --|                                                       |--      
        --|-------------------------------------------------------|--



--      |----------------------------------------------------------------------------|
--      |                                                                            |
--      |   songs.db                                                                 |
--      |                                                                            |
--      |                                                                            |
--      |    id  |        name                   |  artists_id  |  ...  |            |
--      |   ------------------------------------------------------------|            |
--      |    1   |     God's Plan                |     23       |  ...  |            |
--      |   ------------------------------------------------------------|            |
--      |     2  |        SAD!                   |     67       |  ...  |            |
--      |   -------------------------------------------------------------            |
--      |      3 |   rockstar (feat .21 savage)  |     54       |  ...  |            |
--      |   -------------------------------------------------------------            |
--      |    ... |           ...                 |     ...      |  ...  |            |
--      |   --------------------------------------------------------------           |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |  artists                                                                   |
--      |                                                                            |
--      |----------------------------------------------------------------------------| 



--      |----------------------------------------------------------------------------|
--      |                                                                            |
--      |   songs.db                                                                 |
--      |                                                                            |
--      |                                                                            |
--      |   artists                                                                  |
--      |                                                                            |
--      |      id    |        name                                                   |   
--      |   ------------------------------                                           |
--      |       23   |     Drake                                                     |   
--      |   ------------------------------                                           |
--      |       67   |     XXXTENTACION                                              |
--      |   ------------------------------                                           |
--      |       54   |   Post Malone                                                 |
--      |   ------------------------------                                           |
--      |      ...   |       ...                                                     |
--      |   ------------------------------                                           |
--      |                                                                            |
--      |                                                                            |
--      |                                                                            |
--      |   songs                                                                    |
--      |                                                                            |
--      |----------------------------------------------------------------------------| 




-- Queries 1 - 5

-- SELECT 

-- WHERE

-- LIKE

-- ORDER BY


---------------------------------------------------------------------------------------


-- Queries 1 - 5

-- SELECT 

-- WHERE

-- LIKE

-- ORDER BY



-- QUERY 26

SELECT name from songs
    ORDER BY tempo;


-- QUERY 27

SELECT name, tempo FROM songs
    ORDER BY tempo;


-- QUERY 28

.schema songs

-- QUERY 29

SELECT name from songs
    ORDER BY duration_ms DESC;


-- QUERY 30

SELECT name, duration_ms FROM songs
    ORDER BY duration_ms DESC;


-- QUERY 31

SELECT name FROM songs
    ORDER BY duration_ms DESC
        LIMIT 5;

-- QUERY 32

SELECT name, danceability, energy, valence FROM songs
    LIMIT 1;

-- QUERY 33

SELECT name FROM songs
    WHERE danceability > 0.75 AND energy > 0.75
        AND valence > 0.75;


-- QUERY 34

SELECT energy FROM songs;



-- SELECT 

-- WHERE

-- LIKE 

-- ORDER BY


-- SELECT column_eight FROM table_three
    -- WHERE condtion_three;


-- SELECT column_nine FROM table_four
    -- WHERE column_nine LIKE pattern;


-- Aggregate Functions

    -- Keywords to calculate data from multiple rows


-- SELECT column_ten FROM table_five
    -- WHERE codition_four;


-- SELECT COUNT(column_eleven) FROM table_six
    -- WHERE condition_five;


-- SELECT AVG(column_twelve) FROM table_seven
    -- WHERE condition_six;

-- SELECT MIN(column_thirteen) FROM table_eight
    -- WHERE condition_seven;


-- Queries 5 - 7        


-- SELECT MIN(column_fourteen) FROM table_nine
    -- WHERE condition_eight;


-- Queries 5 - 7 


-- SELECT MIN(column_fifteen) FROM table_ten
    -- WHERE condition_nine;


-- SELECT AVG(column_sixteen) FROM table_eleven
    -- WHERE condition_ten;


-- SELECT COUNT(column_seventeen) FROM table_twelve
    -- condition_eleven;


-- QUERY 35

SELECT AVG(energy) FROM songs;


-- QUERY 36

SELECT ROUND(AVG(energy), 2) FROM songs;

-- QUERY 37

.schema songs


-- QUERY 38


.schema songs


-- Aggregate Functions

    -- Keywords to calculate data from multiple rows


-- SELECT COUNT(column_eighteen) FROM table_thirteen
    -- WHERE condition_twelve;  


-- ?? this query is required

-- SELECT COUNT(column_nineteen) FROM table_fourteen
    -- WHERE condition_thirteen;        

-- Combining Tables
    
    -- Methods to reference data from other tables


-- Combining Tables
    
    -- Methods to reference data from other tables    


-- Subqueries

-- Joins


--
--
--        id      |      title      |        year                  movie_id       |       rating           
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--    -----------------------------------------------        ----------------------------------------
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...     


      ------------------------------------------------------------------------------------------------------


--        id      |      title      |        year                  movie_id       |       rating 
--        --      |                 |                              --------       |  
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--       ------   |                 |                              ------         |   
--    -----------------------------------------------        ----------------------------------------
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--       -------  |                 |                              -------        |                                
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--       -------  |                 |                              -------        |               
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...     
--         ---                                                       ---            



      ------------------------------------------------------------------------------------------------------


--        id      |      title      |        year                  movie_id       |       rating 
--        --      |                 |                              --------       |  
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--       ------   |                 |                              ------         |   
--    -----------------------------------------------        ----------------------------------------
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--       -------  |                 |                              -------        |                                
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--       -------  |                 |                              -------        |               
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...     
--         ---                                                       ---            



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>                                                                         |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--




        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT id                                                              |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT id FROM movies WHERE title = "Cars 3";                          |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--



    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT id FROM movies WHERE title = "Cars 3";                          |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--


--        id      |      title      |       year                  movie_id       |       rating           
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709        |         8.3
--    -----------------------------------------------        ----------------------------------------
--                |                 |                                            |    
--       3606752  |     Cars 3      |       2017                   3606752       |         6.7
--       -------  |                 |                                            |                 
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629       |         7.4
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...         |         ...    



    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating FROM ratings WHERE movie_id = 3606752;                   |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--


--        id      |      title      |       year                  movie_id        |       rating           
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--    -----------------------------------------------        ----------------------------------------
--                |                 |                                             |    
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--       -------  |                 |                                             |                 
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...    




    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating FROM ratings WHERE movie_id = 3606752;                   |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--


--        id      |      title      |       year                  movie_id        |       rating           
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--    -----------------------------------------------        ----------------------------------------
--                |                 |                                             |    
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--                |                 |                                             |        -----         
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...    



    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating FROM ratings WHERE movie_id =        ;                   |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--



    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating FROM ratings WHERE movie_id =  ?;                        |--
        --|                                                                                   |--      
        --|                                                                                   |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--   



    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = ?;                                            |--
        --|                                                                                   |--      
        --|-----------------------------------------------------------------------------------|--     



    ------------------------------------------------------------------------------------------------------------



        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = (                                             |--
        --|                        SELECT id                                                  |--   
        --|                            FROM movies                                            |-- 
        --|                                WHERE title = "Cars 3"                             |--
        --|            );                                                                     |-- 
        --|                                                                                   |--           
        --|-----------------------------------------------------------------------------------|-- 




    ------------------------------------------------------------------------------------------------------------




        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = (                                             |--
        --|                        SELECT id                                                  |-- 
        --|                        ---------                                                  |--  
        --|                            FROM movies                                            |--
        --|                            -----------                                            |--    
        --|                                WHERE title = "Cars 3"                             |--
        --|                               -----------------------                             |-- 
        --|            );                                                                     |-- 
        --|                                                                                   |--           
        --|-----------------------------------------------------------------------------------|--     




    ------------------------------------------------------------------------------------------------------------




        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = (                                             |--
        --|                                                                                   |-- 
        --|                                                                                   |--  
        --|                                                                                   |--
        --|                                                                                   |--    
        --|                                                                                   |--
        --|                                                                                   |-- 
        --|            );                                                                     |-- 
        --|                                                                                   |--           
        --|-----------------------------------------------------------------------------------|-- 




    ------------------------------------------------------------------------------------------------------------




        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = (                                             |--
        --|                        3606752                                                    |-- 
        --|                        -------                                                    |--   
        --|            );                                                                     |-- 
        --|                                                                                   |--           
        --|-----------------------------------------------------------------------------------|-- 



-- Subqueries

-- Joins



    ------------------------------------------------------------------------------------------------------------




        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = (                                             |--
        --|                        3606752                                                    |-- 
        --|                        -------                                                    |--        
        --|            );                                                                     |-- 
        --|                                                                                   |--           
        --|-----------------------------------------------------------------------------------|-- 



-- QUERY 39

SELECT name FROM songs
    WHERE artist_id = (
        SELECT id FROM artists
            WHERE name = 'Post Malone');



-- Combining Tables


    
    -- Methods to reference data from other tables             


        --|-----------------------------------------------------------------------------------|--
        --|                                                                                   |--      
        --|   sqlite>  SELECT rating                                                          |--
        --|                FROM ratings                                                       |--      
        --|                    WHERE movie_id = (                                             |--
        --|                        3606752                                                    |-- 
        --|                        -------                                                    |--   
        --|            );                                                                     |-- 
        --|                                                                                   |--           
        --|-----------------------------------------------------------------------------------|-- 



-- Subqueries

-- Joins 


--      movoes                                                     ratings  

--        id      |      title      |        year                  movie_id       |       rating           
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--    -----------------------------------------------        ----------------------------------------
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...     



--      movoes                                                     ratings     
        
--        id      |      title      |        year                  movie_id       |       rating 
--        --      |                 |                              --------       |  
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--       ------   |                 |                              ------         |   
--    -----------------------------------------------        ----------------------------------------
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--       -------  |                 |                              -------        |                                
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--       -------  |                 |                              -------        |               
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...     
--         ---                                                       ---       


--     movoes JOIN ratings  

--        id      |      title      |        year    |      movie_id      |       rating 
--        --      |                 |                |      --------      |  
--    -----------------------------------------------|----------------------------------------
--       114709   |    Toy Story    |       1995     |       114709       |         8.3
--       ------   |                 |                |       ------       |   
--    -----------------------------------------------|----------------------------------------
--       3606752  |     Cars 3      |       2017     |       3606752      |         6.7
--       -------  |                 |                |       -------      |                                
--    -----------------------------------------------|----------------------------------------  
--       2294629  |     Frozen      |       2013     |       2294629      |         7.4
--       -------  |                 |                |       -------      |               
--    -----------------------------------------------|----------------------------------------  
--         ...    |       ...       |       ...      |        ...         |         ...     
--         ---                                                ---       




--      movoes                                                     ratings     
        
--        id      |      title      |        year                  movie_id       |       rating 
--        --      |                 |                              --------       |  
--    -----------------------------------------------        ----------------------------------------
--       114709   |    Toy Story    |       1995                   114709         |         8.3
--       ------   |                 |                              ------         |   
--    -----------------------------------------------        ----------------------------------------
--       3606752  |     Cars 3      |       2017                   3606752        |         6.7
--       -------  |                 |                              -------        |                                
--    -----------------------------------------------        ----------------------------------------  
--       2294629  |     Frozen      |       2013                   2294629        |         7.4
--       -------  |                 |                              -------        |               
--    -----------------------------------------------        ----------------------------------------  
--         ...    |       ...       |       ...                      ...          |         ...     
--         ---                                                       ---       



--     movoes JOIN ratings  

--        id      |      title      |        year    |      movie_id      |       rating 
--        --      |                 |                |      --------      |  
--    -----------------------------------------------|----------------------------------------
--       114709   |    Toy Story    |       1995     |       114709       |         8.3
--       ------   |                 |                |       ------       |   
--    -----------------------------------------------|----------------------------------------
--       3606752  |     Cars 3      |       2017     |       3606752      |         6.7
--       -------  |                 |                |       -------      |                                
--    -----------------------------------------------|----------------------------------------  
--       2294629  |     Frozen      |       2013     |       2294629      |         7.4
--       -------  |                 |                |       -------      |               
--    -----------------------------------------------|----------------------------------------  
--         ...    |       ...       |       ...      |        ...         |         ...     
--         ---                                                ---   



--     movoes JOIN ratings  

--        id      |      title      |       year     |       rating 
--        --      |                 |                |  
--    -----------------------------------------------|--------------------
--       114709   |    Toy Story    |       1995     |         8.3
--       ------   |                 |                |   
--    -----------------------------------------------|-------------------
--       3606752  |     Cars 3      |       2017     |         6.7
--       -------  |                 |                |                                
--    -----------------------------------------------|--------------------  
--       2294629  |     Frozen      |       2013     |         7.4
--       -------  |                 |                |               
--    -----------------------------------------------|--------------------  
--         ...    |       ...       |       ...      |         ...     
--         ---                                                   

-- *movie_id column hidden for visualization


-- QUERY 40

.schema artists

-- QUERY 41

SELECT songs.name, energy, artists.name
    FROM songs
        JOIN artists ON artists.id = songs.artist_id
            WHERE artists.name = 'Drake';


-- QUERY 42

EXPLAIN QUERY PLAN
    SELECT songs.name, artists.name FROM songs
        JOIN artists ON artists.id = songs.artist_id; 


-- QUERY 43

SELECT AVG(energy) FROM songs
    JOIN artists ON artists.id = songs.artist_id
        WHERE artist.name = 'Drake';

-- QUERY 44

SELECT AVG(energy) FROM songs
    JOIN artists ON artists.id = songs.artist_id
        WHERE artists.name = 'Drake';


-- QUERY 45

SELECT name FROM songs
    WHERE name LIKE '%feat.%';


-- QUERY 46

SELECT artists.name, COUNT(artists.name) FROM songs
    JOIN artists ON artists.id = songs.artist_id
        GROUP BY artists.name;



-- Combining Tables
    
    -- Methods to reference data from other tables   


--     movoes JOIN ratings  

--        id      |      title      |       year     |       rating 
--        --      |                 |                |  
--    -----------------------------------------------|--------------------
--       114709   |    Toy Story    |       1995     |         8.3
--       ------   |                 |                |   
--    -----------------------------------------------|-------------------
--       3606752  |     Cars 3      |       2017     |         6.7
--       -------  |                 |                |                                
--    -----------------------------------------------|--------------------  
--       2294629  |     Frozen      |       2013     |         7.4
--       -------  |                 |                |               
--    -----------------------------------------------|--------------------  
--         ...    |       ...       |       ...      |         ...     
--         ---                                  