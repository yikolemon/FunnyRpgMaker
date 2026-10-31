/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b21d4 */

/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_CompareStringW
                    (ushort *param_1,uint param_2,undefined1 (*param_3) [32],uint param_4,
                    undefined1 (*param_5) [32],int param_6)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = FUN_14009d080(param_3,(longlong)(int)param_4);
    param_4 = (uint)uVar1;
  }
  if (0 < param_6) {
    uVar1 = FUN_14009d080(param_5,(longlong)param_6);
    param_6 = (int)uVar1;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)(((int)(param_4 - param_6) >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_1400a1c78(param_1,param_2,(PCNZWCH)param_3,param_4,(PCNZWCH)param_5,param_6,0,0,0);
  }
  return uVar1;
}

