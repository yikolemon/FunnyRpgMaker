/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102106b2 */

void FUN_102106b2(void)

{
  undefined1 auStack_10 [4];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_10;
  FUN_10210018();
  FUN_102104e8(auStack_10);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

