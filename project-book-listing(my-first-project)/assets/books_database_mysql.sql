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
  `price` varchar(400) ,
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

-- ===============================================
-- INSERT DEMO DATA
-- ===============================================

-- Insert demo data for authors_name
INSERT INTO `authors_name` (`author_name`, `other`) VALUES
('মাওলানা মুহাম্মদ আবদুর রহীম', 'বিখ্যাত ইসলামিক স্কলার'),
('ড. আবু বকর মুহাম্মদ যাকারিয়া', 'হাদিস বিশেষজ্ঞ'),
('মাওলানা সাইয়েদ আবুল আ\'লা মওদূদী', 'ইসলামিক চিন্তাবিদ'),
('ইমাম ইবনে কাসীর', 'তাফসির বিশেষজ্ঞ'),
('শাইখ সাঈদ ইবনে আলী ইবনে ওয়াহফ আল-ক্বাহতানী', 'সৌদি আলেম'),
('মাওলানা তারিক জামিল', 'দা\'ওয়াহ বিশেষজ্ঞ'),
('ইমাম নববী', 'হাদিস সংকলক'),
('শায়খুল ইসলাম ইবনে তাইমিয়্যাহ', 'ফিকহ বিশেষজ্ঞ'),
('মুফতি মুহাম্মদ শফী', 'তাফসিরকারক'),
('ড. বিলাল ফিলিপস', 'ইসলামিক শিক্ষাবিদ');

-- Insert demo data for catagory_list
INSERT INTO `catagory_list` (`catagory_name`, `other`) VALUES
('কুরআন ও তাফসীর', 'Quran and Tafsir'),
('হাদিস ও সুন্নাহ', 'Hadith and Sunnah'),
('সীরাত ও জীবনী', 'Biography and Seerah'),
('মৌলিক ইবাদাত', 'Fundamental Worship'),
('সাহিত্য ও দা\'ওয়াহ', 'Literature and Dawah'),
('আখিরাত', 'Hereafter'),
('ইসলামী জীবন ব্যবস্থা', 'Islamic Life System'),
('ইসলামী অর্থনীতি', 'Islamic Economics'),
('মানবাধিকার', 'Human Rights'),
('ইসলামী ইতিহাস', 'Islamic History');

-- Insert demo data for publication_list
INSERT INTO `publication_list` (`publication_name`, `other`) VALUES
('ইসলামিক ফাউন্ডেশন বাংলাদেশ', 'Islamic Foundation Bangladesh'),
('তাওহীদ পাবলিকেশন্স', 'Tawheed Publications'),
('দারুস সালাম পাবলিকেশন্স', 'Darussalam Publications'),
('আল-কোরআন একাডেমি লন্ডন', 'Al-Quran Academy London'),
('খায়রুন প্রকাশনী', 'Khayrun Prokashoni'),
('মাকতাবাতুল আযহার', 'Maktabatul Azhar'),
('আস-সুন্নাহ পাবলিকেশন্স', 'As-Sunnah Publications'),
('কালান্তর প্রকাশনী', 'Kalantor Prokashoni'),
('গার্ডিয়ান পাবলিকেশন্স', 'Guardian Publications'),
('দিব্যপ্রকাশ', 'Dibbo Prokash');

-- Insert demo data for quran table
INSERT INTO `quran` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('তাফসীরে ইবনে কাসীর (সম্পূর্ণ)', 'ইমাম ইবনে কাসীর', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '৩৫০০', 'কুরআন ও তাফসীর', 'yes', 'বিশ্বের সবচেয়ে জনপ্রিয় তাফসির'),
('তাফসীরে জালালাইন', 'ইমাম জালালুদ্দিন মাহাল্লী ও সুয়ূতী', 'তাওহীদ পাবলিকেশন্স', '১২০০', 'কুরআন ও তাফসীর', 'yes', 'সংক্ষিপ্ত কিন্তু গ্রহণযোগ্য তাফসির'),
('মা\'আরিফুল কুরআন', 'মুফতি মুহাম্মদ শফী', 'দারুস সালাম পাবলিকেশন্স', '২৮০০', 'কুরআন ও তাফসীর', 'yes', 'উর্দু ভাষার শ্রেষ্ঠ তাফসির'),
('তাফহীমুল কুরআন', 'মাওলানা সাইয়েদ আবুল আ\'লা মওদূদী', 'আল-কোরআন একাডেমি লন্ডন', '৩০০০', 'কুরআন ও তাফসীর', 'yes', 'আধুনিক যুগের সেরা তাফসির'),
('কুরআনের সহজ অনুবাদ', 'মাওলানা মুহাম্মদ আবদুর রহীম', 'খায়রুন প্রকাশনী', '৪৫০', 'কুরআন ও তাফসীর', 'yes', 'সাবলীল বাংলা অনুবাদ'),
('আল-কুরআনুল কারীম (আরবি-বাংলা)', 'ইসলামিক ফাউন্ডেশন', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '৬০০', 'কুরআন ও তাফসীর', 'yes', 'সরকারি প্রকাশনা');

