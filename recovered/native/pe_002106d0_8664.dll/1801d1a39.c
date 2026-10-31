/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1a39 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1801d1a39(double *param_1,double param_2,uint param_3)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)DAT_18032a0f8 >> 0x20);
  uVar5 = 0;
  uVar7 = 0;
  if (1 < (int)param_3 % 4) {
    uVar5 = (int)DAT_18032a0f8;
    uVar7 = uVar6;
  }
  uVar3 = 0;
  uVar4 = 0;
  if ((param_3 & 1) != 0) {
    uVar3 = (int)DAT_18032a0f8;
    uVar4 = uVar6;
  }
  if ((int)param_3 < 4) {
    dVar1 = (DAT_18032a180 * (double)CONCAT44(uVar4,uVar3) +
            param_2 + DAT_18032a170 * (double)CONCAT44(uVar7,uVar5)) / DAT_18032a190;
    cVar2 = FUN_1801d1a1c(dVar1);
    if (cVar2 != '\0') {
      *param_1 = dVar1;
      param_1[1] = (double)CONCAT44(uVar7,uVar5);
      param_1[2] = (double)CONCAT44(uVar4,uVar3);
      return param_1;
    }
  }
  else if (param_3 < 8) {
    dVar1 = (DAT_18032a180 * (double)CONCAT44(uVar7,uVar5) +
            param_2 + DAT_18032a168 * (double)CONCAT44(uVar4,uVar3)) / DAT_18032a188;
    cVar2 = FUN_1801d1a1c(dVar1);
    if (cVar2 != '\0') {
      *param_1 = (double)CONCAT44(uVar4,uVar3);
      param_1[1] = dVar1;
      param_1[2] = (double)CONCAT44(uVar7,uVar5);
      return param_1;
    }
  }
  else {
    dVar1 = (DAT_18032a170 * (double)CONCAT44(uVar4,uVar3) +
            param_2 + DAT_18032a168 * (double)CONCAT44(uVar7,uVar5)) / DAT_18032a178;
    cVar2 = FUN_1801d1a1c(dVar1);
    if (cVar2 != '\0') {
      *param_1 = (double)CONCAT44(uVar7,uVar5);
      param_1[1] = (double)CONCAT44(uVar4,uVar3);
      param_1[2] = dVar1;
      return param_1;
    }
  }
  dVar1 = _UNK_1802de688;
  *param_1 = _DAT_1802de680;
  param_1[1] = dVar1;
  param_1[2] = -1.0;
  return param_1;
}

