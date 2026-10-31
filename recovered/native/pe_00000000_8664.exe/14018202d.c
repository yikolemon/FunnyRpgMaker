/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018202d */

undefined8 FUN_14018202d(undefined8 param_1,undefined8 *param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  local_50 = param_2[1];
  local_48 = param_2[2];
  local_40[0] = param_2[3];
  uVar5 = (int)local_40[0] + (int)local_58 * 2 + (int)local_50 * -3;
  uVar4 = -uVar5;
  if ((int)uVar4 < 0) {
    uVar4 = uVar5;
  }
  if (uVar4 < 0x10) {
    iVar2 = (int)((ulonglong)local_58 >> 0x20);
    iVar1 = (int)((ulonglong)local_40[0] >> 0x20);
    uVar5 = iVar1 + iVar2 * 2 + (int)((ulonglong)local_50 >> 0x20) * -3;
    uVar4 = -uVar5;
    if ((int)uVar4 < 0) {
      uVar4 = uVar5;
    }
    if (0xf < uVar4) goto LAB_1401820f2;
    uVar5 = (int)local_58 + (int)local_40[0] * 2 + (int)local_48 * -3;
    uVar4 = -uVar5;
    if ((int)uVar4 < 0) {
      uVar4 = uVar5;
    }
    if (0xf < uVar4) goto LAB_1401820f2;
    uVar5 = iVar2 + iVar1 * 2 + (int)((ulonglong)local_48 >> 0x20) * -3;
    uVar4 = -uVar5;
    if ((int)uVar4 < 0) {
      uVar4 = uVar5;
    }
    if (0xf < uVar4) goto LAB_1401820f2;
    FUN_1401822ba(&local_58);
  }
  else {
LAB_1401820f2:
    FUN_1401822ba(&local_58);
    if (2 < param_3) {
      uVar3 = FUN_14018202d(param_1,&local_58,param_3 >> 1,param_4);
      if ((int)uVar3 == 0) {
        uVar3 = FUN_14018202d(param_1,local_40,param_3 >> 1,param_4);
      }
      goto LAB_140182198;
    }
  }
  uVar3 = FUN_1401816c5(param_1,&local_60);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1401816c5(param_1,&local_68);
    if ((int)uVar3 == 0) {
      *local_60 = local_58;
      local_60[1] = local_40[0];
      *(undefined4 *)(local_60 + 4) = 1;
      *local_68 = local_40[0];
      local_68[1] = local_28;
      *(undefined4 *)(local_68 + 4) = 1;
      local_60[5] = local_68;
      local_68[5] = *param_4;
      *param_4 = (longlong)local_60;
      uVar3 = 0;
    }
  }
LAB_140182198:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_88)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_88);
}

