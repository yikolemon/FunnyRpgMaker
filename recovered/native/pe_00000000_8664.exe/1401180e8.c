/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401180e8 */

longlong FUN_1401180e8(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    if (param_3 == 0) {
      (*(code *)PTR_thunk_FUN_140077b90_140f1c688)(param_4,DAT_140f324b8);
      lVar1 = 0;
    }
    else {
      lVar1 = param_4;
      if (param_2 < param_3) {
        lVar1 = (*(code *)PTR_thunk_FUN_140077ab4_140f1c680)((longlong)param_3,DAT_140f324b8);
        FUN_1401c5180(lVar1,param_4,(longlong)param_2);
        (*(code *)PTR_thunk_FUN_140077b90_140f1c688)(param_4,DAT_140f324b8);
      }
    }
    return lVar1;
  }
  lVar1 = (*(code *)PTR_thunk_FUN_140077ab4_140f1c680)((longlong)param_3,DAT_140f324b8);
  return lVar1;
}

