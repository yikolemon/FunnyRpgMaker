/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a0c5e */

void FUN_1403a0c5e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = *(int *)(param_1 + 0xb0);
  if (iVar6 == *(int *)(param_1 + 0xb4)) {
    if (iVar6 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar6 / 2 + iVar6;
    }
    iVar9 = iVar6 + 1;
    if (iVar6 + 1 < iVar8) {
      iVar9 = iVar8;
    }
    lVar7 = FUN_14030fcc8((longlong)iVar9 << 4);
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_1404b97c0(lVar7,*(longlong *)(param_1 + 0xb8),(longlong)*(int *)(param_1 + 0xb0) << 4);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0xb8));
    }
    *(longlong *)(param_1 + 0xb8) = lVar7;
    *(int *)(param_1 + 0xb4) = iVar9;
    iVar6 = *(int *)(param_1 + 0xb0);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0xb8);
  }
  uVar5 = param_2[1];
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  FUN_1403a0918(param_1);
  return;
}

