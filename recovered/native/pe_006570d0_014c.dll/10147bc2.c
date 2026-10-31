/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10147bc2 */

void FUN_10147bc2(undefined4 param_1,undefined4 param_2)

{
  undefined1 *local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_8;
  local_8 = &stack0x0000000c;
  FUN_10147c0c(param_1,0,param_2,local_8);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

