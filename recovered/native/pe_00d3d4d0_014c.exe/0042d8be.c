/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042d8be */

float10 FUN_0042d8be(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  float10 fVar3;
  double dVar4;
  
  uVar2 = FUN_00424fb4(param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00424fc5(param_1);
    if (bVar1) {
      dVar4 = DAT_004dca38;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar4 = DAT_004dca48;
      }
    }
    else {
      dVar4 = DAT_004dca68;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar4 = DAT_004dc9b0;
      }
    }
    fVar3 = (float10)dVar4;
  }
  else {
    fVar3 = FUN_0041ba30(param_1);
  }
  return fVar3;
}

