/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223998 */

bool FUN_10223998(void)

{
  bool bVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  fVar3 = (float10)FUN_1019756c();
  fVar3 = (float10)FUN_1026ff80((double)fVar3);
  fVar4 = (float10)FUN_10197570();
  fVar4 = (float10)FUN_1026ff80((double)fVar4);
  fVar5 = (float10)FUN_10197574();
  bVar1 = false;
  if (((DAT_10308420 <= (double)fVar3) && ((double)fVar3 <= DAT_10322738)) &&
     (DAT_10303b20 < (double)fVar4)) {
    FUN_1026ff80((double)fVar5);
    bVar1 = (double)extraout_ST0 < DAT_10322740;
  }
  if (DAT_10388d00 == (uVar2 ^ (uint)&stack0xfffffffc)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

