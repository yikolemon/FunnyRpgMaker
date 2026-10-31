/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286933 */

/* Library Function - Single Match
    ___acrt_LCMapStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LCMapStringW
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_10271eb0(param_3,param_4);
    iVar2 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  ___acrt_LCMapStringEx_36(param_1,param_2,param_3,iVar2,param_5,param_6,0,0,0);
  return;
}

