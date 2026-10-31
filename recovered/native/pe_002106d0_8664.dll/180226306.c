/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180226306 */

undefined8 FUN_180226306(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  int local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) || (*(longlong *)(lVar1 + 0x80) == 0)) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_2 + 1) == '\0') {
      if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
        uVar3 = FUN_18022951a(param_1,lVar1,*param_2,param_3);
        return uVar3;
      }
      goto LAB_180226449;
    }
    *param_3 = 0xc;
    *(undefined8 *)(param_3 + 2) = *param_2;
    *(undefined1 *)(param_3 + 4) = 0;
    local_30[0] = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) + 0x20 >> 6;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x20 >> 6;
    uVar5 = 0;
    iVar4 = 0;
    if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
      FUN_1801cf558(*(longlong *)(param_1 + 0xd0),local_30);
      uVar5 = (undefined4)local_30._4_8_;
      iVar4 = local_30[2];
    }
    param_3[6] = local_30[0];
    param_3[7] = uVar5;
    param_3[9] = iVar4;
    param_3[10] = local_30[3];
    if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 2) == 0) {
      uVar2 = 0;
      param_3[8] = 0;
    }
    else {
      param_3[8] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10) << 10;
      uVar2 = (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 0xd0) + 0x14) << 10);
    }
    param_3[0xb] = (int)uVar2;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
LAB_180226449:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

