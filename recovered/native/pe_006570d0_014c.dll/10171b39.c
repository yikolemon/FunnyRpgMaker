/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171b39 */

uint __fastcall FUN_10171b39(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = *(byte **)(param_1 + 0xac);
  pbVar3 = *(byte **)(param_1 + 0xb0);
  if (pbVar2 < pbVar3) {
    *(byte **)(param_1 + 0xac) = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10170e8c();
    pbVar1 = *(byte **)(param_1 + 0xac);
    pbVar3 = *(byte **)(param_1 + 0xb0);
    pbVar2 = pbVar1 + 1;
    *(byte **)(param_1 + 0xac) = pbVar2;
    uVar5 = (uint)*pbVar1;
  }
  if (pbVar3 <= pbVar2) {
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar4 = 0;
      goto LAB_10171ba7;
    }
    FUN_10170e8c();
    pbVar2 = *(byte **)(param_1 + 0xac);
  }
  *(byte **)(param_1 + 0xac) = pbVar2 + 1;
  uVar4 = (uint)*pbVar2;
LAB_10171ba7:
  return uVar5 << 8 | uVar4;
}

