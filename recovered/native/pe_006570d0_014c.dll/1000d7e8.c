/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d7e8 */

char __thiscall FUN_1000d7e8(uint *param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0x9c;
  puVar3 = param_1;
  do {
    uVar5 = uVar6 >> 1;
    uVar6 = ~uVar5 + uVar6;
    puVar1 = puVar3 + uVar5 + 1;
    if (param_2 < puVar3[uVar5]) {
      uVar6 = uVar5;
      puVar1 = puVar3;
    }
    puVar3 = puVar1;
  } while (0 < (int)uVar6);
  if ((int)puVar3 - (int)param_1 == 0) {
    cVar2 = -1;
  }
  else {
    iVar4 = (int)puVar3 - (int)param_1 >> 2;
    cVar2 = (param_2 < (uint)*(ushort *)((int)param_1 + iVar4 * 2 + 0x26e) + param_1[iVar4 + -1]) +
            -1;
  }
  return cVar2;
}

