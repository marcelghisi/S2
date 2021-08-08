cmake_minimum_required(VERSION 3.19)
project(S2)

set(CMAKE_CXX_STANDARD 14)

include_directories(linked_list)

add_executable(S2
        ex_03/my_csv_parser.c
        ex_1/ord_alphlong.c
        ex_2/my_data_transform.c
        linked_list/list.c
        linked_list/list.h
        q6/ex04/atoi.c
        q7/ex00/ex00.c
        q7/ex01/my_union.c
        q7/ex02/inter.c
        q7/ex03/recapitalize.c
        q7/ex04/anagram.c
        q8/ex00/hidenp.c
        q8/ex01/my_split.c
        q8/ex02/my_strip.c
        q9/ex00/reverse-linked-list.c
        q9/ex01/remove-nth-node-from-end-of-list.c
        q9/ex02/remove-duplicates-from-sorted-list.c
        q9/ex03/merge-k-sorted-lists.c
        q9/ex03/mergek.c
        q9/ex03/save.c
        workshop/delete_spaces
        ws1/factorial.c
        ws1/fibo.c
        ws1/su.c)
