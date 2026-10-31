/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00412fb4 */

ushort __thiscall FUN_00412fb4(void *this,uint param_1)

{
  ushort uVar1;
  uint *puVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0x1d9;
  puVar4 = this;
  do {
    uVar6 = uVar7 >> 1;
    uVar7 = ~uVar6 + uVar7;
    puVar2 = puVar4 + uVar6 + 1;
    if (param_1 < puVar4[uVar6]) {
      uVar7 = uVar6;
      puVar2 = puVar4;
    }
    puVar4 = puVar2;
  } while (0 < (int)uVar7);
  if ((int)puVar4 - (int)this == 0) {
    uVar3 = (ushort)CONCAT31((int3)(param_1 >> 8),0xff);
  }
  else {
    iVar5 = (int)puVar4 - (int)this >> 2;
    uVar1 = *(ushort *)((int)this + iVar5 * 2 + 0x762);
    uVar3 = 0xff;
    if (param_1 < (uVar1 & 0xfff) + *(int *)((int)this + iVar5 * 4 + -4)) {
      uVar3 = uVar1 >> 0xc;
    }
  }
  return uVar3;
}

