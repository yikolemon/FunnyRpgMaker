/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ed90 */

/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_14009ed00(&param_1->ExceptionRecord,(longlong)param_2,param_4);
  if ((int)uVar1 == 0) {
    pvVar2 = FUN_14009d690();
    *(int *)((longlong)pvVar2 + 0x78) = param_3;
  }
  return (int)uVar1;
}

