/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019307c */

void FUN_1019307c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_10;
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  FUN_100fa691(&local_10,0xc,0);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

