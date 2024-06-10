create database Librarydb

create table Books(
BookID int identity(1,1) primary key,
title nvarchar(50) not null,
author nvarchar(50) not null,
ISBN int not null,
available bit not null,
purchaseDate datetime,
dueDate datetime,
returndate datetime
);

insert into books(title, author, ISBN, available, purchaseDate)
values('Book Title', 'Author Name', 123456, 1, GETDATE());

select * from Books

delete from Books where ISBN = 123456
