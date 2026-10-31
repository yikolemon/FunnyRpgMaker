/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c2a2 */

undefined4 FUN_1005c2a2(undefined4 param_1)

{
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = &stack0x00000008;
  local_14 = &stack0x0000000c;
  local_10 = &stack0x00000010;
  local_c = &stack0x00000014;
  FUN_1005c2fb();
  if (DAT_10388d00 == (local_8 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

