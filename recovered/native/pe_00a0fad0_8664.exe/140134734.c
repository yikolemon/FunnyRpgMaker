/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134734 */

/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringW(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                        undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_14011d0a0(param_3,(longlong)param_4);
    iVar2 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  FUN_14012219c(param_1,param_2,param_3,iVar2,param_5,param_6,0,0,0);
  return;
}

