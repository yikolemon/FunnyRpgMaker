/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002e0f4 */

double FUN_14002e0f4(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  bVar1 = *(byte *)(param_2 + 0x24);
  if (bVar1 == 0) {
    uVar5 = (undefined4)DAT_1400edd30;
    uVar6 = (undefined4)((ulonglong)DAT_1400edd30 >> 0x20);
  }
  else {
    uVar5 = (undefined4)DAT_1400eddd8;
    uVar6 = (undefined4)((ulonglong)DAT_1400eddd8 >> 0x20);
  }
  bVar2 = FUN_140025269(param_2);
  if (bVar2) {
    if (bVar1 == 0) {
      uVar5 = (undefined4)DAT_1400eddb8;
      uVar6 = (undefined4)((ulonglong)DAT_1400eddb8 >> 0x20);
    }
    else {
      uVar5 = (undefined4)DAT_1400eddd8;
      uVar6 = (undefined4)((ulonglong)DAT_1400eddd8 >> 0x20);
    }
  }
  else {
    uVar3 = FUN_14002525c(param_2);
    if ((char)uVar3 != '\0') {
      dVar4 = FUN_140025271(*(double *)(param_2 + 0x60),*(double *)(param_2 + 0x68),
                            (double)CONCAT44(uVar6,uVar5),bVar1 ^ 1);
      return dVar4;
    }
  }
  return (double)CONCAT44(uVar6,uVar5);
}

