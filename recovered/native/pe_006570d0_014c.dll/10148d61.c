/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10148d61 */

void __fastcall FUN_10148d61(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  float in_XMM0_Da;
  
  iVar6 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar1 = *(int *)(DAT_1039d74c + 0x1fd4) + 1;
  iVar10 = *(int *)(DAT_1039d74c + 0x1fd8);
  if (*(int *)(DAT_1039d74c + 0x1fd4) < iVar10) {
    iVar7 = *(int *)(DAT_1039d74c + 0x1fdc);
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    if (iVar10 <= iVar1) {
      iVar10 = iVar1;
    }
    iVar7 = FUN_100fa1fa(iVar10 * 0x28);
    if (*(int *)(iVar6 + 0x1fdc) != 0) {
      FUN_1025b2d0(iVar7,*(int *)(iVar6 + 0x1fdc),*(int *)(iVar6 + 0x1fd4) * 0x28);
      FUN_100fa2cb(*(undefined4 *)(iVar6 + 0x1fdc));
    }
    *(int *)(iVar6 + 0x1fdc) = iVar7;
    *(int *)(iVar6 + 0x1fd8) = iVar10;
  }
  *(int *)(iVar6 + 0x1fd4) = iVar1;
  iVar7 = iVar7 + iVar1 * 0x28;
  *(undefined4 *)(iVar7 + -0x28) = *(undefined4 *)(iVar6 + 0x1e80);
  *(uint *)(iVar7 + -0x24) = param_1;
  *(undefined4 *)(iVar7 + -0x20) = *(undefined4 *)(iVar6 + 0x1e84);
  uVar3 = *(undefined4 *)(iVar6 + 0x1ea0);
  uVar4 = *(undefined4 *)(iVar6 + 0x1ea4);
  uVar5 = *(undefined4 *)(iVar6 + 0x1ea8);
  *(undefined4 *)(iVar7 + -0x1c) = *(undefined4 *)(iVar6 + 0x1e9c);
  *(undefined4 *)(iVar7 + -0x18) = uVar3;
  *(undefined4 *)(iVar7 + -0x14) = uVar4;
  *(undefined4 *)(iVar7 + -0x10) = uVar5;
  if ((param_1 & 0x180000) == 0) {
    *(undefined4 *)(iVar7 + -0xc) = 0x7f7fffff;
  }
  else {
    *(float *)(iVar7 + -0xc) =
         *(float *)(iVar6 + 0x1228) * DAT_102b70e0 + in_XMM0_Da + *(float *)(iVar6 + 0xd0c);
    if (*(int *)(iVar6 + 0x2308) != 0) {
      uVar9 = *(undefined2 *)(*(int *)(iVar6 + 0x2308) + 0x48);
      goto LAB_10148e88;
    }
  }
  uVar9 = 0xffff;
LAB_10148e88:
  *(undefined2 *)(iVar7 + -4) = uVar9;
  *(undefined4 *)(iVar7 + -8) = 0xff7fffff;
  uVar8 = 1 << (*(byte *)(iVar2 + 0x1cc) & 0x1f);
  *(uint *)(iVar2 + 0x1d0) = *(uint *)(iVar2 + 0x1d0) | uVar8;
  if ((param_1 >> 0x14 & 1) != 0) {
    *(uint *)(iVar2 + 0x1d4) = *(uint *)(iVar2 + 0x1d4) | uVar8;
  }
  return;
}

