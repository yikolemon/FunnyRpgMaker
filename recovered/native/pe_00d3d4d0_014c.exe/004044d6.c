/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004044d6 */

uint * __thiscall FUN_004044d6(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 ^ 0x7fffffff) < param_1) {
    FUN_004027e3();
LAB_00404599:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar7 = param_1 + uVar1;
  uVar2 = *(uint *)((int)this + 0x14);
  uVar5 = 0x7fffffff;
  if ((-1 < (int)uVar7) && (uVar2 <= (uVar2 >> 1 ^ 0x7fffffff))) {
    uVar5 = (uVar2 >> 1) + uVar2;
    if (uVar5 < (uVar7 | 0xf)) {
      uVar5 = uVar7 | 0xf;
    }
  }
  puVar6 = (uint *)FUN_004027ed(uVar5 + 1);
  *(uint *)((int)this + 0x10) = uVar7;
  *(uint *)((int)this + 0x14) = uVar5;
  if (uVar2 < 0x10) {
    FUN_004878c0(puVar6,this,uVar1 + 1);
  }
  else {
    puVar3 = *(uint **)this;
    FUN_004878c0(puVar6,puVar3,uVar1 + 1);
    puVar8 = puVar3;
    if ((0xfff < uVar2 + 1) &&
       (puVar8 = (uint *)puVar3[-1], 0x1f < (uint)((int)puVar3 + (-4 - (int)puVar8))))
    goto LAB_00404599;
    FUN_0047f280(puVar8);
  }
  *(uint **)this = puVar6;
  return this;
}

