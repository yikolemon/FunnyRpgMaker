/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002de74 */

undefined8 FUN_14002de74(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_14002525c(param_2);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_140025269(param_2);
    if (bVar1) {
      uVar3 = DAT_1400eddb8;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar3 = DAT_1400e66d0;
      }
    }
    else {
      uVar3 = DAT_1400eddd8;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar3 = DAT_1400edd30;
      }
    }
    return uVar3;
  }
  uVar3 = FUN_14001b88c(param_2);
  return uVar3;
}

