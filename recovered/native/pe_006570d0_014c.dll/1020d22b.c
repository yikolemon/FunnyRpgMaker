/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020d22b */

void __thiscall
FUN_1020d22b(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,char param_6
            )

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pcVar5 = (char *)FUN_1020ba37();
  iVar8 = *(int *)(pcVar5 + 4);
  iVar1 = *(int *)(pcVar5 + 8);
  iVar9 = iVar1 - iVar8;
  if (iVar9 == -0x140000) {
    if (param_6 != '\0') {
LAB_1020d295:
      bVar3 = true;
      uVar6 = 0;
      goto LAB_1020d2cf;
    }
    param_1[2] = iVar8;
    uVar6 = 2;
  }
  else if (iVar9 == -0x150000) {
    if (param_6 == '\0') goto LAB_1020d295;
    param_1[2] = iVar1;
    uVar6 = 1;
  }
  else {
    if (iVar9 < 0) {
      if (param_6 == '\0') {
        param_1[2] = iVar8;
        goto LAB_1020d2c8;
      }
      param_1[2] = iVar1;
    }
    else {
      if (param_6 == '\0') {
        param_1[2] = iVar1;
LAB_1020d2c8:
        uVar6 = 8;
        goto LAB_1020d2cd;
      }
      param_1[2] = iVar8;
    }
    uVar6 = 4;
  }
LAB_1020d2cd:
  bVar3 = false;
LAB_1020d2cf:
  *param_1 = uVar6;
  cVar4 = FUN_1020d6e7();
  iVar8 = param_1[2];
  if (cVar4 != '\0') {
    iVar8 = iVar8 + *(int *)(param_3 + 0xe8) * 2;
  }
  param_1[2] = iVar8 + param_4;
  param_1[4] = param_5;
  param_1[1] = param_2;
  if ((!bVar3) && (*pcVar5 != '\0')) {
    uVar7 = FUN_1020d6e7();
    param_1[3] = *(undefined4 *)(pcVar5 + (uVar7 & 0xff) * 4 + 0xc);
    FUN_1020d702();
    return;
  }
  lVar2 = (longlong)(iVar8 + param_4) * (longlong)param_5;
  iVar8 = (int)(lVar2 >> 0x3f);
  lVar2 = lVar2 + CONCAT44(iVar8,iVar8) + 0x8000;
  param_1[3] = (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
  return;
}

