/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012d147 */

void FUN_1012d147(undefined4 param_1,undefined4 param_2)

{
  undefined1 *local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_8;
  local_8 = &stack0x0000000c;
  FUN_1012d18f(param_1,param_2,local_8);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

