/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102759ad */

void FUN_102759ad(void)

{
  short *psVar1;
  short *psVar2;
  short local_208 [256];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  DAT_1039b66c = 0xffffffff;
  DAT_1039b660 = 0xffffffff;
  DAT_103a5170 = 0;
  psVar1 = (short *)FUN_102754c0(local_208);
  psVar2 = psVar1;
  if (psVar1 == local_208) {
    psVar2 = (short *)0x0;
  }
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    FUN_10275579();
  }
  else {
    FUN_1027571a(psVar1);
  }
  FUN_10274120(psVar2);
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

