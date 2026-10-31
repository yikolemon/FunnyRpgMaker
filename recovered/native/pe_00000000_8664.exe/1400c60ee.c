/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c60ee */

void FUN_1400c60ee(uint param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  lVar9 = (longlong)*(int *)(DAT_140f2a910 + 0x2168) + 1;
  iVar7 = *(int *)(DAT_140f2a910 + 0x216c);
  iVar8 = (int)lVar9;
  if (*(int *)(DAT_140f2a910 + 0x2168) < iVar7) {
    lVar5 = *(longlong *)(DAT_140f2a910 + 0x2170);
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
    lVar5 = FUN_140077ab4((longlong)iVar7 * 0x28);
    if (*(longlong *)(lVar3 + 0x2170) != 0) {
      FUN_1401c5180(lVar5,*(longlong *)(lVar3 + 0x2170),(longlong)*(int *)(lVar3 + 0x2168) * 0x28);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x2170));
    }
    *(longlong *)(lVar3 + 0x2170) = lVar5;
    *(int *)(lVar3 + 0x216c) = iVar7;
  }
  *(int *)(lVar3 + 0x2168) = iVar8;
  lVar5 = lVar5 + lVar9 * 0x28;
  *(undefined4 *)(lVar5 + -0x28) = *(undefined4 *)(lVar3 + 0x1fe0);
  *(uint *)(lVar5 + -0x24) = param_1;
  *(undefined4 *)(lVar5 + -0x20) = *(undefined4 *)(lVar3 + 0x1fe4);
  uVar2 = *(undefined8 *)(lVar3 + 0x2004);
  *(undefined8 *)(lVar5 + -0x1c) = *(undefined8 *)(lVar3 + 0x1ffc);
  *(undefined8 *)(lVar5 + -0x14) = uVar2;
  if ((param_1 & 0x180000) == 0) {
    *(undefined4 *)(lVar5 + -0xc) = 0x7f7fffff;
  }
  else {
    *(float *)(lVar5 + -0xc) =
         *(float *)(lVar3 + 0x1320) * DAT_1401c86a0 + param_2 + *(float *)(lVar3 + 0xdf4);
    if (*(longlong *)(lVar3 + 0x24f8) != 0) {
      uVar6 = *(undefined2 *)(*(longlong *)(lVar3 + 0x24f8) + 0x74);
      goto LAB_1400c621a;
    }
  }
  uVar6 = 0xffff;
LAB_1400c621a:
  *(undefined2 *)(lVar5 + -4) = uVar6;
  *(undefined4 *)(lVar5 + -8) = 0xff7fffff;
  uVar4 = 1 << (*(byte *)(lVar1 + 0x1e0) & 0x1f);
  *(uint *)(lVar1 + 0x1e4) = *(uint *)(lVar1 + 0x1e4) | uVar4;
  if ((param_1 >> 0x14 & 1) != 0) {
    *(uint *)(lVar1 + 0x1e8) = *(uint *)(lVar1 + 0x1e8) | uVar4;
  }
  return;
}

