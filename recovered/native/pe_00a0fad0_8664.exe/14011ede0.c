/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ede0 */

/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14011ed50(param_1,param_2,param_4);
  if (iVar1 == 0) {
    lVar2 = FUN_14011d6e0();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return iVar1;
}

