/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400784c2 */

longlong FUN_1400784c2(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (param_1 != param_3) {
    lVar2 = FUN_1400784ab(param_1,param_3);
    iVar1 = FUN_140076955(&local_2c,lVar2,param_2);
    if ((int)param_3 - (int)lVar2 < iVar1) {
      param_3 = lVar2;
    }
    param_1 = param_3;
    if (local_2c == 0xfffd) {
      param_1 = lVar2;
    }
  }
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return param_1;
}

