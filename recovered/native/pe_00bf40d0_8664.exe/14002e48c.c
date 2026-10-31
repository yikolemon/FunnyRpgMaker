/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002e48c */

undefined8 FUN_14002e48c(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_1d8 [19];
  longlong *local_140;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  bVar1 = FUN_140025269(param_2);
  if (bVar1) {
    uVar4 = 0;
    uVar5 = 0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar4 = (undefined4)DAT_1400e7248;
      uVar5 = (undefined4)((ulonglong)DAT_1400e7248 >> 0x20);
    }
  }
  else {
    uVar4 = FUN_14002525c(param_2);
    if ((char)uVar4 == '\0') {
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar4 = (undefined4)DAT_1400eddd8;
        uVar5 = (undefined4)((ulonglong)DAT_1400eddd8 >> 0x20);
      }
      else {
        uVar4 = (undefined4)DAT_1400edd30;
        uVar5 = (undefined4)((ulonglong)DAT_1400edd30 >> 0x20);
      }
    }
    else {
      FUN_1400285ce(local_1d8);
      if (local_140 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_140086c20();
      }
      dVar2 = (double)(**(code **)(*local_140 + 0x10))(local_140,param_2);
      uVar3 = FUN_14002e9e4(dVar2,DAT_1400eddf8);
      uVar4 = (undefined4)uVar3;
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
      FUN_14001b894(local_1d8);
    }
  }
  return CONCAT44(uVar5,uVar4);
}

