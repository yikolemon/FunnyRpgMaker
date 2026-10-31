/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140073946 */

undefined8 FUN_140073946(longlong param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  uint local_30;
  undefined8 local_2c;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) || (*(longlong *)(lVar1 + 0x80) == 0)) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_2 + 1) == '\0') {
      if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
        uVar3 = FUN_140076b5a(param_1,lVar1,(byte *)*param_2,param_3);
        return uVar3;
      }
      goto LAB_140073a89;
    }
    *param_3 = 0xc;
    *(undefined8 *)(param_3 + 2) = *param_2;
    *(undefined1 *)(param_3 + 4) = 0;
    local_30 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) + 0x20 >> 6;
    local_2c = 0;
    local_24 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x20 >> 6;
    local_2c._4_4_ = 0;
    local_2c._0_4_ = 0;
    if ((*(byte *)(*(int **)(param_1 + 0xd0) + 6) & 1) != 0) {
      FUN_14002195b(*(int **)(param_1 + 0xd0),(int *)&local_30);
    }
    param_3[6] = local_30;
    param_3[7] = (uint)local_2c;
    param_3[9] = local_2c._4_4_;
    param_3[10] = local_24;
    if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 2) == 0) {
      uVar2 = 0;
      param_3[8] = 0;
    }
    else {
      param_3[8] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10) << 10;
      uVar2 = (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 0xd0) + 0x14) << 10);
    }
    param_3[0xb] = (uint)uVar2;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
LAB_140073a89:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_58);
}

