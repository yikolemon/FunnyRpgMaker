/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400228e3 */

ulonglong FUN_1400228e3(longlong *param_1,longlong *param_2,int param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined1 auStackY_d8 [32];
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
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_d8;
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x55;
  }
  else {
    uVar1 = FUN_140020a41((longlong)param_2,0);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_140020a85(param_2,(undefined8 *)&local_a8,0x80);
      if (((((int)uVar1 == 0) && (uVar1 = 2, local_a8 == '\0')) && (local_5e == '\0')) &&
         (((local_56 == '\0' && (0xde < (byte)(local_a7 - 0x22))) &&
          ((local_69 == '\0' && (-1 < (char)local_55 && acStack_a6[local_a7] == '\0')))))) {
        uVar1 = FUN_140022a21(param_1,param_2,
                              ((uint)local_52 +
                               ((uint)local_53 << 8 |
                               (uint)local_54 << 0x10 | (uint)local_55 << 0x18) + 0x7f & 0xffffff80)
                              + 0x80,param_3,param_4);
      }
    }
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_d8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_d8);
}

