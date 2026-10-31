/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002df04 */

undefined8 FUN_14002df04(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong local_1d8 [19];
  longlong *local_140;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = FUN_14002525c(param_2);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_140025269(param_2);
    if (bVar1) {
      uVar2 = 0;
      uVar5 = 0;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar2 = (undefined4)DAT_1400e7248;
        uVar5 = (undefined4)((ulonglong)DAT_1400e7248 >> 0x20);
      }
    }
    else if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = (undefined4)DAT_1400eddd8;
      uVar5 = (undefined4)((ulonglong)DAT_1400eddd8 >> 0x20);
    }
    else {
      uVar2 = (undefined4)DAT_1400edd30;
      uVar5 = (undefined4)((ulonglong)DAT_1400edd30 >> 0x20);
    }
  }
  else {
    FUN_140026bc6(local_1d8);
    if (local_140 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086c20();
    }
    dVar3 = (double)(**(code **)(*local_140 + 0x10))(local_140,param_2);
    uVar4 = FUN_14002e9e4(dVar3,DAT_1400eddf8);
    uVar2 = (undefined4)uVar4;
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_14001b894(local_1d8);
  }
  return CONCAT44(uVar5,uVar2);
}

