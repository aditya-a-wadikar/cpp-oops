/*
below code demos following,
    - protected access specifiers

Protected access specifiers
    - protected and public members of base class become protected member of derived class

Table of behaviour
    |----------------------------------------------------------------------------------------|
    | Access Specifier | Public Inheritance | Protected Inheritance | Private Inheritance    |
    |------------------|--------------------|-----------------------|------------------------|
    | private member   | not inherited      | not inherited         | not inherited          |
    |------------------|--------------------|-----------------------|------------------------|
    | public member    | public             | protected             | private                |
    |------------------|--------------------|-----------------------|------------------------|
    | protected member | protected          | protected             | private                |
    |----------------------------------------------------------------------------------------|

*/