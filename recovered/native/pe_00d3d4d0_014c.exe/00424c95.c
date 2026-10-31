/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424c95 */

void FUN_00424c95(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = FUN_00424c1d(0xff);
  fVar2 = FUN_00424c1d(extraout_ECX);
  fVar3 = FUN_00424c1d(extraout_ECX_00);
  FUN_00424d37(extraout_ECX_01,
               (double)fVar3 * DAT_004d7e10 +
               (double)fVar1 * DAT_004d7e28 + (double)fVar2 * DAT_004d7e20);
  return;
}

