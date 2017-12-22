CREATE DATABASE LIS
GO
USE LIS
CREATE TABLE doctor
( 医生编号 VARCHAR(100) not NULL CONSTRAINT PK_LIS_DID PRIMARY KEY,
  密码 VARCHAR(100)  not NULL,
  姓名 VARCHAR(100) not NULL,
  性别 VARCHAR(10) not NULL,
  年龄 int not null,
  出生日期 datetime not null,
  身份证号 VARCHAR(100),
  所属科室 varchar(100) not null,
  备注 VARCHAR(100)
)
GO
USE LIS
CREATE TABLE patient
( 病人编号 VARCHAR(100) not null CONSTRAINT PK_LIS_PID PRIMARY KEY,
  密码 VARCHAR(100) not null,
  姓名 VARCHAR(100) not NULL,
  性别 VARCHAR(10) not NULL,
  年龄 int not null,
  出生日期 datetime not null,
  身份证号 VARCHAR(100),
  备注 VARCHAR(100)
)
GO
USE LIS
CREATE TABLE admin
( AdminID VARCHAR(100) not null CONSTRAINT PK_LIS_AID PRIMARY KEY,
  password VARCHAR(100) not null
)
GO
USE LIS
CREATE TABLE project
( 检验项目 VARCHAR(100) not null CONSTRAINT PK_LIS_PJN PRIMARY KEY,
  取样类别 VARCHAR(100) not null,
  项目价格 float not null,
  参考值 VARCHAR(100)
)
GO
USE LIS
CREATE TABLE orders
( 送检单号 VARCHAR(100) not null CONSTRAINT PK_LIS_OID PRIMARY KEY,
  开单时间 datetime not null,
  病人编号 VARCHAR(100) not null REFERENCES patient(病人编号),
  开单医生编号 VARCHAR(100) not null REFERENCES doctor(医生编号),
  开单科室 VARCHAR(100) not NULL,
  检验项目 VARCHAR(100) not null REFERENCES project(检验项目),
  取样类别 VARCHAR(100) not NULL,
  所需费用 float not null,
  付款方式 VARCHAR(100) not null,
  备注 VARCHAR(100)
)
GO
USE LIS
CREATE TABLE result
( 样本编号 VARCHAR(100) not null CONSTRAINT PK_LIS_RID PRIMARY KEY,
  送检单号 VARCHAR(100) NOT NULL REFERENCES orders(送检单号),
  病人编号 VARCHAR(100) not null REFERENCES patient(病人编号),
  检验项目 VARCHAR(100) not null REFERENCES project(检验项目),
  取样时间 datetime not null,
  录入否 VARCHAR(10) not null,
  检验医生编号 VARCHAR(100) REFERENCES doctor(医生编号),
  检测仪器 VARCHAR(100),
  检测开始时间 datetime,
  检测结果 VARCHAR(100),
  检测结束时间 datetime,
  审核者 VARCHAR(100) REFERENCES doctor(医生编号),
  审核时间 datetime,
  备注 VARCHAR(100)
)
