/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042dbbe */

float10 FUN_0042dbbe(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if (bVar1 == 0) {
    uVar5 = (undefined4)DAT_004dc9b0;
    uVar6 = (undefined4)((ulonglong)DAT_004dc9b0 >> 0x20);
  }
  else {
    uVar5 = (undefined4)DAT_004dca68;
    uVar6 = (undefined4)((ulonglong)DAT_004dca68 >> 0x20);
  }
  bVar2 = FUN_00424fc5(param_1);
  if (bVar2) {
    if (bVar1 == 0) {
      uVar5 = (undefined4)DAT_004dca38;
      uVar6 = (undefined4)((ulonglong)DAT_004dca38 >> 0x20);
    }
    else {
      uVar5 = (undefined4)DAT_004dca68;
      uVar6 = (undefined4)((ulonglong)DAT_004dca68 >> 0x20);
    }
  }
  else {
    uVar3 = FUN_00424fb4(param_1);
    if ((char)uVar3 != '\0') {
      fVar4 = FUN_00424fd1(*(undefined8 *)(param_1 + 0x60),*(double *)(param_1 + 0x68),
                           (double)CONCAT44(uVar6,uVar5),bVar1 ^ 1);
      return fVar4;
    }
  }
  return (float10)(double)CONCAT44(uVar6,uVar5);
}

