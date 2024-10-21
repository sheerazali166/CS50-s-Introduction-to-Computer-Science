

-- SQL

    -- Often times, in order for us to build the most functional websites we can we depend on a database
    -- to store information

    -- If you're ever used Microsoft Excel or Google Spreadsheets (among others) odds are you're fimiliar
    -- with notion of a database: a hierarchically organized set of tables, each of which contains a set
    -- of rows and columns.

    -- SQL

        -- SQL (the Structure Query Language) is a programming language whose purpose is to query a database.
        -- MySQL is one open-source plateform on which you can establish the type of relational database that
        -- SQL is most adept at working with.

            -- SQLite is another, which we're actually use in CS50 since 2016.

        -- Many installation of SQL come with a GUI tool called phpMyAdmin which can be used to execute       
        -- database queries in a more user-friendly way 


-- SQL

    -- After you create a database, the next thing you'll most likely want to do is create a table.
        
        -- The syntax for doing this is actually a bit awkward to do programically, at least at the outset,
        -- and so this is where phpMyAdmin will come in handy.

    -- Part of the process of creating a table you'll be asked to specify all of the columns in that table.


    -- Thereafter, all your queries will refer to rows of the table.          


 -- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



-------------------------------------------------------------------------------------------------------------


 -- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|---------------|---------------|---------------|---------------|---------------|--   



-------------------------------------------------------------------------------------------------------------


 -- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.


            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--
            --|      ---      |               |               |               |               |--    
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|---------------|---------------|---------------|---------------|---------------|-- 




-------------------------------------------------------------------------------------------------------------


 -- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--
            --|               |   --------    |    -------    |   ---------   |     ------    |--    
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|---------------|---------------|---------------|---------------|---------------|-- 



 -----------------------------------------------------------------------------------------------------------------



 -- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--   
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|    -------    |   --------    |               |               |               |-- 
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|---------------|---------------|---------------|---------------|---------------|-- 



 -----------------------------------------------------------------------------------------------------------------



         -- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.


            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--   
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|               |               |               |     ----      |      ----     |-- 
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |--
            --|    --------   |   ---------   |               |               |               |    
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|---------------|---------------|---------------|---------------|---------------|--  



 -----------------------------------------------------------------------------------------------------------------



-- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--   
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |-- 
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|               |               |               |    --------   |   ----------  |--
            --|---------------|---------------|---------------|---------------|---------------|--        



 -----------------------------------------------------------------------------------------------------------------



-- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--   
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |-- 
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|               |      ----     |               |               |               |--
            --|---------------|---------------|---------------|---------------|---------------|-- 



-----------------------------------------------------------------------------------------------------------------



-- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--   
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |-- 
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|               |               |     ----      |               |               |--
            --|---------------|---------------|---------------|---------------|---------------|--  



-----------------------------------------------------------------------------------------------------------------



-- SQL

    -- Each column of your SQL table is capable of holding data of a particular data type.



            --|---------------|---------------|---------------|---------------|---------------|--
            --|      INT      |   SMALLINT    |    TINYINT    |   MEDIUMINT   |     BIGINT    |--   
            --|---------------|---------------|---------------|---------------|---------------|--
            --|    DECIMAL    |     FLOAT     |      BIT      |     DATE      |      TIME     |--
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|    DATETIME   |   TIMESTAMP   |     CHAR      |    VARCHAR    |     BINARY    |-- 
            --|               |               |     ----      |    -------    |               | 
            --|               |               |     ----      |    -------    |               |
            --|---------------|---------------|---------------|---------------|---------------|-- 
            --|     BLOB      |      TEXT     |     ENUM      |    GEOMETRY   |   LINESTRING  |--
            --|---------------|---------------|---------------|---------------|---------------|--



-----------------------------------------------------------------------------------------------------------------



