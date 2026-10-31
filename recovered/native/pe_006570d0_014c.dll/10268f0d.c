/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268f0d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_8e746cf0007f6ed984d6f78af1fec997>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &,class
   <lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> >(class <lambda_8e746cf0007f6ed984d6f78af1fec997>
   &&,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &,class
   <lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_8e746cf0007f6ed984d6f78af1fec997>,<lambda_22ebabd17bc4fa466a2aca6d8deb888d>&,<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e>_>
          (__crt_seh_guarded_call<int> *this,<lambda_8e746cf0007f6ed984d6f78af1fec997> *param_1,
          <lambda_22ebabd17bc4fa466a2aca6d8deb888d> *param_2,
          <lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> *param_3)

{
  int iVar1;
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  iVar1 = FUN_10268d20();
  FUN_10268f5c();
  ExceptionList = local_14;
  return iVar1;
}

