/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ec931 */

byte * __fastcall FUN_101ec931(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 0x310) != 0) {
    uVar5 = 0;
    uVar4 = *(uint *)(param_1 + 0x310);
    do {
      uVar2 = uVar5 + uVar4 >> 1;
      pbVar1 = *(byte **)(*(int *)(param_1 + 0x318) + uVar2 * 4);
      uVar3 = (uint)*pbVar1;
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) {
          return pbVar1 + 2;
        }
        uVar5 = uVar2 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar5 < uVar2);
  }
  return (byte *)0x0;
}

