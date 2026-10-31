/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c518 */

void FUN_1005c518(void)

{
  undefined1 *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_c;
  local_c = &stack0x00000004;
  local_8 = &stack0x00000008;
  FUN_1005c559();
  if (DAT_10388d00 == (local_4 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