-- SQL

    -- Unlike in C, the CHAR data type in SQL does not refer to a single character. Rather, it is a fixed
    -- length striing.

        -- in most relational databases, including MySQL, you actually specify the fixed length as part of
        -- the type definition, e.g. CHAR(10).

    -- A VARCHAR refers to a varable-length string. 

        -- VARCHARs also require you to specify the maximum possible length of a string that could be stored
        -- in that column, e.g. VARCHAR(99)           



-- SQL
    
    -- SQLite has these data types as well, but affiliates each with a "type-affinity" to simplify the strings.



            --|------------|------------|------------|------------|------------|-- 
            --|    NULL    |  INTEGER   |    REAL    |    TEXT    |    BLOB    |--  
            --|------------|------------|------------|------------|------------|--



-- SQL

    -- One other important consideration when constructing a table in SQL is to choose one column to be your
    -- primary key.


    -- Primary keys enable rows of a table to be uniquely and quickly identified.
    
        -- Choosing your primary key approximately can make subsequent operations on the table much easier.


    -- It is also possible to establish a joint primary key - a combination of two columns that is always
    -- guaranteed to be unique.     


-- SQL

    -- SQL is a programming language, but its vocabulary is fairly limited.
    -- We will primary consider just four operations that one may perform on a table.


    -- SQL

    -- SQL is a programming language, but its vocabulary is fairly limited.
    -- We will primary consider just four operations that one may perform on a table.


                                     -- INSERT

-- SQL

    -- SQL is a programming language, but its vocabulary is fairly limited.
    -- We will primary consider just four operations that one may perform on a table.


                                     -- INSERT
                                     -- SELECT


-- SQL

    -- SQL is a programming language, but its vocabulary is fairly limited.
    -- We will primary consider just four operations that one may perform on a table.


                                     -- INSERT
                                     -- SELECT
                                     -- UPDATE


-- SQL

    -- SQL is a programming language, but its vocabulary is fairly limited.
    -- We will primary consider just four operations that one may perform on a table.


                                     -- INSERT
                                     -- SELECT
                                     -- UPDATE
                                     -- DELETE



-- SQL

        -- users

        --|------------------|------------------|------------------|------------------|--
        --|       idnum      |     username     |     password     |     fullname     |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
        --|------------------|------------------|------------------|------------------|-- 



                        -- moms 

                        --|------------------|--------------------|--
                        --|     username     |      mother        |--
                        --|------------------|--------------------|-- 
                        --|       jerry      |  Helen Seinfeld    |--
                        --|------------------|--------------------|-- 
                        --|     gcostanza    |  Estelle Costanza  |--
                        --|------------------|--------------------|-- 



-- SQL

    -- INSERT

        -- Add information to a table.


-- SQL

    -- INSERT

        -- Add information to a table.

            -- INSERT INTO <table> (<columns>) VALUES (<values>)


-- SQL

    -- INSERT

        -- Add information to a table.

            -- INSERT INTO users (username, password, fullname) VALUES ('newman', 'USMAIL', 'Newman')


-- SQL

        -- users

        --|------------------|------------------|------------------|------------------|--
        --|       idnum      |     username     |     password     |     fullname     |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
        --|------------------|------------------|------------------|------------------|-- 



                        -- moms 

                        --|------------------|--------------------|--
                        --|     username     |      mother        |--
                        --|------------------|--------------------|-- 
                        --|       jerry      |  Helen Seinfeld    |--
                        --|------------------|--------------------|-- 
                        --|     gcostanza    |  Estelle Costanza  |--
                        --|------------------|--------------------|-- 



-- SQL

        -- users

        --|------------------|------------------|------------------|------------------|--
        --|       idnum      |     username     |     password     |     fullname     |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
        --|------------------|------------------|------------------|------------------|-- 
        --|        12        |       newman     |       USMAIL     |       Newman     |--
        --|        --        |       ------     |       -----      |       ------     |                      
        --|------------------|------------------|------------------|------------------|-- 



                        -- moms 

                        --|------------------|--------------------|--
                        --|     username     |      mother        |--
                        --|------------------|--------------------|-- 
                        --|       jerry      |  Helen Seinfeld    |--
                        --|------------------|--------------------|-- 
                        --|     gcostanza    |  Estelle Costanza  |--
                        --|------------------|--------------------|-- 


                    

