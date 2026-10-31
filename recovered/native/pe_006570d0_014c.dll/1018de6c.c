/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018de6c */

void __thiscall FUN_1018de6c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = *param_1;
  if (iVar9 == param_3) {
    return;
  }
  iVar1 = param_1[4];
  *(int *)(iVar1 + 8 + iVar9 * 0x18) = param_2[2];
  *(undefined8 *)(iVar1 + iVar9 * 0x18) = *(undefined8 *)param_2;
  iVar9 = *param_1;
  iVar1 = param_1[4];
  *(int *)(iVar1 + 0x14 + iVar9 * 0x18) = param_2[5];
  *(undefined8 *)(iVar1 + 0xc + iVar9 * 0x18) = *(undefined8 *)(param_2 + 3);
  *param_1 = param_3;
  iVar9 = param_1[4];
  param_3 = param_3 * 0x18;
  param_2[2] = *(int *)(iVar9 + 8 + param_3);
  *(undefined8 *)param_2 = *(undefined8 *)(iVar9 + param_3);
  iVar9 = param_1[4];
  *(undefined8 *)(param_2 + 3) = *(undefined8 *)(iVar9 + 0xc + param_3);
  iVar9 = *(int *)(iVar9 + 0x14 + param_3);
  param_2[5] = iVar9;
  param_2[0xd] = iVar9 + param_2[3] * 2;
  if (*param_2 != 0) {
    iVar9 = *param_2 * 0x40 + param_2[2];
    piVar8 = (int *)(iVar9 + -0x40);
    if (piVar8 != (int *)0x0) {
      if (*(int *)(iVar9 + -0x18) == 0) {
        *(int *)(iVar9 + -0x20) = param_2[0x1a];
        iVar1 = param_2[0x12];
        iVar2 = param_2[0x13];
        iVar3 = param_2[0x14];
        iVar4 = param_2[0x15];
        iVar5 = param_2[0x17];
        iVar6 = param_2[0x18];
        iVar7 = param_2[0x19];
        *(int *)(iVar9 + -0x30) = param_2[0x16];
        *(int *)(iVar9 + -0x2c) = iVar5;
        *(int *)(iVar9 + -0x28) = iVar6;
        *(int *)(iVar9 + -0x24) = iVar7;
        *piVar8 = iVar1;
        *(int *)(iVar9 + -0x3c) = iVar2;
        *(int *)(iVar9 + -0x38) = iVar3;
        *(int *)(iVar9 + -0x34) = iVar4;
        return;
      }
      iVar9 = FUN_102595e0(piVar8,param_2 + 0x12,0x24);
      if (iVar9 == 0) {
        return;
      }
    }
  }
  FUN_10187d74();
  return;
}

