/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413018 */

char __thiscall FUN_00413018(void *this,uint param_1)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0x9c;
  puVar3 = this;
  do {
    uVar5 = uVar6 >> 1;
    uVar6 = ~uVar5 + uVar6;
    puVar1 = puVar3 + uVar5 + 1;
    if (param_1 < puVar3[uVar5]) {
      uVar6 = uVar5;
      puVar1 = puVar3;
    }
    puVar3 = puVar1;
  } while (0 < (int)uVar6);
  if ((int)puVar3 - (int)this == 0) {
    cVar2 = -1;
  }
  else {
    iVar4 = (int)puVar3 - (int)this >> 2;
    cVar2 = (param_1 <
            (uint)*(ushort *)((int)this + iVar4 * 2 + 0x26e) + *(int *)((int)this + iVar4 * 4 + -4))
            + -1;
  }
  return cVar2;
}

