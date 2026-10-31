/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207708 */

void __fastcall FUN_10207708(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  for (local_18 = (byte *)*param_1; local_18 < param_2; local_18 = local_18 + 1) {
    uVar1 = *local_18 - 9;
    if (uVar1 < 0x1d) {
      if ((0x80001bU >> (uVar1 & 0x1f) & 1) == 0) {
        if (uVar1 != 0x1c) goto LAB_1020775b;
        FUN_10207960();
      }
    }
    else {
LAB_1020775b:
      if (*local_18 != 0) break;
    }
  }
  *param_1 = local_18;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

