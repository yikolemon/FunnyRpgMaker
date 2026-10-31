/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042d7bc */

float10 FUN_0042d7bc(int param_1)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = FUN_00424fc5(param_1);
  if (bVar1) {
    dVar2 = DAT_004d7da0;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar2 = 0.0;
    }
  }
  else {
    dVar2 = DAT_004dca58;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar2 = DAT_004d8080;
    }
  }
  return (float10)dVar2;
}

