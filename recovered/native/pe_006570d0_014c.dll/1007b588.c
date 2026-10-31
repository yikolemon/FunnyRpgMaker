/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b588 */

void __thiscall
FUN_1007b588(int param_1,uint *param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = *(uint *)(param_1 + 0x3c);
  uVar9 = 0xffffffff;
  uVar12 = uVar9;
  if (((param_6 & (uVar11 & 4) >> 2) != 0) ||
     (uVar12 = 0xffffffff, ((byte)((uVar11 & 2) >> 1) & (byte)(param_6 >> 1) & 0x7f) != 0))
  goto LAB_1007b73f;
  uVar1 = **(uint **)(param_1 + 0x1c);
  bVar5 = false;
  uVar7 = 0;
  if ((uVar11 & 2) == 0) {
    uVar7 = **(uint **)(param_1 + 0x20);
    if (uVar7 == 0) {
      bVar5 = false;
      uVar7 = 0;
    }
    else {
      bVar5 = true;
      if (*(uint *)(param_1 + 0x38) < uVar7) {
        *(uint *)(param_1 + 0x38) = uVar7;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = **(int **)(param_1 + 0xc);
  uVar10 = iVar2 - iVar3;
  uVar11 = (int)uVar10 >> 0x1f;
  if (param_5 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else if (param_5 == 1) {
    uVar9 = 0xffffffff;
    uVar12 = 0xffffffff;
    if ((~param_6 & 3) == 0) goto LAB_1007b73f;
    if ((param_6 & 1) == 0) {
      uVar9 = 0xffffffff;
      uVar12 = 0xffffffff;
      if ((param_6 & 2) == 0) goto LAB_1007b73f;
      uVar9 = 0xffffffff;
      uVar12 = 0xffffffff;
      if (uVar7 == 0 && iVar3 != 0) goto LAB_1007b73f;
    }
    else {
      uVar7 = uVar1;
      uVar9 = 0xffffffff;
      uVar12 = 0xffffffff;
      if (uVar1 == 0 && iVar3 != 0) goto LAB_1007b73f;
    }
    uVar6 = (int)(uVar7 - iVar3) >> 0x1f;
    uVar7 = uVar7 - iVar3;
  }
  else {
    uVar6 = uVar11;
    uVar7 = uVar10;
    uVar9 = 0xffffffff;
    uVar12 = 0xffffffff;
    if (param_5 != 2) goto LAB_1007b73f;
  }
  uVar8 = uVar7 + param_3;
  uVar7 = uVar6 + param_4 + (uint)CARRY4(uVar7,param_3);
  uVar9 = 0xffffffff;
  uVar12 = 0xffffffff;
  if (uVar11 < uVar7 || uVar11 - uVar7 < (uint)(uVar10 < uVar8)) goto LAB_1007b73f;
  if (uVar8 != 0 || uVar7 != 0) {
    uVar12 = 0xffffffff;
    if ((uVar1 == 0 & (byte)param_6) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_1007b73f;
    }
    uVar9 = 0xffffffff;
    if ((param_6 & 2) != 0 && !bVar5) goto LAB_1007b73f;
  }
  uVar11 = iVar3 + uVar8;
  if (uVar1 != 0 && (param_6 & 1) != 0) {
    **(uint **)(param_1 + 0x1c) = uVar11;
    **(int **)(param_1 + 0x2c) = iVar2 - uVar11;
  }
  uVar9 = uVar7;
  uVar12 = uVar8;
  if (bVar5 && (param_6 & 2) != 0) {
    iVar2 = **(int **)(param_1 + 0x20);
    iVar4 = **(int **)(param_1 + 0x30);
    **(int **)(param_1 + 0x10) = iVar3;
    **(uint **)(param_1 + 0x20) = uVar11;
    **(int **)(param_1 + 0x30) = (iVar2 + iVar4) - uVar11;
  }
LAB_1007b73f:
  *param_2 = uVar12;
  param_2[1] = uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}

