/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f1246 */

ulonglong FUN_1801f1246(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  lVar5 = *(longlong *)(param_1 + 0x408);
  if (lVar5 == 0) {
    uVar3 = FUN_1801f0731(param_1,0);
    local_34 = (uint)uVar3;
    if (local_34 != 0) goto LAB_1801f1353;
    lVar5 = *(longlong *)(param_1 + 0x408);
  }
  uVar3 = 6;
  if (param_2 <= *(ushort *)(param_1 + 0xe)) {
    if (param_2 == 0) {
      FUN_1801c9b65(uVar4,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar4 = FUN_1801cfa40(uVar4,*(undefined8 *)(param_1 + 0x428),&local_34);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      uVar3 = (ulonglong)local_34;
      if (local_34 != 0) goto LAB_1801f1353;
      uVar3 = FUN_1801f0ef4(param_1,0,0);
      uVar2 = (uint)uVar3;
    }
    else {
      puVar1 = *(undefined4 **)(lVar5 + 0x18);
      lVar5 = *(longlong *)(puVar1 + 6);
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x158))
                        (param_1,*(undefined2 *)(lVar5 + -8 + (ulonglong)param_2 * 0x10),&local_40);
      if ((int)uVar3 != 0) goto LAB_1801f1353;
      FUN_1801c9b65(uVar4,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = local_40;
      uVar3 = FUN_1801f0ef4(param_1,*puVar1,
                            *(undefined8 *)(lVar5 + (ulonglong)param_2 * 0x10 + -0x10));
      uVar2 = (uint)uVar3;
    }
    if (0xfffffffd < uVar2) {
      uVar3 = 0;
    }
  }
LAB_1801f1353:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

