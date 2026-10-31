/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00412cc1 */

byte __cdecl FUN_00412cc1(uint param_1)

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
      if (param_1 < *(uint *)(&DAT_004a9b98 + iVar6)) {
        return bVar2;
      }
      bVar2 = bVar2 ^ 3;
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0);
  }
  else {
    puVar5 = &DAT_004a9858;
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
    bVar3 = (((uint)(puVar5 + -0x12a616) >> 2 & 1) != 0) + 1;
  }
  return bVar3;
}