-- Insert demo data for hadith table
INSERT INTO `hadith` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('সহীহ বুখারী (সম্পূর্ণ)', 'ইমাম বুখারী', 'তাওহীদ পাবলিকেশন্স', '২৫০০', 'হাদিস ও সুন্নাহ', 'yes', 'হাদিসের সবচেয়ে নির্ভরযোগ্য গ্রন্থ'),
('সহীহ মুসলিম (সম্পূর্ণ)', 'ইমাম মুসলিম', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '২৩০০', 'হাদিস ও সুন্নাহ', 'yes', 'দ্বিতীয় সবচেয়ে বিশুদ্ধ হাদিস গ্রন্থ'),
('রিয়াদুস সালেহীন', 'ইমাম নববী', 'দারুস সালাম পাবলিকেশন্স', '৮০০', 'হাদিস ও সুন্নাহ', 'yes', 'নৈতিকতার শ্রেষ্ঠ হাদিস সংকলন'),
('বুলুগুল মারাম', 'ইমাম ইবনে হাজার আসকালানী', 'মাকতাবাতুল আযহার', '৬৫০', 'হাদিস ও সুন্নাহ', 'yes', 'ফিকহের হাদিস সংকলন'),
('আল-আদাবুল মুফরাদ', 'ইমাম বুখারী', 'আস-সুন্নাহ পাবলিকেশন্স', '৫০০', 'হাদিস ও সুন্নাহ', 'yes', 'আদব ও আখলাক বিষয়ক হাদিস'),
('সুনানে আবু দাউদ', 'ইমাম আবু দাউদ', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '১৮০০', 'হাদিস ও সুন্নাহ', 'yes', 'ফিকহী হাদিসের গুরুত্বপূর্ণ সংকলন');

-- Insert demo data for as_sirat table
INSERT INTO `as_sirat` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('আর-রাহীকুল মাখতূম', 'সফিউর রহমান মুবারকপুরী', 'তাওহীদ পাবলিকেশন্স', '৫৫০', 'সীরাত ও জীবনী', 'yes', 'শ্রেষ্ঠ সীরাত গ্রন্থ'),
('নবীজীবন', 'মাওলানা মুহাম্মদ আবদুর রহীম', 'খায়রুন প্রকাশনী', '৪২০', 'সীরাত ও জীবনী', 'yes', 'সহজ ভাষায় রচিত সীরাত'),
('সীরাতে মুস্তফা (সা.)', 'মাওলানা ইদ্রিস কান্ধলভী', 'দারুস সালাম পাবলিকেশন্স', '৬৮০', 'সীরাত ও জীবনী', 'yes', 'বিস্তারিত সীরাত গ্রন্থ'),
('খোলাফায়ে রাশেদীন', 'খালিদ মুহাম্মদ খালিদ', 'গার্ডিয়ান পাবলিকেশন্স', '৩৮০', 'সীরাত ও জীবনী', 'yes', 'চার খলিফার জীবনী'),
('আসহাবে রাসূলের জীবনকথা', 'ড. আবু বকর মুহাম্মদ যাকারিয়া', 'কালান্তর প্রকাশনী', '৪৫০', 'সীরাত ও জীবনী', 'yes', 'সাহাবীদের অনুপ্রেরণামূলক জীবনী');

