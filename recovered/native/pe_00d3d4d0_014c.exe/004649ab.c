/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004649ab */

void __fastcall
FUN_004649ab(byte *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,char param_7
            )

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pcVar5 = (char *)FUN_004631af(param_2,param_3);
  iVar7 = *(int *)(pcVar5 + 4);
  iVar1 = *(int *)(pcVar5 + 8);
  iVar8 = iVar1 - iVar7;
  if (iVar8 == -0x140000) {
    if (param_7 != '\0') {
LAB_00464a15:
      bVar4 = true;
      uVar6 = 0;
      goto LAB_00464a4f;
    }
    *(int *)(param_1 + 8) = iVar7;
    uVar6 = 2;
  }
  else if (iVar8 == -0x150000) {
    if (param_7 == '\0') goto LAB_00464a15;
    *(int *)(param_1 + 8) = iVar1;
    uVar6 = 1;
  }
  else {
    if (iVar8 < 0) {
      if (param_7 == '\0') {
        *(int *)(param_1 + 8) = iVar7;
        goto LAB_00464a48;
      }
      *(int *)(param_1 + 8) = iVar1;
    }
    else {
      if (param_7 == '\0') {
        *(int *)(param_1 + 8) = iVar1;
LAB_00464a48:
        uVar6 = 8;
        goto LAB_00464a4d;
      }
      *(int *)(param_1 + 8) = iVar7;
    }
    uVar6 = 4;
  }
LAB_00464a4d:
  bVar4 = false;
LAB_00464a4f:
  *(undefined4 *)param_1 = uVar6;
  bVar3 = FUN_00464e67(param_1);
  iVar7 = *(int *)(param_1 + 8);
  if (bVar3) {
    iVar7 = iVar7 + *(int *)(param_4 + 0xe8) * 2;
  }
  *(int *)(param_1 + 8) = iVar7 + param_5;
  *(int *)(param_1 + 0x10) = param_6;
  *(uint *)(param_1 + 4) = param_3;
  if ((!bVar4) && (*pcVar5 != '\0')) {
    bVar4 = FUN_00464e67(param_1);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pcVar5 + (uint)bVar4 * 4 + 0xc);
    FUN_00464e82(param_1);
    return;
  }
  lVar2 = (longlong)(iVar7 + param_5) * (longlong)param_6;
  iVar7 = (int)(lVar2 >> 0x3f);
  lVar2 = lVar2 + CONCAT44(iVar7,iVar7) + 0x8000;
  *(uint *)(param_1 + 0xc) = (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
  return;
}

