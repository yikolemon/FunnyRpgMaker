/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002e370 */

undefined8 FUN_14002e370(undefined8 param_1,longlong param_2)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58 [4];
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  bVar3 = FUN_140025269(param_2);
  if (bVar3) {
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar4 = (undefined4)DAT_1400ede00;
      uVar6 = (undefined4)((ulonglong)DAT_1400ede00 >> 0x20);
    }
    else {
      uVar4 = (undefined4)DAT_1400e66c0;
      uVar6 = (undefined4)((ulonglong)DAT_1400e66c0 >> 0x20);
    }
  }
  else {
    uVar4 = FUN_14002525c(param_2);
    if ((char)uVar4 == '\0') {
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar4 = (undefined4)DAT_1400edd30;
        uVar6 = (undefined4)((ulonglong)DAT_1400edd30 >> 0x20);
      }
      else {
        uVar4 = (undefined4)DAT_1400eddd8;
        uVar6 = (undefined4)((ulonglong)DAT_1400eddd8 >> 0x20);
      }
    }
    else {
      dVar1 = (double)FUN_14001b88c(param_2);
      uVar5 = FUN_140025248((double *)(param_2 + 0x90),dVar1);
      FUN_14001b860(&local_38,uVar5);
      local_78 = local_38;
      uStack_70 = uStack_30;
      local_68 = local_28;
      uStack_60 = uStack_20;
      FUN_1400818f5(local_58,&local_78);
      uVar2 = FUN_14001b88c((longlong)local_58);
      uVar4 = (undefined4)uVar2;
      uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_98)) {
    return CONCAT44(uVar6,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_98);
}

