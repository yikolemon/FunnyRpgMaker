/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401759f2 */

undefined8 FUN_1401759f2(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  int local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) || (*(longlong *)(lVar1 + 0x80) == 0)) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_2 + 1) == '\0') {
      if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
        uVar3 = FUN_140178c06(param_1,lVar1,*param_2,param_3);
        return uVar3;
      }
      goto LAB_140175b35;
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
      FUN_14012e52c(*(longlong *)(param_1 + 0xd0),local_30);
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
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
LAB_140175b35:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

