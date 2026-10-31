/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274803 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_a7e850c220f1c8d1e6efeecdedd162c6>,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> >(class <lambda_a7e850c220f1c8d1e6efeecdedd162c6>
   &&,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_a7e850c220f1c8d1e6efeecdedd162c6>,<lambda_46720907175c18b6c9d2717bc0d2d362>&,<lambda_9048902d66e8d99359bc9897bbb930a8>_>
          (__crt_seh_guarded_call<void> *this,<lambda_a7e850c220f1c8d1e6efeecdedd162c6> *param_1,
          <lambda_46720907175c18b6c9d2717bc0d2d362> *param_2,
          <lambda_9048902d66e8d99359bc9897bbb930a8> *param_3)

{
  void *local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  replace_current_thread_locale_nolock
            ((__acrt_ptd *)**(undefined4 **)param_2,
             *(__crt_locale_data **)**(undefined4 **)(param_2 + 4));
  FUN_10274851();
  ExceptionList = local_14;
  return;
}

