/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bec6f */

void FUN_100bec6f(undefined4 param_1)

{
  undefined1 auStack_18 [8];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100bed6d(auStack_18,param_1);
  FUN_100becde(auStack_18);
  if (DAT_10388d00 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

