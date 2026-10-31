/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027fce */

void FUN_10027fce(int param_1)

{
  int iVar1;
  undefined1 auStack_14 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_14;
  iVar1 = FUN_1026faa0(param_1 << 2);
  if (iVar1 == 0) {
    FUN_100191a8();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(auStack_14,&DAT_10360768);
  }
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