-- Insert demo data for maulik_ibadat table
INSERT INTO `maulik_ibadat` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('নামাযের হাকীকত', 'শাইখ সাঈদ ইবনে আলী ইবনে ওয়াহফ আল-ক্বাহতানী', 'তাওহীদ পাবলিকেশন্স', '২৮০', 'মৌলিক ইবাদাত', 'yes', 'নামাজের গুরুত্ব ও তাৎপর্য'),
('যাকাত ও দান', 'মাওলানা তারিক জামিল', 'দারুস সালাম পাবলিকেশন্স', '৩২০', 'মৌলিক ইবাদাত', 'yes', 'যাকাতের পূর্ণাঙ্গ বিধান'),
('হজ্জ ও উমরার পূর্ণাঙ্গ গাইড', 'ড. বিলাল ফিলিপস', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '৩৫০', 'মৌলিক ইবাদাত', 'yes', 'হজের ধাপে ধাপে নির্দেশনা'),
('রোজার ফযীলত ও মাসায়েল', 'মুফতি মুহাম্মদ শফী', 'খায়রুন প্রকাশনী', '২৫০', 'মৌলিক ইবাদাত', 'yes', 'রমজানের বিধিবিধান'),
('তাহারাত ও পবিত্রতা', 'শায়খুল ইসলাম ইবনে তাইমিয়্যাহ', 'মাকতাবাতুল আযহার', '২০০', 'মৌলিক ইবাদাত', 'yes', 'পবিত্রতার বিস্তারিত আলোচনা');

-- Insert demo data for sahitto_dowat table
INSERT INTO `sahitto_dowat` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('ইসলাম একটি পূর্ণাঙ্গ জীবন ব্যবস্থা', 'মাওলানা সাইয়েদ আবুল আ\'লা মওদূদী', 'আল-কোরআন একাডেমি লন্ডন', '৫৮০', 'সাহিত্য ও দা\'ওয়াহ', 'yes', 'ইসলামের পূর্ণাঙ্গ রূপরেখা'),
('দা\'ওয়াতের পথ ও পদ্ধতি', 'মাওলানা তারিক জামিল', 'তাওহীদ পাবলিকেশন্স', '৩৮০', 'সাহিত্য ও দা\'ওয়াহ', 'yes', 'দা\'ওয়াহর কৌশল ও নির্দেশনা'),
('ইসলামী সাহিত্য ও সংস্কৃতি', 'ড. আবু বকর মুহাম্মদ যাকারিয়া', 'দিব্যপ্রকাশ', '৪২০', 'সাহিত্য ও দা\'ওয়াহ', 'yes', 'ইসলামী সংস্কৃতির বিশ্লেষণ'),
('মুসলিম উম্মাহর ঐক্য', 'শায়খুল ইসলাম ইবনে তাইমিয়্যাহ', 'গার্ডিয়ান পাবলিকেশন্স', '৩৫০', 'সাহিত্য ও দা\'ওয়াহ', 'yes', 'উম্মাহর ঐক্যের গুরুত্ব');

-- Insert demo data for akhirat table
INSERT INTO `akhirat` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('জান্নাত ও জাহান্নাম', 'শাইখ সাঈদ ইবনে আলী ইবনে ওয়াহফ আল-ক্বাহতানী', 'তাওহীদ পাবলিকেশন্স', '৪২০', 'আখিরাত', 'yes', 'পরকালের বিস্তারিত বর্ণনা'),
('মৃত্যু ও কবরের আলেম', 'ইমাম ইবনে কাসীর', 'দারুস সালাম পাবলিকেশন্স', '৩৫০', 'আখিরাত', 'yes', 'মৃত্যু ও কবর সম্পর্কে হাদিস'),
('কিয়ামতের আলামত', 'ড. বিলাল ফিলিপস', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '৩৮০', 'আখিরাত', 'yes', 'কিয়ামতের ছোট ও বড় আলামত'),
('হাশরের ময়দান', 'মাওলানা মুহাম্মদ আবদুর রহীম', 'খায়রুন প্রকাশনী', '৩২০', 'আখিরাত', 'yes', 'পুনরুত্থানের বিস্তারিত বিবরণ');

