/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c375 */

void FUN_1005c375(void)

{
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_10;
  local_10 = &stack0x00000004;
  local_c = &stack0x00000008;
  FUN_1005c3b8();
  if (DAT_10388d00 == (local_8 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

