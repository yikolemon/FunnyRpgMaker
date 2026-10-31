/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10287190(uint param_1,uint param_2,int param_3,int param_4,double *param_5)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)CONCAT44(param_2 & _UNK_1028b424,param_1 & _DAT_1028b420);
  if (param_3 == 0) {
    dVar5 = DAT_1028b438;
    if (param_4 == 0x7ff00000) {
      if (dVar4 <= DAT_1028b438) {
        if (dVar4 < DAT_1028b438) {
          *param_5 = 0.0;
          return 0;
        }
        goto LAB_10287364;
      }
      goto LAB_102871c7;
    }
    if (param_4 == -0x100000) {
      if (DAT_1028b438 < dVar4) {
        *param_5 = 0.0;
        return 0;
      }
      if (dVar4 < DAT_1028b438) {
        *param_5 = DAT_10324f70;
        return 0;
      }
      goto LAB_10287364;
    }
  }
  if (param_1 != 0) {
    return 0;
  }
  if (param_2 == 0x7ff00000) {
    if (0.0 < (double)CONCAT44(param_4,param_3)) {
LAB_102871c7:
      *param_5 = DAT_10324f70;
      return 0;
    }
    dVar4 = 0.0;
    if (0.0 <= (double)CONCAT44(param_4,param_3)) {
      *param_5 = DAT_1028b438;
      return 0;
    }
    goto LAB_10287379;
  }
  if (param_2 != 0xfff00000) {
    return 0;
  }
  uVar1 = FUN_102815a0(CONCAT44(param_4,param_3));
  if ((uVar1 & 0x90) == 0) {
    fVar3 = (float10)FUN_10286ed0(CONCAT44(param_4,param_3));
    if ((double)fVar3 != (double)CONCAT44(param_4,param_3)) goto LAB_1028731d;
    dVar4 = (double)CONCAT44(param_4,param_3) * DAT_102b96d8;
    fVar3 = (float10)FUN_10286ed0(dVar4);
    if ((double)fVar3 == dVar4) {
      iVar2 = 2;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
LAB_1028731d:
    iVar2 = 0;
  }
  dVar5 = 0.0;
  if ((double)CONCAT44(param_4,param_3) <= 0.0) {
    dVar4 = DAT_1028b438;
    if ((double)CONCAT44(param_4,param_3) < 0.0) {
      if (iVar2 == 1) {
        dVar5 = DAT_10324f80;
      }
LAB_10287364:
      *param_5 = dVar5;
      return 0;
    }
  }
  else {
    dVar4 = DAT_10324f70;
    if (iVar2 == 1) {
      *param_5 = (double)CONCAT44((uint)((ulonglong)DAT_10324f70 >> 0x20) ^ _UNK_1028f734,
                                  SUB84(DAT_10324f70,0) ^ _DAT_1028f730);
      return 0;
    }
  }
LAB_10287379:
  *param_5 = dVar4;
  return 0;
}

