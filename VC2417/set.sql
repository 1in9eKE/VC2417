CREATE DATABASE LIS
GO
USE LIS
CREATE TABLE doctor
( ҽ����� VARCHAR(100) not NULL CONSTRAINT PK_LIS_DID PRIMARY KEY,
  ���� VARCHAR(100)  not NULL,
  ���� VARCHAR(100) not NULL,
  �Ա� VARCHAR(10) not NULL,
  ���� int not null,
  �������� datetime not null,
  ���֤�� VARCHAR(100),
  �������� varchar(100) not null,
  ��ע VARCHAR(100)
)
GO
USE LIS
CREATE TABLE patient
( ���˱�� VARCHAR(100) not null CONSTRAINT PK_LIS_PID PRIMARY KEY,
  ���� VARCHAR(100) not null,
  ���� VARCHAR(100) not NULL,
  �Ա� VARCHAR(10) not NULL,
  ���� int not null,
  �������� datetime not null,
  ���֤�� VARCHAR(100),
  ��ע VARCHAR(100)
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
( ������Ŀ VARCHAR(100) not null CONSTRAINT PK_LIS_PJN PRIMARY KEY,
  ȡ����� VARCHAR(100) not null,
  ��Ŀ�۸� float not null,
  �ο�ֵ VARCHAR(100)
)
GO
USE LIS
CREATE TABLE orders
( �ͼ쵥�� VARCHAR(100) not null CONSTRAINT PK_LIS_OID PRIMARY KEY,
  ����ʱ�� datetime not null,
  ���˱�� VARCHAR(100) not null REFERENCES patient(���˱��),
  ����ҽ����� VARCHAR(100) not null REFERENCES doctor(ҽ�����),
  �������� VARCHAR(100) not NULL,
  ������Ŀ VARCHAR(100) not null REFERENCES project(������Ŀ),
  ȡ����� VARCHAR(100) not NULL,
  ������� float not null,
  ���ʽ VARCHAR(100) not null,
  ��ע VARCHAR(100)
)
GO
USE LIS
CREATE TABLE result
( ������� VARCHAR(100) not null CONSTRAINT PK_LIS_RID PRIMARY KEY,
  �ͼ쵥�� VARCHAR(100) NOT NULL REFERENCES orders(�ͼ쵥��),
  ���˱�� VARCHAR(100) not null REFERENCES patient(���˱��),
  ������Ŀ VARCHAR(100) not null REFERENCES project(������Ŀ),
  ȡ��ʱ�� datetime not null,
  ¼��� VARCHAR(10) not null,
  ����ҽ����� VARCHAR(100) REFERENCES doctor(ҽ�����),
  ������� VARCHAR(100),
  ��⿪ʼʱ�� datetime,
  ����� VARCHAR(100),
  ������ʱ�� datetime,
  ����� VARCHAR(100) REFERENCES doctor(ҽ�����),
  ���ʱ�� datetime,
  ��ע VARCHAR(100)
)
