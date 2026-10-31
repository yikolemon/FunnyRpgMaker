/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c754a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_101c754a(double *param_1,double param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = 0.0;
  if (1 < (int)param_3 % 4) {
    dVar7 = DAT_103037f0;
  }
  dVar6 = 0.0;
  if ((param_3 & 1) != 0) {
    dVar6 = DAT_103037f0;
  }
  if ((int)param_3 < 4) {
    dVar5 = (DAT_10303868 * dVar6 + param_2 + DAT_10303858 * dVar7) / DAT_10303878;
    cVar4 = FUN_101c7527(dVar5);
    if (cVar4 == '\0') goto LAB_101c76b1;
    *param_1 = dVar5;
    param_1[1] = dVar7;
    dVar5 = dVar6;
  }
  else if (param_3 < 8) {
    dVar5 = (DAT_10303868 * dVar7 + param_2 + DAT_10303850 * dVar6) / DAT_10303870;
    cVar4 = FUN_101c7527(dVar5);
    if (cVar4 == '\0') {
LAB_101c76b1:
      uVar3 = _UNK_102b8b0c;
      uVar2 = _UNK_102b8b08;
      uVar1 = _UNK_102b8b04;
      *(undefined4 *)param_1 = _DAT_102b8b00;
      *(undefined4 *)((int)param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((int)param_1 + 0xc) = uVar3;
      *(undefined4 *)((int)param_1 + 0x14) = 0xbff00000;
      *(undefined4 *)(param_1 + 2) = 0;
      return param_1;
    }
    *param_1 = dVar6;
    param_1[1] = dVar5;
    dVar5 = dVar7;
  }
  else {
    dVar5 = (DAT_10303858 * dVar6 + param_2 + DAT_10303850 * dVar7) / DAT_10303860;
    cVar4 = FUN_101c7527(dVar5);
    if (cVar4 == '\0') goto LAB_101c76b1;
    *param_1 = dVar7;
    param_1[1] = dVar6;
  }
  param_1[2] = dVar5;
  return param_1;
}

