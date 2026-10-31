/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027485d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_38edbb1296d33220d7e4dd0ed76b244a>,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> >(class <lambda_38edbb1296d33220d7e4dd0ed76b244a>
   &&,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_38edbb1296d33220d7e4dd0ed76b244a>,<lambda_5ce1d447e08cb34b2473517608e21441>&,<lambda_fb385d3da700c9147fc39e65dd577a8c>_>
          (__crt_seh_guarded_call<void> *this,<lambda_38edbb1296d33220d7e4dd0ed76b244a> *param_1,
          <lambda_5ce1d447e08cb34b2473517608e21441> *param_2,
          <lambda_fb385d3da700c9147fc39e65dd577a8c> *param_3)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  piVar2 = *(int **)(**(int **)param_2 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_1039b6b0)) {
      FUN_10274120(piVar2);
    }
  }
  FUN_102748bc();
  ExceptionList = local_14;
  return;
}

