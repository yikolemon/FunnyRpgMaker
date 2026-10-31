/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019eb7c */

longlong FUN_18019eb7c(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    if (param_3 == 0) {
      (*(code *)PTR_thunk_FUN_1800fe8d4_180404688)(param_4,DAT_18041f138);
      lVar1 = 0;
    }
    else {
      lVar1 = param_4;
      if (param_2 < param_3) {
        lVar1 = (*(code *)PTR_thunk_FUN_1800fe7f8_180404680)((longlong)param_3,DAT_18041f138);
        FUN_1802a82f0(lVar1,param_4,(longlong)param_2);
        (*(code *)PTR_thunk_FUN_1800fe8d4_180404688)(param_4,DAT_18041f138);
      }
    }
    return lVar1;
  }
  lVar1 = (*(code *)PTR_thunk_FUN_1800fe7f8_180404680)((longlong)param_3,DAT_18041f138);
  return lVar1;
}