-------------------------------------------------------------------------------------------------------------------------


-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--
            --|        --        |                  |                  |                  |                      
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 



-- SQL

    -- When defining the column that ultimately ends up being your table's primary key, it's usually a
    -- good idea to have that column be an integer.

    
    -- Moreover, so as to eliminate the situation where you may accidentally forget to specify a real value
    -- for the primary key column, you can configure that column to autoincrement, so it will pre-populate
                                                                    -------------
    -- that column for automatically when rows are added to the table.



-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                    
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 


-- SQL

    -- INSERT 

        -- Add information to a table.

            -- INSERT INTO moms
                   -- (username, mother) VALUES ('krammer', 'Babs Krammer') 



-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                    
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 



-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                    
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 






-- SQL

    -- SELECT

        -- Extract information from a table.


-- SQL

    -- SELECT

        -- Extract information from a table.

            -- SELECT <columns_two> FROM <table_two> WHERE <condition> ORDER BY <column>


-- SQL 

    -- SELECT

        -- Extract information from a table.

            -- SELECT idnum, fullname FROM users



-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                    
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 


-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|        --        |                  |                  |  --------------  |--     
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|        --        |                  |                  |  --------------- |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--
            --|        --        |                  |                  |       ------     |                        
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 





-- SQL

    -- SELECT

        -- Extract information from a table.

            -- SELECT password from users WHERE idnum < 12


-- SQL

            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|--



-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--
            --|                  |                  |      -------     |                  |--         
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--
            --|                  |                  |       -----      |                  |--                  
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 


-- SQL

    -- SELECT

        -- Extract information from a table.

        -- SELECT * FROM moms
            -- useraname = 'jerry'


-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--       
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                 
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|       -----      |  --------------    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 



-- SQL

    -- Databases empower us to organize information into tables efficiently.

        -- We don't always need to store every possible relevant piece of
        -- information in the same table, but can use relationships across
        -- the tables to let us pull information from where we need it. 



-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--       
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                 
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|--         


-- SQL

    -- Databases empower us to organize information into tables efficiently.

        -- We don't always need to store every possible relevant piece of
        -- information in the same table, but can use relationships across
        -- the tables to let us pull information from where we need it. 


    -- What if we now find ourselves in a situation where we need to get a
    -- user's fullname (from the users table) and their mother's name (from
    -- the member table).         


-- SQL

    -- SELECT (JOIN)

        -- Extract information from multiple tables.


-- SQL

    -- SELECT (JOIN)

        -- Extract information from multiple tables.        

            -- SELECT <columns_three> FROM <table_three1>
                -- JOIN <table_three2> ON <predicate> 


 -- SQL

    -- SELECT (JOIN)

        -- Extract information from multiple tables.        

            -- SELECT <columns_four> FROM <table_four1>
                -- JOIN <table_four2> ON <predicate_two> 

 
-- SQL

    -- SELECT (JOIN)

        -- Extract information from multiple tables. 

            -- SELECT users.fullname, moms.mother FROM users
                -- JOIN moms ON users.username = moms.username 

-- SQL

    -- SELECT (JOIN)

        -- Extract information from multiple tables. 

            -- SELECT users.fullname, moms.mother FROM users
                      -----           ----   
                -- JOIN moms ON users.username = moms.username 
                                -----            ----   


-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--       
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                 
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|--  


-- SQL

    -- SELECT (JOIN)

        -- Extract information from multiple tables. 

            -- SELECT users.fullname, moms.mother FROM users
                      -----           ----   
                -- JOIN moms ON users.username = moms.username 
                                -----            ----   


