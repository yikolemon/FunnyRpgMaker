/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115d65 */

void FUN_10115d65(undefined4 param_1)

{
  char cVar1;
  undefined1 *local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_8;
  local_8 = &stack0x00000008;
  cVar1 = FUN_10102a1a(0x1000);
  if (cVar1 != '\0') {
    FUN_10115d3e(param_1,local_8);
  }
  if (DAT_10388d00 == (local_4 ^ (uint)&local_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

