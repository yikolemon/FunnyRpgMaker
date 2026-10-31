/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0f24 */

void __thiscall
FUN_100a0f24(int param_1,uint *param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar5 = *(uint *)(param_1 + 0x3c);
  uVar9 = 0xffffffff;
  uVar10 = uVar9;
  if (((param_6 & (uVar5 & 4) >> 2) != 0) ||
     (uVar10 = 0xffffffff, ((byte)((uVar5 & 2) >> 1) & (byte)(param_6 >> 1) & 0x7f) != 0))
  goto LAB_100a10ea;
  iVar1 = **(int **)(param_1 + 0x1c);
  bVar4 = false;
  uVar7 = 0;
  if ((uVar5 & 2) == 0) {
    uVar7 = **(uint **)(param_1 + 0x20);
    if (uVar7 == 0) {
      bVar4 = false;
      uVar7 = 0;
    }
    else {
      bVar4 = true;
      if (*(uint *)(param_1 + 0x38) < uVar7) {
        *(uint *)(param_1 + 0x38) = uVar7;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = **(int **)(param_1 + 0xc);
  iVar11 = iVar2 - iVar3;
  uVar12 = iVar11 >> 1;
  uVar5 = iVar11 >> 0x1f;
  if (param_5 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else if (param_5 == 1) {
    uVar9 = 0xffffffff;
    uVar10 = 0xffffffff;
    if ((~param_6 & 3) == 0) goto LAB_100a10ea;
    if ((param_6 & 1) == 0) {
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if ((param_6 & 2) == 0) goto LAB_100a10ea;
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if (uVar7 == 0 && iVar3 != 0) goto LAB_100a10ea;
      uVar6 = (int)(uVar7 - iVar3) >> 0x1f;
      uVar7 = (int)(uVar7 - iVar3) >> 1;
    }
    else {
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if (iVar1 == 0 && iVar3 != 0) goto LAB_100a10ea;
      uVar6 = iVar1 - iVar3 >> 0x1f;
      uVar7 = iVar1 - iVar3 >> 1;
    }
  }
  else {
    uVar6 = uVar5;
    uVar7 = uVar12;
    uVar9 = 0xffffffff;
    uVar10 = 0xffffffff;
    if (param_5 != 2) goto LAB_100a10ea;
  }
  uVar8 = uVar7 + param_3;
  uVar7 = uVar6 + param_4 + (uint)CARRY4(uVar7,param_3);
  uVar9 = 0xffffffff;
  uVar10 = 0xffffffff;
  if (uVar5 < uVar7 || uVar5 - uVar7 < (uint)(uVar12 < uVar8)) goto LAB_100a10ea;
  if (uVar8 != 0 || uVar7 != 0) {
    uVar10 = 0xffffffff;
    if ((iVar1 == 0 & (byte)param_6) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_100a10ea;
    }
    uVar9 = 0xffffffff;
    if ((param_6 & 2) != 0 && !bVar4) goto LAB_100a10ea;
  }
  iVar11 = iVar3 + uVar8 * 2;
  if (iVar1 != 0 && (param_6 & 1) != 0) {
    **(int **)(param_1 + 0x1c) = iVar11;
    **(int **)(param_1 + 0x2c) = iVar2 - iVar11 >> 1;
  }
  uVar9 = uVar7;
  uVar10 = uVar8;
  if (bVar4 && (param_6 & 2) != 0) {
    iVar1 = **(int **)(param_1 + 0x30);
    iVar2 = **(int **)(param_1 + 0x20);
    **(int **)(param_1 + 0x10) = iVar3;
    **(int **)(param_1 + 0x20) = iVar11;
    **(int **)(param_1 + 0x30) = (iVar1 * 2 + iVar2) - iVar11 >> 1;
  }
LAB_100a10ea:
  *param_2 = uVar10;
  param_2[1] = uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}

