/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ff81 */

int FUN_14007ff81(longlong param_1,undefined8 *param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  local_50 = param_2[1];
  local_48 = param_2[2];
  local_40[0] = param_2[3];
  uVar4 = (int)local_40[0] + (int)local_58 * 2 + (int)local_50 * -3;
  uVar3 = -uVar4;
  if ((int)uVar3 < 0) {
    uVar3 = uVar4;
  }
  if (uVar3 < 0x10) {
    iVar1 = (int)((ulonglong)local_58 >> 0x20);
    iVar2 = (int)((ulonglong)local_40[0] >> 0x20);
    uVar4 = iVar2 + iVar1 * 2 + (int)((ulonglong)local_50 >> 0x20) * -3;
    uVar3 = -uVar4;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4;
    }
    if (0xf < uVar3) goto LAB_140080046;
    uVar4 = (int)local_58 + (int)local_40[0] * 2 + (int)local_48 * -3;
    uVar3 = -uVar4;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4;
    }
    if (0xf < uVar3) goto LAB_140080046;
    uVar4 = iVar1 + iVar2 * 2 + (int)((ulonglong)local_48 >> 0x20) * -3;
    uVar3 = -uVar4;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4;
    }
    if (0xf < uVar3) goto LAB_140080046;
    FUN_14008020e(&local_58);
  }
  else {
LAB_140080046:
    FUN_14008020e(&local_58);
    if (2 < param_3) {
      iVar2 = FUN_14007ff81(param_1,&local_58,param_3 >> 1,param_4);
      if (iVar2 == 0) {
        iVar2 = FUN_14007ff81(param_1,local_40,param_3 >> 1,param_4);
      }
      goto LAB_1400800ec;
    }
  }
  iVar2 = FUN_14007f619(param_1,&local_60);
  if (iVar2 == 0) {
    iVar2 = FUN_14007f619(param_1,&local_68);
    if (iVar2 == 0) {
      *local_60 = local_58;
      local_60[1] = local_40[0];
      *(undefined4 *)(local_60 + 4) = 1;
      *local_68 = local_40[0];
      local_68[1] = local_28;
      *(undefined4 *)(local_68 + 4) = 1;
      local_60[5] = local_68;
      local_68[5] = *param_4;
      *param_4 = (longlong)local_60;
      iVar2 = 0;
    }
  }
LAB_1400800ec:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_88)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_88);
}