-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |-- 
            --|        --        |       -----      |      -------     |  --------------  |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |-- 
            --|        --        |     ---------    |       -----      |  --------------- |--                       
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|       -----      |  --------------    |--    
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|     ---------    |  ----------------  |--     
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 



-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |-- 
            --|                  |       -----      |                  |                  |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |-- 
            --|                  |     ---------    |                  |                  |--                       
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--
                            --|       -----      |                    |--    
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--
                            --|     ---------    |                    |--     
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|--                                                          


-- SQL

            -- users & moms

            --|------------------|------------------|------------------|------------------|------------------|--
            --|   users.idnum    |  users.username  |  users.password  |  users.fullname  |    moms.mother   |--
            --|                  |  moms.username   |                  |                  |                  |--  
            --|------------------|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |  Hellen Seinfeld |--    
            --|------------------|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza | Estelle Costanza |--                       
            --|------------------|------------------|------------------|------------------|------------------|-- 



-- SQL

            -- users & moms

            --|------------------|------------------|------------------|------------------|------------------|--
            --|   users.idnum    |  users.username  |  users.password  |  users.fullname  |    moms.mother   |--
            --|                  |  moms.username   |                  |                  |                  |--  
            --|------------------|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |  Hellen Seinfeld |--
            --|                  |                  |                  |  --------------  |  --------------- |--          
            --|------------------|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza | Estelle Costanza |--
            --|                  |                  |                  |  --------------- | ---------------- |--                         
            --|------------------|------------------|------------------|------------------|------------------|-- 



-- SQL

    -- UPDATE

        -- Modify information in a table.


-- SQL

    -- UPDATE

        -- Modify information in a table.

            -- UPDATE <table_five> SET <column_two> = <value>
                -- WHERE <predicate_three> 


-- SQL

    -- UPDATE

        -- Modify information in a table.

            -- UPDATE users SET password = 'yadayada'
                -- WHERE idnum = 10


-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                      
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--   
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--    
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 



-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |     yadayada     |  Jerry Seinfeld  |-- 
            --|                  |                  |     --------     |                  |--   
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                      
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--   
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--    
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|--  



-- SQL

    -- DELETE 

        -- Remove information from a table 

            -- DELETE <table> WHERE <predicate> 



-- SQL

    -- DELETE 

        -- Remove information from a table 

            -- DELETE FROM users
                -- WHERE username = 'newman'


-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                      
            --|------------------|------------------|------------------|------------------|-- 
            --|        12        |       newman     |       USMAIL     |       Newman     |--                     
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--   
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--    
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|-- 


-- SQL


            -- users

            --|------------------|------------------|------------------|------------------|--
            --|       idnum      |     username     |     password     |     fullname     |--
            --|------------------|------------------|------------------|------------------|-- 
            --|        10        |       jerry      |      fus!ll!     |  Jerry Seinfeld  |--    
            --|------------------|------------------|------------------|------------------|-- 
            --|        11        |     gcostanza    |       b0sc0      |  George Costanza |--                      
            --|------------------|------------------|------------------|------------------|-- 



                            -- moms 

                            --|------------------|--------------------|--
                            --|     username     |      mother        |--
                            --|------------------|--------------------|-- 
                            --|       jerry      |  Helen Seinfeld    |--   
                            --|------------------|--------------------|-- 
                            --|     gcostanza    |  Estelle Costanza  |--    
                            --|------------------|--------------------|-- 
                            --|      krammer     |     Babs Krammer   |--
                            --|------------------|--------------------|--                  



-- SQL

    -- All of these operations are pretty easy to do in the graphical interface of phpMyAdmin

    -- We want a way to do this programically, not just typing SQL commands into the "SQL" tab
    -- of phpMyAdmin

    -- Fortunately, SQL integrate with other programming languages such as Python or Php very
    -- easily. 