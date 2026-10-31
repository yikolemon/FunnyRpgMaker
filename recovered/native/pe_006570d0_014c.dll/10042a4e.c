/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042a4e */

void __thiscall FUN_10042a4e(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  piVar7 = (int *)*param_1;
  if ((uint)((param_1[2] - (int)piVar7 >> 3) * -0x3e7063e7) < param_3) {
    FUN_10042b44(param_3);
    piVar11 = (int *)*param_1;
    uVar9 = param_3;
  }
  else {
    piVar11 = (int *)param_1[1];
    iVar8 = (int)piVar11 - (int)piVar7 >> 3;
    uVar9 = param_3 + iVar8 * 0x3e7063e7;
    if (param_3 < (uint)(iVar8 * -0x3e7063e7) || uVar9 == 0) {
      FUN_10042cca(param_2,param_3,piVar7);
      piVar11 = (int *)param_1[1];
      piVar7 = piVar7 + param_3 * 0x52;
      for (piVar10 = piVar7; piVar10 != piVar11; piVar10 = piVar10 + 0x52) {
        FUN_10042583(piVar10);
      }
      goto LAB_10042b03;
    }
    if (piVar7 != piVar11) {
      do {
        *(undefined8 *)(piVar7 + 0xc) = *(undefined8 *)(param_2 + 0xc);
        iVar8 = param_2[9];
        iVar1 = param_2[10];
        iVar2 = param_2[0xb];
        piVar7[8] = param_2[8];
        piVar7[9] = iVar8;
        piVar7[10] = iVar1;
        piVar7[0xb] = iVar2;
        iVar8 = *param_2;
        iVar1 = param_2[1];
        iVar2 = param_2[2];
        iVar3 = param_2[3];
        iVar4 = param_2[5];
        iVar5 = param_2[6];
        iVar6 = param_2[7];
        piVar7[4] = param_2[4];
        piVar7[5] = iVar4;
        piVar7[6] = iVar5;
        piVar7[7] = iVar6;
        *piVar7 = iVar8;
        piVar7[1] = iVar1;
        piVar7[2] = iVar2;
        piVar7[3] = iVar3;
        piVar7[0xf] = 0;
        FUN_1001909c(param_2[0xe],param_2[0xf] + param_2[0xe]);
        *piVar7 = piVar7[0xe];
        piVar7[0xc] = piVar7[0xe] + piVar7[1];
        param_2 = param_2 + 0x52;
        piVar11 = (int *)param_1[1];
        piVar7 = piVar7 + 0x52;
      } while (piVar7 != piVar11);
    }
  }
  piVar7 = (int *)FUN_10042c02(param_2,uVar9,piVar11,param_1);
LAB_10042b03:
  param_1[1] = (int)piVar7;
  return;
}

