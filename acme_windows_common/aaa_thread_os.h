#pragma once


typedef unsigned int THREAD_PROC(void * p);

typedef THREAD_PROC * thread_proc;

//
//// very close to the operating system
//CLASS_DECL_ACME htask create_thread(
//thread_proc proc,
//void * p,
//::enum_priority epriority = ::e_priority_normal,
//unsigned int nStackSize = 0,
//unsigned int uiCreateFlags = 0,
//LPSECURITY_ATTRIBUTES psa = nullptr,
//
//itask * puiId = nullptr);
//
//




CLASS_DECL_ACME itask current_itask();

CLASS_DECL_ACME htask current_htask();





//CLASS_DECL_ACME bool on_init_thread();
//CLASS_DECL_ACME bool on_term_thread();
//
//
//CLASS_DECL_ACME void __init_thread();
//CLASS_DECL_ACME void __term_thread();
//
//
//CLASS_DECL_ACME bool __os_init_thread();
//CLASS_DECL_ACME bool __os_term_thread();
//

//CLASS_DECL_ACME bool __node_init_thread(::thread * pthread);
//CLASS_DECL_ACME bool __node_term_thread(::thread * pthread);


//CLASS_DECL_ACME void __init_threading_count();
//CLASS_DECL_ACME void __term_threading_count();


//CLASS_DECL_ACME void __inc_threading_count();
//CLASS_DECL_ACME void __dec_threading_count();




//#define __prevent_bad_status_exception __keep_thread_flag(id_thread_prevent_bad_status_exception)

//CLASS_DECL_ACME enumeration < e_thread_flag > & thread_flags();
//CLASS_DECL_ACME void thread_set_flag(const enumeration < e_thread_flag > & eflag, bool bSet = true);
//CLASS_DECL_ACME void thread_set_fast_path(bool bFastPath = true);
//CLASS_DECL_ACME bool thread_is_fast_path();
//CLASS_DECL_ACME void thread_set_zip_is_dir(bool bZipIsDir = true);
//CLASS_DECL_ACME bool thread_set(e_task_flag_compress_is_dir);
//CLASS_DECL_ACME void thread_set_is_timer(bool bIsTimer = true);
//CLASS_DECL_ACME bool thread_is_timer();
//CLASS_DECL_ACME void thread_set_resolve_alias(bool bResolveAlias = true);
//CLASS_DECL_ACME bool thread_resolve_alias();


//CLASS_DECL_ACME bool __wait_threading_count(::duration dur);
//CLASS_DECL_ACME bool __wait_threading_count_except(::thread * pthread,::duration dur);


//CLASS_DECL_ACME ::thread * get_task();
//CLASS_DECL_ACME void set_thread(thread * pthread);
//CLASS_DECL_ACME void thread_release();


CLASS_DECL_ACME bool task_get_run();


//CLASS_DECL_ACME void __node_init_multithreading();
//CLASS_DECL_ACME void __node_term_multithreading();



//
//namespace parallelization
//{
//
//
//   //CLASS_DECL_ACME void init_multithreading();
//   //CLASS_DECL_ACME void term_multithreading();
//
//   //CLASS_DECL_ACME bool thread_registered(::thread * pthread);
//   //CLASS_DECL_ACME bool thread_id_registered(itask atom);
//
//   //CLASS_DECL_ACME void thread_register(itask itask, ::thread * pthread);
//
//   //CLASS_DECL_ACME void thread_unregister(itask itask, ::thread * pthread);
//
//   //CLASS_DECL_ACME bool is_child(::thread * pthread);
//
//   //CLASS_DECL_ACME void post_quit_to_all_threads();
//
//   //CLASS_DECL_ACME void post_to_all_threads(::enum_message emessage, ::wparam wparam, ::lparam lparam);
//
//   ////CLASS_DECL_ACME bool wait_threads(::duration duration, pointer_array < ::thread > threadaExcept = pointer_array < ::thread >());
//
//   //CLASS_DECL_ACME ::task_pointer calc_parent(::thread * pthread);
//
//   //CLASS_DECL_ACME void __node_on_init_thread(thread * pthread);
//   //CLASS_DECL_ACME void __node_on_term_thread(thread * pthread);
//
//   //CLASS_DECL_ACME extern comparable_eq_array <itask> * s_piaThread;
//   //CLASS_DECL_ACME extern address_array < ::thread * > * s_pthreadptra;
//   //CLASS_DECL_ACME extern ::mutex * s_pmutex;
//
//
//} // namespace parallelization
//


//CLASS_DECL_ACME void __end_thread(::matter * pobject);

//CLASS_DECL_ACME void __term_thread(::matter * pobject);






#ifdef WINDOWS

///  \brief    global function to wait on a matter item for a specified time
///  \lparam    waitableItem item to wait for (can be happening, socket, file, semaphore, ...)
///  \lparam    duration time period to wait for item (default: infinite)
///  \return   result of waiting action as defined in synchronization_result
inline synchronization_result wait(synchronization_object * psync,const duration & duration = duration::infinite())
{
   return psync->wait(duration);
}

///  \brief    global function to wait on a matter item for a specified time
///  \lparam    waitableItem item to wait for (item can be thread, happening, socket, file, semaphore, ...)
///  \lparam    duration time period to wait for item (default: infinite)
///  \return   result of waiting action as defined in synchronization_result
synchronization_result wait(int numberOfItems, synchronization_object * psync, const duration & duration = duration::infinite(),bool waitForAll = false);

#else

///  \brief    global function to wait on a matter item for a specified time
///  \lparam    waitableItem item to wait for (can be happening, socket, file, semaphore, ...)
///  \lparam    duration time period to wait for item (default: infinite)
///  \return   result of waiting action as defined in synchronization_result
synchronization_result wait(synchronization_object * psync,const duration & duration = duration::infinite());

///  \brief    global function to wait on a matter item for a specified time
///  \lparam    waitableItem item to wait for (item can be thread, happening, socket, file, semaphore, ...)
///  \lparam    duration time period to wait for item (default: infinite)
///  \return   result of waiting action as defined in synchronization_result
synchronization_result wait(size_t numberOfItems, synchronization_object ** psync, const duration& duration = duration::infinite(),bool waitForAll = false);

#endif




//CLASS_DECL_ACME void thread_alloc_ready(bool bReady);









//CLASS_DECL_ACME ::mutex & user_mutex();
CLASS_DECL_ACME ::mutex & message_dispatch_mutex();




typedef void SIMPLE_ROUTINE(void);
typedef SIMPLE_ROUTINE * PPROC_SIMPLE;

//CLASS_DECL_ACME extern PPROC_SIMPLE g_axisoninitthread;
//CLASS_DECL_ACME extern PPROC_SIMPLE g_axisontermthread;



