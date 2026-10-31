/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e6a7 */

void FUN_18021e6a7(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    pbVar4 = *(byte **)(param_2 + 2);
    iVar3 = 0;
    uVar5 = 0;
    uVar2 = 0;
    do {
      if (uVar5 == 0) {
        uVar2 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar5 = 0x80;
      }
      if ((uVar5 & uVar2) != 0) {
        FUN_18021e6fe(param_1,iVar3);
      }
      uVar5 = uVar5 >> 1;
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}

