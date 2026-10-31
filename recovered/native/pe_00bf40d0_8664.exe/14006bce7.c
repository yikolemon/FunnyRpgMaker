/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006bce7 */

void FUN_14006bce7(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    pbVar4 = *(byte **)(param_2 + 2);
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0;
    do {
      if (uVar5 == 0) {
        uVar2 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar5 = 0x80;
      }
      if ((uVar5 & uVar2) != 0) {
        FUN_14006bd3e(param_1,uVar3);
      }
      uVar5 = uVar5 >> 1;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}

