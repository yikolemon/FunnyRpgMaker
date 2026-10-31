/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801014f9 */

void FUN_1801014f9(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  lVar1 = DAT_180419160;
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  puVar2 = (undefined4 *)(DAT_180419160 + 0xee8 + (longlong)param_1 * 0x10);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  iVar6 = *(int *)(DAT_180419160 + 0x20e8);
  if (iVar6 == *(int *)(DAT_180419160 + 0x20ec)) {
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
    lVar7 = FUN_1800fe7f8((longlong)iVar9 * 0x14);
    if (*(longlong *)(lVar1 + 0x20f0) != 0) {
      FUN_1802a82f0(lVar7,*(longlong *)(lVar1 + 0x20f0),(longlong)*(int *)(lVar1 + 0x20e8) * 0x14);
      FUN_1800fe8d4(*(undefined8 *)(lVar1 + 0x20f0));
    }
    *(longlong *)(lVar1 + 0x20f0) = lVar7;
    *(int *)(lVar1 + 0x20ec) = iVar9;
    iVar6 = *(int *)(lVar1 + 0x20e8);
  }
  else {
    lVar7 = *(longlong *)(DAT_180419160 + 0x20f0);
  }
  *(int *)(lVar7 + (longlong)iVar6 * 0x14) = param_1;
  puVar2 = (undefined4 *)(lVar7 + 4 + (longlong)iVar6 * 0x14);
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = uStack_40;
  puVar2[3] = uStack_3c;
  *(int *)(lVar1 + 0x20e8) = *(int *)(lVar1 + 0x20e8) + 1;
  if (*(int *)(lVar1 + 0x20e4) != param_1) {
    lVar1 = lVar1 + (longlong)param_1 * 0x10;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(lVar1 + 0xee8) = *param_2;
    *(undefined4 *)(lVar1 + 0xeec) = uVar3;
    *(undefined4 *)(lVar1 + 0xef0) = uVar4;
    *(undefined4 *)(lVar1 + 0xef4) = uVar5;
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

