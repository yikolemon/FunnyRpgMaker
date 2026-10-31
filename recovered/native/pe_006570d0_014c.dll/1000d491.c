/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d491 */

byte FUN_1000d491(uint param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 < 0x25fd) {
    bVar3 = 1;
    iVar6 = -0x340;
    bVar2 = bVar3;
    do {
      if (param_1 < *(uint *)(&DAT_1028c0a8 + iVar6)) {
        return bVar2;
      }
      bVar2 = bVar2 ^ 3;
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0);
  }
  else {
    puVar5 = &DAT_1028bd68;
    uVar4 = 0xd0;
    do {
      uVar7 = uVar4 >> 1;
      uVar4 = ~uVar7 + uVar4;
      puVar1 = puVar5 + uVar7 + 1;
      if (param_1 < puVar5[uVar7]) {
        uVar4 = uVar7;
        puVar1 = puVar5;
      }
      puVar5 = puVar1;
    } while (0 < (int)uVar4);
    bVar3 = (((uint)(puVar5 + -0x40a2f5a) >> 2 & 1) != 0) + 1;
  }
  return bVar3;
}

