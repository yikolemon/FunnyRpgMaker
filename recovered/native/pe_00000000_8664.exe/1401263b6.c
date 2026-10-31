/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401263b6 */

undefined8 FUN_1401263b6(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined8 unaff_RBX;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = *(char *)(param_2 + 0x24);
  if (cVar1 == '\0') {
    uVar4 = (undefined4)DAT_140e94c00;
    uVar5 = (undefined4)((ulonglong)DAT_140e94c00 >> 0x20);
  }
  else {
    uVar4 = (undefined4)DAT_140e94ca8;
    uVar5 = (undefined4)((ulonglong)DAT_140e94ca8 >> 0x20);
  }
  cVar2 = FUN_14011aa5d(param_2);
  if (cVar2 == '\0') {
    cVar2 = FUN_14011aa50(param_2);
    if (cVar2 != '\0') {
      uVar3 = FUN_14011aa65(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),uVar4,
                            (uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1);
      return uVar3;
    }
  }
  else if (cVar1 == '\0') {
    uVar4 = (undefined4)DAT_140e94c88;
    uVar5 = (undefined4)((ulonglong)DAT_140e94c88 >> 0x20);
  }
  else {
    uVar4 = (undefined4)DAT_140e94ca8;
    uVar5 = (undefined4)((ulonglong)DAT_140e94ca8 >> 0x20);
  }
  return CONCAT44(uVar5,uVar4);
}

