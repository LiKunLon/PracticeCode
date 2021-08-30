-- 创建数据库
drop database if exists java17blog;
create database java17blog;

-- 使用数据数据
use java17blog;

-- 创建表[用户表]
drop table if exists  userinfo;
create table userinfo(
    id int primary key auto_increment,
    username varchar(100) not null,
    password varchar(32) not null,
    createtime datetime default now(),
    updatetime datetime default now(),
    `state` int default 1
);

-- 创建文章表
drop table if exists  articleinfo;
create table articleinfo(
    id int primary key auto_increment,
    title varchar(100) not null,
    content text not null,
    createtime datetime default now(),
    updatetime datetime default now(),
    uid int not null,
    rcount int not null default 1,
    `state` int default 1
);


insert into articleinfo(title,content,uid)
    values('Java','Java正文',2);