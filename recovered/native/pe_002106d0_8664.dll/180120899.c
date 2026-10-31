/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180120899 */

void FUN_180120899(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [33];
  undefined4 uStack_77;
  uint uStack_73;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined7 uStack_67;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_98;
  uStack_73 = (uint)(uint3)uStack_73;
  uStack_6f = 0;
  uStack_6b = 0;
  uStack_67 = 0;
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
  *(undefined4 *)(lVar3 + lVar4) = 1;
  *(undefined8 *)(lVar3 + 8 + lVar4) = param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = param_3;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = param_4;
  *(undefined4 *)(lVar3 + 0x20 + lVar4) = param_5;
  *(undefined4 *)(lVar3 + 0x24 + lVar4) = param_6;
  *(undefined1 *)(lVar3 + 0x28 + lVar4) = param_7;
  puVar1 = (undefined4 *)(lVar3 + 0x29 + lVar4);
  *puVar1 = uStack_77;
  puVar1[1] = uStack_73;
  puVar1[2] = uStack_6f;
  puVar1[3] = uStack_6b;
  *(ulonglong *)(lVar3 + 0x38 + lVar4) = CONCAT71(uStack_67,uStack_6b._3_1_);
  *(int *)(param_1 + 0x2940) = *(int *)(param_1 + 0x2940) + 1;
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_98);
}

