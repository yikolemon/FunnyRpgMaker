/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045ee80 */

void __fastcall FUN_0045ee80(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  for (local_18 = (byte *)*param_1; local_18 < param_2; local_18 = local_18 + 1) {
    uVar1 = *local_18 - 9;
    if (uVar1 < 0x1d) {
      if ((0x80001bU >> (uVar1 & 0x1f) & 1) == 0) {
        if (uVar1 != 0x1c) goto LAB_0045eed3;
        FUN_0045f0d8(&local_18,(char *)param_2);
      }
    }
    else {
LAB_0045eed3:
      if (*local_18 != 0) break;
    }
  }
  *param_1 = local_18;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

