/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b20f8 */

/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringW(ushort *param_1,uint param_2,undefined1 (*param_3) [32],uint param_4,
                        LPWSTR param_5,int param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_4;
  if (0 < (int)param_4) {
    uVar2 = FUN_14009d080(param_3,(longlong)(int)param_4);
    uVar1 = (uint)uVar2;
    uVar3 = uVar1 + 1;
    if ((int)param_4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  FUN_1400a1f80(param_1,param_2,(LPCWSTR)param_3,uVar3,param_5,param_6,0,0,0);
  return;
}

