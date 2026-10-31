/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173c09 */

ulonglong FUN_140173c09(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,
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
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x474) - 1U < 2) {
    uVar3 = FUN_1401775a4(local_78,param_1);
    if (uVar3 == 0) {
      local_80 = (byte)(param_4 >> 0x16) & 1;
      local_88 = local_88 & 0xffffffff00000000;
      uVar3 = FUN_14017769d(local_78,param_3,0,0);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        if ((param_4 & 0x500000) == 0) {
          uVar4 = 0;
          if (*(char *)(param_6 + 0x1a) == '\a') {
            uVar2 = **(undefined8 **)(param_1 + 0x78);
            FUN_140183454(local_78);
            uVar3 = FUN_14018387b(uVar2,param_6,local_78,1);
            uVar4 = (ulonglong)uVar3;
            if (uVar3 == 0) {
              *(undefined1 *)(param_6 + 0x1a) = local_5e;
              *(undefined4 *)(param_6 + 8) = local_70;
              *(undefined2 *)(param_6 + 0x18) = local_60;
              FUN_140129ae0(*(undefined8 *)(param_1 + 0x78),local_68);
              puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
              *puVar1 = *puVar1 | 1;
            }
            else {
              FUN_140183c9e(uVar2,local_78);
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
      uVar4 = FUN_140177a7f(param_1,param_2,param_3,param_5);
      if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_a8)) {
        return uVar4;
      }
      goto LAB_140173d8e;
    }
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_a8)) {
    return uVar4;
  }
LAB_140173d8e:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_a8);
}

