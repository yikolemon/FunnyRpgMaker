/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018f126 */

void FUN_18018f126(int *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_30;
  longlong lVar7;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a);
  local_48 = param_1[0x1c];
  iStack_44 = param_1[0x1d];
  iStack_40 = param_1[0x1e];
  iStack_3c = param_1[0x1f];
  iVar3 = param_1[0x20];
  iVar5 = *param_1;
  iVar4 = param_1[4];
  if (iVar5 == param_1[1]) {
    if (iVar5 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar5 / 2 + iVar5;
    }
    iVar9 = iVar5 + 1;
    if (iVar5 + 1 < iVar8) {
      iVar9 = iVar8;
    }
    lVar6 = FUN_1800fe7f8((longlong)iVar9 * 0x48);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x48);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar6;
    param_1[1] = iVar9;
    iVar5 = *param_1;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 2);
  }
  lVar7 = (longlong)iVar5;
  piVar2 = (int *)(lVar6 + 0x10 + lVar7 * 0x48);
  *piVar2 = local_48;
  piVar2[1] = iStack_44;
  piVar2[2] = iStack_40;
  piVar2[3] = iStack_3c;
  puVar1 = (undefined8 *)(lVar6 + lVar7 * 0x48);
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  *(int *)(lVar6 + 0x20 + lVar7 * 0x48) = iVar3;
  *(int *)(lVar6 + 0x24 + lVar7 * 0x48) = iVar4;
  puVar1 = (undefined8 *)(lVar6 + 0x28 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x38 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = *param_1 + 1;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
}

