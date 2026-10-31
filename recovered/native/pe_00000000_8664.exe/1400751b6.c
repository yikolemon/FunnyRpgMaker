/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400751b6 */

longlong FUN_1400751b6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (param_1 != param_2) {
    do {
      local_38 = param_3;
      if (7 < (ulonglong)param_3[3]) {
        local_38 = (undefined8 *)*param_3;
      }
      local_30 = param_3[2];
      iVar1 = FUN_14003a6c0(param_1,&local_38);
    } while ((iVar1 != 0) && (param_1 = param_1 + 0x20, param_1 != param_2));
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

