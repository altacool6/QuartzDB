#ifndef __TYPE_DEF_H__
#define __TYPE_DEF_H__

typedef int Q_BOOL;
enum{
    Q_FALSE,
    Q_TRUE
};/* Q_BOOL Range*/

#define Q_NULL	(0)

typedef struct QuartzReq{
    int a;
} QUARTZ_REQ;

#define INIT_QUARTZ_REQ(a)    do{                               \
                                PD_Memset(&(a), sizeof((a)));   \
                            }while(0)

typedef void* DB_HANDLE;
typedef int   SEMAPORE_ID;
typedef int   SEMAPORE_RET;

enum{
    SEMA_QUEUE,
    SEMA_RUN,
};/* SEMAPORE_ID Range*/

enum{
    SEMA_FAILURE,
    SEMA_SUCCESS,
};/* SEMAPORE_RET Range*/

#define container_of(ptr, type, member) ((type*)(((char*)ptr) - ((int)(&(((type*)0)->member)))))


#define QDB_ASSERT(COND) do {                                                \
    if (!(COND)) {                                                           \
        int _exit = 0;                                                       \
        PD_Printf("[ASSERT FAIL] %s, %d line\n", __FUNCTION__, __LINE__);    \
        while(!_exit){};                                                     \
    }                                                                        \
} while (0)

#endif  //#ifndef __TYPE_DEF_H__