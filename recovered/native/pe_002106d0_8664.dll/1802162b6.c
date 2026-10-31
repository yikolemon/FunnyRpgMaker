/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802162b6 */

void FUN_1802162b6(undefined8 *param_1,byte *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = (byte *)*param_1;
  if (local_30 < param_2) {
    do {
      uVar1 = (ulonglong)*local_30;
      if (0x25 < uVar1) break;
      if ((0x100003601U >> (uVar1 & 0x3f) & 1) == 0) {
        if (uVar1 != 0x25) break;
        FUN_180216590(&local_30,param_2);
      }
      local_30 = local_30 + 1;
    } while (local_30 < param_2);
  }
  *param_1 = local_30;
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

