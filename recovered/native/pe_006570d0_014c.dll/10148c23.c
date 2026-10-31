/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10148c23 */

void FUN_10148c23(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_c;
  local_c = &stack0x00000010;
  FUN_10147ce7(param_1,param_2,param_3,local_c);
  if (DAT_10388d00 == (local_8 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

