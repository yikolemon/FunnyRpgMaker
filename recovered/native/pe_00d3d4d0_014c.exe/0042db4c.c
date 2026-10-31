/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042db4c */

float10 FUN_0042db4c(int param_1)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = FUN_00424fc5(param_1);
  dVar2 = DAT_004dc9b8;
  if (!bVar1) {
    dVar2 = DAT_004d8070;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar2 = DAT_004d7da0;
  }
  return (float10)dVar2;
}

