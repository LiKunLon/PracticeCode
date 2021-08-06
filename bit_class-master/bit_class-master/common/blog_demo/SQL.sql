drop database if exists myblogdb;
create database myblogdb;

use myblogdb;

drop table if exists userinfo;
create table userinfo(
    id int primary key auto_increment,
    username varchar(50) not null,
    pwd varchar(32) not null,
    createtime datetime not null default now()
);

drop table if exists article;
create table article(
    id int primary key auto_increment,
    title varchar(250) not null,
    `desc` varchar(500) not null,
    content text not null,
    rcount int not null default 0,
    uid int not null,
    createtime datetime not null default now()
);