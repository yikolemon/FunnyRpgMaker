/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ef22 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_135d2772fca65dc1248eeaa1b56e886a>,class <lambda_2a444430fde8c29194d880d93eed5e8f> &,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> &>(class <lambda_135d2772fca65dc1248eeaa1b56e886a>
   &&,class <lambda_2a444430fde8c29194d880d93eed5e8f> &,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> &)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_135d2772fca65dc1248eeaa1b56e886a>,<lambda_2a444430fde8c29194d880d93eed5e8f>&,<lambda_8dff2cf36a5417162780cd64fa2883ef>&>
          (__crt_seh_guarded_call<void> *this,<lambda_135d2772fca65dc1248eeaa1b56e886a> *param_1,
          <lambda_2a444430fde8c29194d880d93eed5e8f> *param_2,
          <lambda_8dff2cf36a5417162780cd64fa2883ef> *param_3)

{
  undefined4 local_14;
  
  <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(param_2);
  FUN_0048ef58();
  ExceptionList = local_14;
  return;
}

