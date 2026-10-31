/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005fbf6 */

undefined8
FUN_14005fbf6(byte *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,longlong param_5)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  for (pbVar5 = param_1; bVar1 = *pbVar5, (bVar1 & 0xdf) != 0; pbVar5 = pbVar5 + 1) {
  }
  *pbVar5 = 0;
  ppuVar2 = FUN_14005feed((char *)param_1,param_5);
  if ((ppuVar2 == (undefined **)0x0) || (*(int *)(ppuVar2 + 1) == 1)) {
    *param_3 = param_1;
    pbVar4 = param_1 + param_2;
    if (pbVar5 < pbVar4) {
      do {
        bVar1 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar1 == 0x20);
    }
    else {
      bVar1 = *pbVar5;
    }
    *param_4 = pbVar5 + (bVar1 == 0x22);
    if (pbVar5 + (bVar1 == 0x22) < pbVar4) {
      do {
        *pbVar4 = 0;
        bVar1 = pbVar4[-1];
        pbVar4 = pbVar4 + -1;
      } while (bVar1 == 0x20);
    }
    else {
      bVar1 = *pbVar4;
    }
    uVar3 = 1;
    if (bVar1 == 0x22) {
      *pbVar4 = 0;
    }
  }
  else {
    *pbVar5 = bVar1;
    uVar3 = 0;
  }
  return uVar3;
}

