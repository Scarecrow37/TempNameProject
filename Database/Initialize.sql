create database `game`;

use game;

CREATE TABLE `game`.`user` (
  `id` VARCHAR(20) NOT NULL,
  `password` VARCHAR(20) NOT NULL,
  `nickname` VARCHAR(20) NOT NULL,
  PRIMARY KEY (`id`));

insert into `user` values("AUserId", "AUserPw", "User_A");
insert into `user` values("BUserId", "BUserPw", "User_B");
insert into `user` values("CUserId", "CUserPw", "User_C");
insert into `user` values("DUserId", "DUserPw", "User_D");
insert into `user` values("EUserId", "EUserPw", "User_E");
insert into `user` values("FUserId", "FUserPw", "User_F");