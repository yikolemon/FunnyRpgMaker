/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d720 */

ushort __thiscall FUN_1000d720(uint *param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0x56a;
  puVar4 = param_1;
  do {
    uVar6 = uVar7 >> 1;
    uVar7 = ~uVar6 + uVar7;
    puVar2 = puVar4 + uVar6 + 1;
    if (param_2 < puVar4[uVar6]) {
      uVar7 = uVar6;
      puVar2 = puVar4;
    }
    puVar4 = puVar2;
  } while (0 < (int)uVar7);
  if ((int)puVar4 - (int)param_1 == 0) {
    uVar3 = 0xff;
  }
  else {
    iVar5 = (int)puVar4 - (int)param_1 >> 2;
    uVar1 = *(ushort *)((int)param_1 + iVar5 * 2 + 0x15a6);
    uVar3 = 0xff;
    if (param_2 < (uVar1 & 0xfff) + param_1[iVar5 + -1]) {
      uVar3 = uVar1 >> 0xc;
    }
  }
  return uVar3;
}

