/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af1a4 */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_140f299c0)) {
      FUN_1401aea30();
    }
  }
  __acrt_unlock(*param_4);
  return;
}

