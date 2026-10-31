/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098134 */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1400a0ea0();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_1400abc58(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}

