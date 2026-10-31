/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011876d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14011876d(double *param_1,double param_2,uint param_3)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)DAT_140e8e0e8 >> 0x20);
  uVar5 = 0;
  uVar7 = 0;
  if (1 < (int)param_3 % 4) {
    uVar5 = (int)DAT_140e8e0e8;
    uVar7 = uVar6;
  }
  uVar3 = 0;
  uVar4 = 0;
  if ((param_3 & 1) != 0) {
    uVar3 = (int)DAT_140e8e0e8;
    uVar4 = uVar6;
  }
  if ((int)param_3 < 4) {
    dVar1 = (DAT_140e8e170 * (double)CONCAT44(uVar4,uVar3) +
            param_2 + DAT_140e8e160 * (double)CONCAT44(uVar7,uVar5)) / DAT_140e8e180;
    cVar2 = FUN_140118750(dVar1);
    if (cVar2 != '\0') {
      *param_1 = dVar1;
      param_1[1] = (double)CONCAT44(uVar7,uVar5);
      param_1[2] = (double)CONCAT44(uVar4,uVar3);
      return param_1;
    }
  }
  else if (param_3 < 8) {
    dVar1 = (DAT_140e8e170 * (double)CONCAT44(uVar7,uVar5) +
            param_2 + DAT_140e8e158 * (double)CONCAT44(uVar4,uVar3)) / DAT_140e8e178;
    cVar2 = FUN_140118750(dVar1);
    if (cVar2 != '\0') {
      *param_1 = (double)CONCAT44(uVar4,uVar3);
      param_1[1] = dVar1;
      param_1[2] = (double)CONCAT44(uVar7,uVar5);
      return param_1;
    }
  }
  else {
    dVar1 = (DAT_140e8e160 * (double)CONCAT44(uVar4,uVar3) +
            param_2 + DAT_140e8e158 * (double)CONCAT44(uVar7,uVar5)) / DAT_140e8e168;
    cVar2 = FUN_140118750(dVar1);
    if (cVar2 != '\0') {
      *param_1 = (double)CONCAT44(uVar7,uVar5);
      param_1[1] = (double)CONCAT44(uVar4,uVar3);
      param_1[2] = dVar1;
      return param_1;
    }
  }
  dVar1 = _UNK_1402113e8;
  *param_1 = _DAT_1402113e0;
  param_1[1] = dVar1;
  param_1[2] = -1.0;
  return param_1;
}

