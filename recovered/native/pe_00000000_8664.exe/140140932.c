/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140140932 */

ulonglong FUN_140140932(longlong param_1,uint param_2)

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
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  lVar5 = *(longlong *)(param_1 + 0x408);
  if (lVar5 == 0) {
    uVar3 = FUN_14013fe1d(param_1,0);
    local_34 = (uint)uVar3;
    if (local_34 != 0) goto LAB_140140a3f;
    lVar5 = *(longlong *)(param_1 + 0x408);
  }
  uVar3 = 6;
  if (param_2 <= *(ushort *)(param_1 + 0xe)) {
    if (param_2 == 0) {
      FUN_140128b39(uVar4,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar4 = FUN_14012ea14(uVar4,*(undefined8 *)(param_1 + 0x428),&local_34);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      uVar3 = (ulonglong)local_34;
      if (local_34 != 0) goto LAB_140140a3f;
      uVar3 = FUN_1401405e0(param_1,0,0);
      uVar2 = (uint)uVar3;
    }
    else {
      puVar1 = *(undefined4 **)(lVar5 + 0x18);
      lVar5 = *(longlong *)(puVar1 + 6);
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x158))
                        (param_1,*(undefined2 *)(lVar5 + -8 + (ulonglong)param_2 * 0x10),&local_40);
      if ((int)uVar3 != 0) goto LAB_140140a3f;
      FUN_140128b39(uVar4,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = local_40;
      uVar3 = FUN_1401405e0(param_1,*puVar1,
                            *(undefined8 *)(lVar5 + (ulonglong)param_2 * 0x10 + -0x10));
      uVar2 = (uint)uVar3;
    }
    if (0xfffffffd < uVar2) {
      uVar3 = 0;
    }
  }
LAB_140140a3f:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

