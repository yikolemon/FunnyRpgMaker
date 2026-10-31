/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d543e */

float10 FUN_101d543e(int param_1)

{
  byte bVar1;
  char cVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if (bVar1 == 0) {
    uVar4 = (undefined4)DAT_10308420;
    uVar5 = (undefined4)((ulonglong)DAT_10308420 >> 0x20);
  }
  else {
    uVar4 = (undefined4)DAT_103084d8;
    uVar5 = (undefined4)((ulonglong)DAT_103084d8 >> 0x20);
  }
  cVar2 = FUN_101ca10d(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_101ca0fc(param_1);
    if (cVar2 != '\0') {
      fVar3 = (float10)FUN_101ca119(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                                    *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                                    CONCAT44(uVar5,uVar4),bVar1 ^ 1);
      return fVar3;
    }
  }
  else if (bVar1 == 0) {
    uVar4 = (undefined4)DAT_103084a8;
    uVar5 = (undefined4)((ulonglong)DAT_103084a8 >> 0x20);
  }
  else {
    uVar4 = (undefined4)DAT_103084d8;
    uVar5 = (undefined4)((ulonglong)DAT_103084d8 >> 0x20);
  }
  return (float10)(double)CONCAT44(uVar5,uVar4);
}

