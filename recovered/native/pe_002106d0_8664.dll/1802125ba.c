/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802125ba */

undefined8
FUN_1802125ba(byte *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  for (pbVar4 = param_1; bVar1 = *pbVar4, (bVar1 & 0xdf) != 0; pbVar4 = pbVar4 + 1) {
  }
  *pbVar4 = 0;
  lVar2 = FUN_1802128b1(param_1,param_5);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 8) == 1)) {
    *param_3 = param_1;
    param_1 = param_1 + param_2;
    if (pbVar4 < param_1) {
      do {
        bVar1 = pbVar4[1];
        pbVar4 = pbVar4 + 1;
      } while (bVar1 == 0x20);
    }
    else {
      bVar1 = *pbVar4;
    }
    *param_4 = pbVar4 + (bVar1 == 0x22);
    if (pbVar4 + (bVar1 == 0x22) < param_1) {
      do {
        *param_1 = 0;
        bVar1 = param_1[-1];
        param_1 = param_1 + -1;
      } while (bVar1 == 0x20);
    }
    else {
      bVar1 = *param_1;
    }
    uVar3 = 1;
    if (bVar1 == 0x22) {
      *param_1 = 0;
    }
  }
  else {
    *pbVar4 = bVar1;
    uVar3 = 0;
  }
  return uVar3;
}

