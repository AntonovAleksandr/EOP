
add_library(EOP_Course
        data/entities/tag/EOP_Tag.c
        data/entities/content/EOP_Content.c
        data/entities/homework/EOP_Homework.c
        data/entities/test/EOP_Test.c
        data/entities/lesson/EOP_Lesson.c
        data/entities/lesson/EOP_Lesson.h
        EOP_Course.c
        data/db/db.c
        controller/controllers_register.c
        controller/controllers_register.h
        data/db/dao/Db_creation.c
        data/db/tables/course_table/EOP_Course_Table.c
        data/db/tables/course_table/EOP_Course_Table.h
        data/db/dao/EOP_Course_Dao.c
        data/db/dao/EOP_Course_Dao.h
)

target_include_directories(EOP_Course PUBLIC ${CMAKE_SOURCE_DIR})
