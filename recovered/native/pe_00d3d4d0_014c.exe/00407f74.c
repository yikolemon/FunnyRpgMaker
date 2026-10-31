/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407f74 */

void __thiscall
FUN_00407f74(void *this,uint *param_1,uint param_2,int param_3,int param_4,uint param_5)

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
  
  uVar5 = *(uint *)((int)this + 0x3c);
  uVar9 = 0xffffffff;
  uVar10 = uVar9;
  if (((param_5 & (uVar5 & 4) >> 2) != 0) ||
     (uVar10 = 0xffffffff, ((byte)((uVar5 & 2) >> 1) & (byte)(param_5 >> 1) & 0x7f) != 0))
  goto LAB_0040813a;
  iVar1 = **(int **)((int)this + 0x1c);
  bVar4 = false;
  uVar7 = 0;
  if ((uVar5 & 2) == 0) {
    uVar7 = **(uint **)((int)this + 0x20);
    if (uVar7 == 0) {
      bVar4 = false;
      uVar7 = 0;
    }
    else {
      bVar4 = true;
      if (*(uint *)((int)this + 0x38) < uVar7) {
        *(uint *)((int)this + 0x38) = uVar7;
      }
    }
  }
  iVar2 = *(int *)((int)this + 0x38);
  iVar3 = **(int **)((int)this + 0xc);
  iVar11 = iVar2 - iVar3;
  uVar12 = iVar11 >> 1;
  uVar5 = iVar11 >> 0x1f;
  if (param_4 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else if (param_4 == 1) {
    uVar9 = 0xffffffff;
    uVar10 = 0xffffffff;
    if ((~param_5 & 3) == 0) goto LAB_0040813a;
    if ((param_5 & 1) == 0) {
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if ((param_5 & 2) == 0) goto LAB_0040813a;
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if (uVar7 == 0 && iVar3 != 0) goto LAB_0040813a;
      uVar6 = (int)(uVar7 - iVar3) >> 0x1f;
      uVar7 = (int)(uVar7 - iVar3) >> 1;
    }
    else {
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if (iVar1 == 0 && iVar3 != 0) goto LAB_0040813a;
      uVar6 = iVar1 - iVar3 >> 0x1f;
      uVar7 = iVar1 - iVar3 >> 1;
    }
  }
  else {
    uVar6 = uVar5;
    uVar7 = uVar12;
    uVar9 = 0xffffffff;
    uVar10 = 0xffffffff;
    if (param_4 != 2) goto LAB_0040813a;
  }
  uVar8 = uVar7 + param_2;
  uVar7 = uVar6 + param_3 + (uint)CARRY4(uVar7,param_2);
  uVar9 = 0xffffffff;
  uVar10 = 0xffffffff;
  if (uVar5 < uVar7 || uVar5 - uVar7 < (uint)(uVar12 < uVar8)) goto LAB_0040813a;
  if (uVar8 != 0 || uVar7 != 0) {
    uVar10 = 0xffffffff;
    if ((iVar1 == 0 & (byte)param_5) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_0040813a;
    }
    uVar9 = 0xffffffff;
    if ((param_5 & 2) != 0 && !bVar4) goto LAB_0040813a;
  }
  iVar11 = iVar3 + uVar8 * 2;
  if (iVar1 != 0 && (param_5 & 1) != 0) {
    **(int **)((int)this + 0x1c) = iVar11;
    **(int **)((int)this + 0x2c) = iVar2 - iVar11 >> 1;
  }
  uVar9 = uVar7;
  uVar10 = uVar8;
  if (bVar4 && (param_5 & 2) != 0) {
    iVar1 = **(int **)((int)this + 0x30);
    iVar2 = **(int **)((int)this + 0x20);
    **(int **)((int)this + 0x10) = iVar3;
    **(int **)((int)this + 0x20) = iVar11;
    **(int **)((int)this + 0x30) = (iVar1 * 2 + iVar2) - iVar11 >> 1;
  }
LAB_0040813a:
  *param_1 = uVar10;
  param_1[1] = uVar9;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

