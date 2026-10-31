/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026429f */

void FUN_1026429f(uint *param_1,uint param_2,undefined4 param_3,byte param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar3 = 0x17;
  if (*(char *)(param_5 + 4) != '\0') {
    iVar3 = 0x34;
  }
  if (0x40 < param_2) {
    uVar7 = param_2 >> 5;
    param_2 = param_2 & 0x1f;
    iVar9 = uVar7 - 2;
    iVar6 = iVar9 * 0x20;
    uVar5 = param_1[uVar7 - 1];
    puVar1 = param_1 + uVar7;
    if (param_2 == 0) {
      puVar2 = param_1 + (uVar7 - 1);
      bVar8 = param_4 ^ 1;
      for (; lVar12 = CONCAT44(*puVar1,*puVar2), iVar9 != 0; iVar9 = iVar9 + -1) {
        param_1 = param_1 + 1;
        bVar4 = 0;
        if (*param_1 == 0) {
          bVar4 = bVar8;
        }
        bVar8 = bVar4;
      }
    }
    else {
      bVar8 = 1;
      iVar6 = param_2 + iVar6;
      lVar10 = __allshl();
      lVar11 = __aullshr();
      lVar12 = __allshl();
      lVar12 = lVar10 + lVar11 + lVar12;
      if ((param_4 != 0) || ((uVar5 & (1 << (sbyte)param_2) - 1U) != 0)) {
        bVar8 = 0;
      }
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        param_1 = param_1 + 1;
        bVar4 = 0;
        if (*param_1 == 0) {
          bVar4 = bVar8;
        }
        bVar8 = bVar4;
      }
    }
    FUN_10263e85(lVar12,iVar3 + iVar6,param_3,bVar8,param_5);
    return;
  }
  if (*param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1[1];
    if (1 < *param_1) {
      uVar7 = param_1[2];
      goto LAB_102642dd;
    }
  }
  uVar7 = 0;
LAB_102642dd:
  FUN_10263e85(uVar5,uVar7,iVar3,param_3,param_4 ^ 1,param_5);
  return;
}

