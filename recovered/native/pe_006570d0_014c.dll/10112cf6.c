/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112cf6 */

void FUN_10112cf6(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = DAT_1039d74c;
  iVar5 = *(int *)(DAT_1039d74c + 0x1220);
  uVar6 = *(undefined4 *)(DAT_1039d74c + 0x1228);
  uVar7 = *(undefined4 *)(DAT_1039d74c + 0x122c);
  iVar2 = *(int *)(DAT_1039d74c + 0x1f8c);
  if (iVar2 == *(int *)(DAT_1039d74c + 0x1f90)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 0xc,uVar6,uVar7,0,0);
    if (*(int *)(iVar1 + 0x1f94) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(iVar1 + 0x1f94),*(int *)(iVar1 + 0x1f8c) * 0xc);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1f94));
    }
    *(int *)(iVar1 + 0x1f94) = iVar3;
    *(int *)(iVar1 + 0x1f90) = iVar4;
    iVar2 = *(int *)(iVar1 + 0x1f8c);
  }
  else {
    iVar3 = *(int *)(DAT_1039d74c + 0x1f94);
  }
  *(int *)(iVar3 + iVar2 * 0xc) = iVar5;
  *(ulonglong *)(iVar3 + 4 + iVar2 * 0xc) = CONCAT44(uVar6,uVar7);
  *(int *)(iVar1 + 0x1f8c) = *(int *)(iVar1 + 0x1f8c) + 1;
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    param_2 = *(float *)(iVar1 + 0x122c);
  }
  if (param_1 != 0) {
    iVar5 = param_1;
  }
  FUN_10112c4f(iVar5,param_2,0);
  return;
}

