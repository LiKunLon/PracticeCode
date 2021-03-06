show databases;
use practice;
show tables;

drop table if exists student;
create table student(
id int not null,
sn int unique comment'学号',
name varchar(20) default 'unknown',
qq_mail varchar(30) default '123@qq.com'
);

drop table if exists student;
create table student (
id int primary key auto_increment,
sn int unique comment '学号',
name varchar (20) default 'unknown',
qq_mail varchar(30) default '123@11.com'
);

drop table if exists user;
create table user(
id int,
name varchar(20),
password varchar(20)
);

insert into user values(1,'bit','123');


drop table if exists classes;
create table classes(
id int primary key auto_increment,
name varchar(20),
`desc` varchar(30)
);


drop table if exists student;
create table student(
id int primary key auto_increment,
sn int unique ,
name varchar(20) default 'unknown',
qq_mail varchar(20),
class_id int,
foreign key (class_id) references classes(id)
);
--class_id是外键,classes是主表
--先创建主表
--先插入主表,后插入子表
--先删除子表(也可以先删除主表,前提是主表的字段未被关联,若被关联,删除失败)


drop table if exists emp;

create table emp(
id int primary key auto_increment,
name varchar(20) not null,
role varchar(20) not null,
salary numeric(11,2)
);


insert into emp(name, role, salary) values
('马云','服务员', 1000.20),
('马化腾','游戏陪玩', 2000.99),
('孙悟空','游戏角色', 999.11),
('猪无能','游戏角色', 333.5),
('沙和尚','游戏角色', 700.33),
('隔壁老王','董事长', 12000.66);



--内连接语法
select 字段 from 表1 别名1 [inner] join 表2 别名2 on 连接条件 and 其他条件;
select 字段 from 表1 别名1,表2 别名2 where 连接条件 and 其他条件;

--查询"许仙"的成绩
--学生表内连接成绩表
--条件:①学生表中的id=成绩表中的学生id
	-- ②学生id=4的就是许仙
select * from student inner join score on student.id=score.student_id and student.id=4;
--查询了关于许仙的所有信息


select student.id,student.sn,student.name
 from student inner join score 
 on student.id=score.student_id and student.id=4 ;
 --查询了学生id,sn,name



--内连接了三张表
--学生表内连接成绩表查询成绩,再内连接课程表查询课程名称
--sco.score具体成绩
--cou.name课程名称
select stu.id,stu.sn,stu.name,sco.score,cou.name 
from student as stu --给了别名之后,本条语句的其他地方都要使用别名
inner join score as sco 
on stu.id=sco.student_id and stu.id=4 
inner join course as cou on sco.course_id=cou.id;


2021.3.11 Homework
1、查询男女员工的平均工资
select sex,avg(salary) from emp group by sex;
--按照性别分组查询


2、查询各部门的总薪水
select depart,sum(salary) from emp group by depart;



3、查询总薪水排名第二的部门
select depart from emp group by depart order by sum(salary) desc limit 1,1;
--先按部门分个组,然后总薪水排序(默认升序,desc降序),然后limit分页查询,一页一个数据,第二页就是结果


4、查询姓名重复的员工信息
select name from emp group by name having count(name)>1;



5、查询各部门薪水大于10000的男性员工的平均薪水
--查询平均薪水
select avg(salary) from emp;
--查询各部门的平均薪水
select avg(salary) from emp group by depart ;
--查询各部门男性员工的平均薪水
select avg(salary) from emp where sex='男' group by depart;
--查询各部门薪水大于10000的男性员工的平均薪水
select avg(salary) from emp where sex='男' and salary>10000 group by depart;




部门表depart的字段有depart_id， name；
员工表 staff 的字段有 staff_id,name,age，depart_id；
薪资表salary 的字段有 salary_id，staff_id，salary，month;

（问题a）：求每个部门'2016-09'月份的部门薪水总额
select depart.name,sum(salary.salary) from salary 
inner join staff on staff.staff_id=salary.staff_id
inner join depart on depart.depart_id=salary.depart_id
where YEAR(salary.month)='2016' and MONTH(salary.month)='9'
group by depart.depart.id;
--三张表内连接



（问题b）：求每个部门的部门人数，要求输出部门名称和人数
select depart.name,count(staff.staff_id) from staff 
inner join depart on staff.depart_id=depart.depart_id
group by staff.depart_id;




（问题c）：求公司每个部门的月支出薪资数，要求输出月份和本月薪资总数

select depart.name,salary.month,sum(salary.salary) from depart 
inner join staff on staff.depart_id=depart.depart_id--找部门下的人
inner join salary on staff.staff_id=salary.staff_id--找每个人的薪水
group by depart.depart_id,salary.month;--先按照部门排序,再按照月份排序


编写一个SQL查询，获取Employee表中第二高的薪水（Salary）
select salary from Employee group by salary order by salary desc limit 1,1;





事务的ACID四大特性：
Atomic原子性：原子性要求所有语句要么全部成功，要么全部不成功，不能部分成功

Consistency一致性：规定了事物提交前后，永远只可能存在事物提交前的状态和事物提交后的状态，从一个一致性的状态到另一个一致性状态，而不可能出现中间的过程态。

Isolation隔离性：事物的隔离性，基于原子性和一致性，因为事物是原子化，量子化的，所以，事物可以有多个原子包的形式并发执行，但是，每个事物互不干扰。

Durability持久性：当一个事物提交之后，数据库状态永远的发生了改变。数据已经更新到硬盘。