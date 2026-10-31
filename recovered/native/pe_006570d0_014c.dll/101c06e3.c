/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c06e3 */

void FUN_101c06e3(undefined4 param_1)

{
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_8;
  local_8 = param_1;
  FUN_101c0725(param_1);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

