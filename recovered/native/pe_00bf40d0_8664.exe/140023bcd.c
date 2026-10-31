/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023bcd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140023bcd(double *param_1,double param_2,uint param_3)

{
  double dVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)DAT_1400e7248 >> 0x20);
  uVar5 = 0;
  uVar7 = 0;
  if (1 < (int)param_3 % 4) {
    uVar5 = (int)DAT_1400e7248;
    uVar7 = uVar6;
  }
  uVar3 = 0;
  uVar4 = 0;
  if ((param_3 & 1) != 0) {
    uVar3 = (int)DAT_1400e7248;
    uVar4 = uVar6;
  }
  if ((int)param_3 < 4) {
    dVar1 = (DAT_1400e72d0 * (double)CONCAT44(uVar4,uVar3) +
            param_2 + DAT_1400e72c0 * (double)CONCAT44(uVar7,uVar5)) / DAT_1400e72e0;
    uVar2 = FUN_140023bb0(dVar1);
    if ((char)uVar2 != '\0') {
      *param_1 = dVar1;
      param_1[1] = (double)CONCAT44(uVar7,uVar5);
      param_1[2] = (double)CONCAT44(uVar4,uVar3);
      return param_1;
    }
  }
  else if (param_3 < 8) {
    dVar1 = (DAT_1400e72d0 * (double)CONCAT44(uVar7,uVar5) +
            param_2 + DAT_1400e72b8 * (double)CONCAT44(uVar4,uVar3)) / DAT_1400e72d8;
    uVar2 = FUN_140023bb0(dVar1);
    if ((char)uVar2 != '\0') {
      *param_1 = (double)CONCAT44(uVar4,uVar3);
      param_1[1] = dVar1;
      param_1[2] = (double)CONCAT44(uVar7,uVar5);
      return param_1;
    }
  }
  else {
    dVar1 = (DAT_1400e72c0 * (double)CONCAT44(uVar4,uVar3) +
            param_2 + DAT_1400e72b8 * (double)CONCAT44(uVar7,uVar5)) / DAT_1400e72c8;
    uVar2 = FUN_140023bb0(dVar1);
    if ((char)uVar2 != '\0') {
      *param_1 = (double)CONCAT44(uVar7,uVar5);
      param_1[1] = (double)CONCAT44(uVar4,uVar3);
      param_1[2] = dVar1;
      return param_1;
    }
  }
  dVar1 = _UNK_1400dca98;
  *param_1 = _DAT_1400dca90;
  param_1[1] = dVar1;
  param_1[2] = -1.0;
  return param_1;
}

