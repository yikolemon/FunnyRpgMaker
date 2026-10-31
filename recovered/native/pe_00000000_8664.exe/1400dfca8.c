/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dfca8 */

void FUN_1400dfca8(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,float param_8,uint param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  if (0xffffff < param_7) {
    uVar2 = param_9 | 0xf0;
    if ((param_9 & 0x1f0) != 0) {
      uVar2 = param_9;
    }
    if ((uVar2 & 0x1f0) != 0x100 && DAT_1401c86a0 <= param_8) {
      if ((param_2[1] != *(longlong *)(param_1 + 0x78)) ||
         (*param_2 != *(longlong *)(param_1 + 0x70))) {
        local_88 = (undefined4)*param_2;
        uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_80 = (undefined4)param_2[1];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_1400dad02(param_1);
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        local_a8 = CONCAT44(local_a8._4_4_,uVar2);
        FUN_1400dd89a(param_1,param_3,param_4,param_8);
        FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_7);
        *(undefined4 *)(param_1 + 0x50) = 0;
        local_98 = param_6;
        local_a0 = param_5;
        local_90 = 1;
        local_a8 = param_4;
        FUN_1400dfec3(param_1,uVar1,*(undefined4 *)(param_1 + 0x20),param_3);
        if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_c8)) {
          FUN_1400dadbc(param_1);
          return;
        }
        goto LAB_1400dfeb5;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      local_a8 = CONCAT44(local_a8._4_4_,uVar2);
      FUN_1400dd89a(param_1,param_3,param_4,param_8);
      FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_7)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
      local_98 = param_6;
      local_a0 = param_5;
      local_90 = 1;
      local_a8 = param_4;
      FUN_1400dfec3(param_1,uVar1,*(undefined4 *)(param_1 + 0x20),param_3);
    }
    else {
      local_78 = (undefined4)*param_2;
      uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_70 = (undefined4)param_2[1];
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_98 = CONCAT44(local_98._4_4_,param_7);
      local_a0 = param_6;
      local_a8 = param_5;
      FUN_1400dfb8e(param_1,&local_78,param_3,param_4);
    }
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_c8)) {
    return;
  }
LAB_1400dfeb5:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_c8);
}

