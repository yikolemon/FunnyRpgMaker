/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466468 */

void __fastcall FUN_00466468(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    pbVar3 = (byte *)param_2[2];
    uVar5 = 0;
    uVar2 = 0;
    uVar4 = 0;
    do {
      if (uVar2 == 0) {
        uVar4 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        uVar2 = 0x80;
      }
      if ((uVar2 & uVar4) != 0) {
        FUN_004664b2(param_1,uVar5);
      }
      uVar2 = uVar2 >> 1;
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}

