/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009cc04 */

ulonglong FUN_14009cc04(WCHAR param_1,ulonglong *param_2)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  
  if (param_2 == (ulonglong *)0x0) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1400a0ea0();
    uVar2 = 0xffff;
  }
  else {
    FUN_14008ea30((longlong)param_2);
    uVar2 = FUN_14009cc64(param_1,param_2);
    FUN_14008ea3c((longlong)param_2);
    uVar2 = uVar2 & 0xffff;
  }
  return uVar2;
}

