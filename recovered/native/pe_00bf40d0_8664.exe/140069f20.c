/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140069f20 */

void FUN_140069f20(byte *param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5,
                  int param_6,char param_7)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pcVar5 = (char *)FUN_1400684c4(param_2,param_3);
  iVar6 = *(int *)(pcVar5 + 4);
  iVar1 = *(int *)(pcVar5 + 8);
  iVar8 = iVar1 - iVar6;
  if (iVar8 == -0x140000) {
    if (param_7 != '\0') {
LAB_140069f94:
      bVar3 = true;
      uVar4 = 0;
      goto LAB_140069fd2;
    }
    *(int *)(param_1 + 0x10) = iVar6;
    uVar4 = 2;
  }
  else if (iVar8 == -0x150000) {
    if (param_7 == '\0') goto LAB_140069f94;
    *(int *)(param_1 + 0x10) = iVar1;
    uVar4 = 1;
  }
  else {
    if (iVar8 < 0) {
      if (param_7 == '\0') {
        *(int *)(param_1 + 0x10) = iVar6;
        goto LAB_140069fca;
      }
      *(int *)(param_1 + 0x10) = iVar1;
    }
    else {
      if (param_7 == '\0') {
        *(int *)(param_1 + 0x10) = iVar1;
LAB_140069fca:
        uVar4 = 8;
        goto LAB_140069fcf;
      }
      *(int *)(param_1 + 0x10) = iVar6;
    }
    uVar4 = 4;
  }
LAB_140069fcf:
  bVar3 = false;
LAB_140069fd2:
  *(undefined4 *)param_1 = uVar4;
  bVar2 = FUN_14006a41c(param_1);
  iVar6 = *(int *)(param_1 + 0x10);
  if (bVar2) {
    iVar6 = iVar6 + *(int *)(param_4 + 0x130) * 2;
  }
  *(int *)(param_1 + 0x10) = iVar6 + param_5;
  *(int *)(param_1 + 0x18) = param_6;
  *(ulonglong *)(param_1 + 8) = param_3;
  if ((!bVar3) && (*pcVar5 != '\0')) {
    bVar3 = FUN_14006a41c(param_1);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pcVar5 + (ulonglong)bVar3 * 4 + 0xc);
    FUN_14006a437(param_1);
    return;
  }
  lVar7 = (longlong)param_6 * (longlong)(iVar6 + param_5);
  *(int *)(param_1 + 0x14) = (int)((ulonglong)((lVar7 >> 0x3f) + lVar7 + 0x8000) >> 0x10);
  return;
}