-- Insert demo data for islami_jibon_babostha table
INSERT INTO `islami_jibon_babostha` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('ইসলামী রাষ্ট্র ব্যবস্থা', 'মাওলানা সাইয়েদ আবুল আ\'লা মওদূদী', 'আল-কোরআন একাডেমি লন্ডন', '৬৫০', 'ইসলামী জীবন ব্যবস্থা', 'yes', 'ইসলামী শাসন ব্যবস্থার রূপরেখা'),
('পরিবার ও সমাজ জীবনে ইসলাম', 'ড. আবু বকর মুহাম্মদ যাকারিয়া', 'তাওহীদ পাবলিকেশন্স', '৪৮০', 'ইসলামী জীবন ব্যবস্থা', 'yes', 'পারিবারিক জীবনে ইসলামের শিক্ষা'),
('ইসলামী শিক্ষা ব্যবস্থা', 'মুফতি মুহাম্মদ শফী', 'দারুস সালাম পাবলিকেশন্স', '৫২০', 'ইসলামী জীবন ব্যবস্থা', 'yes', 'শিক্ষা ক্ষেত্রে ইসলামের দিকনির্দেশনা'),
('ইসলামে নারীর অধিকার', 'শায়খুল ইসলাম ইবনে তাইমিয়্যাহ', 'গার্ডিয়ান পাবলিকেশন্স', '৩৮০', 'ইসলামী জীবন ব্যবস্থা', 'yes', 'নারীর অধিকার ও মর্যাদা');

-- Insert demo data for islami_orthoniti table
INSERT INTO `islami_orthoniti` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('ইসলামী অর্থনীতির মূলনীতি', 'মাওলানা সাইয়েদ আবুল আ\'লা মওদূদী', 'আল-কোরআন একাডেমি লন্ডন', '৭২০', 'ইসলামী অর্থনীতি', 'yes', 'ইসলামী অর্থব্যবস্থার ভিত্তি'),
('সুদমুক্ত ব্যাংকিং', 'ড. বিলাল ফিলিপস', 'ইসলামিক ফাউন্ডেশন বাংলাদেশ', '৫৮০', 'ইসলামী অর্থনীতি', 'yes', 'ইসলামী ব্যাংকিং পদ্ধতি'),
('হালাল ব্যবসা ও বাণিজ্য', 'মুফতি মুহাম্মদ শফী', 'তাওহীদ পাবলিকেশন্স', '৪৫০', 'ইসলামী অর্থনীতি', 'yes', 'ব্যবসায়ে শরীয়তের বিধান'),
('যাকাত ও ইসলামী অর্থনীতি', 'ড. আবু বকর মুহাম্মদ যাকারিয়া', 'দারুস সালাম পাবলিকেশন্স', '৩৮০', 'ইসলামী অর্থনীতি', 'yes', 'যাকাত ব্যবস্থার অর্থনৈতিক ভূমিকা');

-- Insert demo data for manabadhikar table
INSERT INTO `manabadhikar` (`books_name`, `author_name`, `publication_name`, `price`, `catagory`, `yes_no`, `commnet`) VALUES
('ইসলামে মানবাধিকার', 'মাওলানা সাইয়েদ আবুল আ\'লা মওদূদী', 'আল-কোরআন একাডেমি লন্ডন', '৫৫০', 'মানবাধিকার', 'yes', 'ইসলামে মানবাধিকারের রূপরেখা'),
('সামাজিক ন্যায়বিচার', 'শায়খুল ইসলাম ইবনে তাইমিয়্যাহ', 'তাওহীদ পাবলিকেশন্স', '৪২০', 'মানবাধিকার', 'yes', 'ন্যায়বিচার প্রতিষ্ঠায় ইসলাম'),
('সংখ্যালঘুদের অধিকার', 'ড. বিলাল ফিলিপস', 'গার্ডিয়ান পাবলিকেশন্স', '৩৮০', 'মানবাধিকার', 'yes', 'ইসলামী রাষ্ট্রে সংখ্যালঘুদের অধিকার'),
('মানবিক মূল্যবোধ', 'মুফতি মুহাম্মদ শফী', 'দারুস সালাম পাবলিকেশন্স', '৩২০', 'মানবাধিকার', 'yes', 'ইসলামে মানবিক মূল্যবোধ');

COMMIT;