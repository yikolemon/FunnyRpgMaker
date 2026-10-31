/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022451d */

ulonglong FUN_18022451d(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                       undefined8 param_5,longlong param_6,ulonglong param_7)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  byte local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x474) - 1U < 2) {
    uVar3 = FUN_180227eb8(local_78,param_1);
    if (uVar3 == 0) {
      local_80 = (byte)(param_4 >> 0x16) & 1;
      local_88 = local_88 & 0xffffffff00000000;
      uVar3 = FUN_180227fb1(local_78,param_3,0,0);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        if ((param_4 & 0x500000) == 0) {
          uVar4 = 0;
          if (*(char *)(param_6 + 0x1a) == '\a') {
            uVar2 = **(undefined8 **)(param_1 + 0x78);
            FUN_180233d68(local_78);
            uVar3 = FUN_18023418f(uVar2,param_6,local_78,1);
            uVar4 = (ulonglong)uVar3;
            if (uVar3 == 0) {
              *(undefined1 *)(param_6 + 0x1a) = local_5e;
              *(undefined4 *)(param_6 + 8) = local_70;
              *(undefined2 *)(param_6 + 0x18) = local_60;
              FUN_1801cab0c(*(undefined8 *)(param_1 + 0x78),local_68);
              puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
              *puVar1 = *puVar1 | 1;
            }
            else {
              FUN_1802345b2(uVar2,local_78);
            }
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = (ulonglong)uVar3;
    }
  }
  else {
    uVar4 = 2;
    if (*(int *)(param_1 + 0x474) == 3) {
      local_88 = param_7;
      uVar4 = FUN_180228393(param_1,param_2,param_3,param_5);
      if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_a8)) {
        return uVar4;
      }
      goto LAB_1802246a2;
    }
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_a8)) {
    return uVar4;
  }
LAB_1802246a2:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_a8);
}

