/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d729e */

void FUN_100d729e(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (int)param_3 - (int)param_1 >> 3;
  if (iVar2 < 0x29) {
    uVar5 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_1[1];
    uVar1 = (uint)(uVar5 < *param_1);
    if ((SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,uVar1)) !=
        (int)((uVar3 - uVar4) - uVar1) < 0) {
      *param_2 = *param_1;
      param_2[1] = uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar3;
      uVar5 = *param_2;
      uVar3 = param_2[1];
    }
    uVar4 = *param_3;
    uVar1 = param_3[1];
    if ((SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,(uint)(uVar4 < uVar5))) !=
        (int)((uVar1 - uVar3) - (uint)(uVar4 < uVar5)) < 0) {
      param_3[1] = uVar3;
      *param_3 = uVar5;
      param_2[1] = uVar1;
      *param_2 = uVar4;
      uVar5 = param_1[1];
      uVar3 = (uint)(uVar4 < *param_1);
      if ((SBORROW4(uVar1,uVar5) != SBORROW4(uVar1 - uVar5,uVar3)) !=
          (int)((uVar1 - uVar5) - uVar3) < 0) {
        *param_2 = *param_1;
        param_2[1] = uVar5;
        *param_1 = uVar4;
        param_1[1] = uVar1;
      }
    }
  }
  else {
    uVar3 = iVar2 + 1;
    uVar6 = uVar3 >> 3;
    uVar3 = uVar3 & 0xfffffff8;
    uVar5 = *(uint *)((int)param_1 + uVar3);
    uVar3 = *(uint *)((int)param_1 + uVar3 + 4);
    uVar4 = param_1[1];
    uVar1 = (uint)(uVar5 < *param_1);
    if ((SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,uVar1)) !=
        (int)((uVar3 - uVar4) - uVar1) < 0) {
      param_1[uVar6 * 2] = *param_1;
      param_1[uVar6 * 2 + 1] = uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar3;
      uVar5 = param_1[uVar6 * 2];
      uVar3 = param_1[uVar6 * 2 + 1];
    }
    uVar4 = param_1[uVar6 * 4];
    uVar1 = param_1[uVar6 * 4 + 1];
    if ((SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,(uint)(uVar4 < uVar5))) !=
        (int)((uVar1 - uVar3) - (uint)(uVar4 < uVar5)) < 0) {
      param_1[uVar6 * 4 + 1] = uVar3;
      param_1[uVar6 * 4] = uVar5;
      param_1[uVar6 * 2 + 1] = uVar1;
      param_1[uVar6 * 2] = uVar4;
      uVar5 = param_1[1];
      uVar3 = (uint)(uVar4 < *param_1);
      if ((SBORROW4(uVar1,uVar5) != SBORROW4(uVar1 - uVar5,uVar3)) !=
          (int)((uVar1 - uVar5) - uVar3) < 0) {
        param_1[uVar6 * 2] = *param_1;
        param_1[uVar6 * 2 + 1] = uVar5;
        *param_1 = uVar4;
        param_1[1] = uVar1;
      }
    }
    uVar5 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[uVar6 * -2 + 1];
    uVar1 = (uint)(uVar5 < param_2[uVar6 * -2]);
    if ((SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,uVar1)) !=
        (int)((uVar3 - uVar4) - uVar1) < 0) {
      *param_2 = param_2[uVar6 * -2];
      param_2[1] = uVar4;
      param_2[uVar6 * -2] = uVar5;
      param_2[uVar6 * -2 + 1] = uVar3;
      uVar5 = *param_2;
      uVar3 = param_2[1];
    }
    uVar4 = param_2[uVar6 * 2];
    uVar1 = param_2[uVar6 * 2 + 1];
    if ((SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,(uint)(uVar4 < uVar5))) !=
        (int)((uVar1 - uVar3) - (uint)(uVar4 < uVar5)) < 0) {
      param_2[uVar6 * 2 + 1] = uVar3;
      param_2[uVar6 * 2] = uVar5;
      param_2[1] = uVar1;
      *param_2 = uVar4;
      uVar5 = param_2[uVar6 * -2 + 1];
      uVar3 = (uint)(uVar4 < param_2[uVar6 * -2]);
      if ((SBORROW4(uVar1,uVar5) != SBORROW4(uVar1 - uVar5,uVar3)) !=
          (int)((uVar1 - uVar5) - uVar3) < 0) {
        *param_2 = param_2[uVar6 * -2];
        param_2[1] = uVar5;
        param_2[uVar6 * -2] = uVar4;
        param_2[uVar6 * -2 + 1] = uVar1;
      }
    }
    uVar3 = param_3[uVar6 * -2];
    uVar4 = param_3[uVar6 * -2 + 1];
    uVar5 = param_3[uVar6 * -4 + 1];
    uVar1 = (uint)(uVar3 < param_3[uVar6 * -4]);
    if ((SBORROW4(uVar4,uVar5) != SBORROW4(uVar4 - uVar5,uVar1)) !=
        (int)((uVar4 - uVar5) - uVar1) < 0) {
      param_3[uVar6 * -2] = param_3[uVar6 * -4];
      param_3[uVar6 * -2 + 1] = uVar5;
      param_3[uVar6 * -4] = uVar3;
      param_3[uVar6 * -4 + 1] = uVar4;
      uVar3 = param_3[uVar6 * -2];
      uVar4 = param_3[uVar6 * -2 + 1];
    }
    uVar5 = *param_3;
    uVar1 = param_3[1];
    if ((SBORROW4(uVar1,uVar4) != SBORROW4(uVar1 - uVar4,(uint)(uVar5 < uVar3))) !=
        (int)((uVar1 - uVar4) - (uint)(uVar5 < uVar3)) < 0) {
      param_3[1] = uVar4;
      *param_3 = uVar3;
      param_3[uVar6 * -2 + 1] = uVar1;
      param_3[uVar6 * -2] = uVar5;
      uVar3 = param_3[uVar6 * -4 + 1];
      uVar4 = (uint)(uVar5 < param_3[uVar6 * -4]);
      if ((SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,uVar4)) !=
          (int)((uVar1 - uVar3) - uVar4) < 0) {
        param_3[uVar6 * -2] = param_3[uVar6 * -4];
        param_3[uVar6 * -2 + 1] = uVar3;
        param_3[uVar6 * -4] = uVar5;
        param_3[uVar6 * -4 + 1] = uVar1;
      }
    }
    uVar5 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_1[uVar6 * 2 + 1];
    uVar1 = (uint)(uVar5 < param_1[uVar6 * 2]);
    if ((SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,uVar1)) !=
        (int)((uVar3 - uVar4) - uVar1) < 0) {
      *param_2 = param_1[uVar6 * 2];
      param_2[1] = uVar4;
      param_1[uVar6 * 2] = uVar5;
      param_1[uVar6 * 2 + 1] = uVar3;
      uVar5 = *param_2;
      uVar3 = param_2[1];
    }
    uVar4 = param_3[uVar6 * -2];
    uVar1 = param_3[uVar6 * -2 + 1];
    if ((SBORROW4(uVar1,uVar3) != SBORROW4(uVar1 - uVar3,(uint)(uVar4 < uVar5))) !=
        (int)((uVar1 - uVar3) - (uint)(uVar4 < uVar5)) < 0) {
      param_3[uVar6 * -2 + 1] = uVar3;
      param_3[uVar6 * -2] = uVar5;
      param_2[1] = uVar1;
      *param_2 = uVar4;
      uVar5 = param_1[uVar6 * 2 + 1];
      uVar3 = (uint)(uVar4 < param_1[uVar6 * 2]);
      if ((SBORROW4(uVar1,uVar5) != SBORROW4(uVar1 - uVar5,uVar3)) !=
          (int)((uVar1 - uVar5) - uVar3) < 0) {
        *param_2 = param_1[uVar6 * 2];
        param_2[1] = uVar5;
        param_1[uVar6 * 2] = uVar4;
        param_1[uVar6 * 2 + 1] = uVar1;
      }
    }
  }
  return;
}

