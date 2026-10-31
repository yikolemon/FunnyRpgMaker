/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d04e0 */

undefined8 FUN_1801d04e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_a8;
  byte local_a7;
  char acStack_a6 [61];
  char local_69;
  char local_5e;
  char local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  byte local_52;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    uVar1 = 0x55;
  }
  else {
    uVar1 = FUN_1801ce63e(param_2,0);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1801ce682(param_2,&local_a8,0x80);
      if (((((int)uVar1 == 0) && (uVar1 = 2, local_a8 == '\0')) && (local_5e == '\0')) &&
         (((local_56 == '\0' && (0xde < (byte)(local_a7 - 0x22))) &&
          ((local_69 == '\0' && (-1 < (char)local_55 && acStack_a6[local_a7] == '\0')))))) {
        local_b8 = param_4;
        uVar1 = FUN_1801d061e(param_1,param_2,
                              ((uint)local_52 +
                               ((uint)local_53 << 8 |
                               (uint)local_54 << 0x10 | (uint)local_55 << 0x18) + 0x7f & 0xffffff80)
                              + 0x80,param_3);
      }
    }
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_d8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_d8);
}

