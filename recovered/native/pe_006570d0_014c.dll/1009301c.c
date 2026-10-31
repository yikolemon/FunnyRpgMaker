/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009301c */

void __fastcall FUN_1009301c(int *param_1)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  if (psVar2 != (short *)param_1[1]) {
    if (*psVar2 == 0x5c) {
      uVar1 = FUN_10092c6e(psVar2);
      psVar2 = (short *)((uVar1 & 0xff) * 2 + *param_1);
    }
    *param_1 = (int)(psVar2 + 1);
  }
  FUN_10092b00();
  return;
}

