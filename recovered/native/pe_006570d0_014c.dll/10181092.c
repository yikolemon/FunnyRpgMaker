/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10181092 */

void FUN_10181092(void)

{
  undefined1 auStack_8c [49];
  undefined2 local_5b;
  undefined4 local_40;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_8c;
  FUN_1018e2b2();
  local_5b = 0x101;
  local_40 = 0x41980000;
  FUN_1010330d();
  FUN_1018f944(&DAT_102bb7dc,0x3bb12,0x41980000,auStack_8c,0);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_8c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

