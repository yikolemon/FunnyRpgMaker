/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801209f1 */

void FUN_1801209f1(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [36];
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  iVar2 = *(int *)(param_1 + 0x2940);
  if (iVar2 == *(int *)(param_1 + 0x2944)) {
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    iVar6 = iVar2 + 1;
    if (iVar2 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar3 = FUN_1800fe7f8((longlong)iVar6 << 6);
    if (*(longlong *)(param_1 + 0x2948) != 0) {
      FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 0x2948),(longlong)*(int *)(param_1 + 0x2940) << 6)
      ;
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x2948));
    }
    *(longlong *)(param_1 + 0x2948) = lVar3;
    *(int *)(param_1 + 0x2944) = iVar6;
    iVar2 = *(int *)(param_1 + 0x2940);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x2948);
  }
  lVar4 = (longlong)iVar2 * 0x40;
  *(undefined4 *)(lVar3 + lVar4) = 2;
  puVar1 = (undefined4 *)(lVar3 + 4 + lVar4);
  *puVar1 = uStack_44;
  puVar1[1] = (undefined4)local_40;
  puVar1[2] = local_40._4_4_;
  puVar1[3] = (undefined4)uStack_38;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = (undefined4)uStack_38;
  puVar1[1] = uStack_38._4_4_;
  puVar1[2] = (undefined4)local_30;
  puVar1[3] = local_30._4_4_;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = 0x3f000000ffffffff;
  *(undefined1 *)(lVar3 + 0x28 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x30 + lVar4) = param_2;
  *(undefined8 *)(lVar3 + 0x38 + lVar4) = 0;
  *(int *)(param_1 + 0x2940) = *(int *)(param_1 + 0x2940) + 1;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

