-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: May 19, 2022 at 06:10 PM
-- Server version: 5.7.36
-- PHP Version: 7.4.26

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";

/*table list */;

CREATE TABLE `authors_name` (
  `id` int(200) AUTO_INCREMENT,
  `author_name` varchar(200) ,
  `other` varchar(100),
  PRIMARY KEY (`id`)
);

CREATE TABLE `catagory_list` (
  `id` int(200) AUTO_INCREMENT,
  `catagory_name` varchar(200) ,
  `other` varchar(100),
  PRIMARY KEY (`id`)
);

CREATE TABLE `publication_list` (
  `id` int(200) AUTO_INCREMENT,
  `publication_name` varchar(200) ,
  `other` varchar(100),
  PRIMARY KEY (`id`)
);

/*Quran Table List */;

CREATE TABLE `quran` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `hadith` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `as_sirat` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `maulik_ibadat` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `sahitto_dowat` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `akhirat` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `islami_jibon_babostha` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,ß
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);


CREATE TABLE `islami_orthoniti` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);

CREATE TABLE `manabadhikar` (
  `id` int(200) AUTO_INCREMENT,
  `books_name` varchar(400) ,
  `author_name` varchar(400) ,
  `publication_name` varchar(400) ,
  `price` varchar(400) ,
  `catagory` varchar(400) ,
  `yes_no` varchar(100),
  `commnet` varchar(600),
  PRIMARY KEY (`id`)
);


