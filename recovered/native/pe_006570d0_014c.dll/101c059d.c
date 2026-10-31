/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c059d */

void FUN_101c059d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  local_10 = param_1;
  FUN_101c05ee(param_1,param_4,1);
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

