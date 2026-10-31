/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ece8 */

void __fastcall FUN_1020ece8(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    pbVar3 = (byte *)param_2[2];
    iVar5 = 0;
    uVar2 = 0;
    uVar4 = 0;
    do {
      if (uVar2 == 0) {
        uVar4 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        uVar2 = 0x80;
      }
      if ((uVar2 & uVar4) != 0) {
        FUN_1020ed32(param_1);
      }
      uVar2 = uVar2 >> 1;
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return;
}

