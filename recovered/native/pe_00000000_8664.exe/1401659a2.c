/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401659a2 */

void FUN_1401659a2(undefined8 *param_1,byte *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = (byte *)*param_1;
  if (local_30 < param_2) {
    do {
      uVar1 = (ulonglong)*local_30;
      if (0x25 < uVar1) break;
      if ((0x100003601U >> (uVar1 & 0x3f) & 1) == 0) {
        if (uVar1 != 0x25) break;
        FUN_140165c7c(&local_30,param_2);
      }
      local_30 = local_30 + 1;
    } while (local_30 < param_2);
  }
  *param_1 = local_30;
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

