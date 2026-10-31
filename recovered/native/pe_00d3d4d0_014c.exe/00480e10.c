/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480e10 */

uint * __thiscall FUN_00480e10(void *this,uint param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint local_8;
  
  uVar6 = *(uint *)((int)this + 0x10);
  if (0x7fffffff - uVar6 < param_1) {
    FUN_004027e3();
    pcVar3 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar3)();
    return puVar5;
  }
  uVar1 = *(uint *)((int)this + 0x14);
  local_8 = param_1 + uVar6 | 0xf;
  if (local_8 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      local_8 = 0x7fffffff;
    }
    else {
      uVar4 = uVar1 + (uVar1 >> 1);
      if (local_8 < uVar4) {
        local_8 = uVar4;
      }
    }
  }
  else {
    local_8 = 0x7fffffff;
  }
  puVar5 = (uint *)FUN_00481140(this,&local_8);
  if ((0xf < *(uint *)((int)this + 0x14)) && (DAT_004f7b40 != '\0')) {
    guard_check_icall();
  }
  *(uint *)((int)this + 0x10) = param_1 + uVar6;
  *(uint *)((int)this + 0x14) = local_8;
  if (uVar1 < 0x10) {
LAB_00480f19:
    FUN_004878c0(puVar5,this,uVar6);
    *(undefined1 *)(uVar6 + (int)puVar5) = param_3;
    ((undefined1 *)(uVar6 + (int)puVar5))[1] = 0;
  }
  else {
    puVar2 = *(uint **)this;
    FUN_004878c0(puVar5,puVar2,uVar6);
    *(undefined1 *)(uVar6 + (int)puVar5) = param_3;
    ((undefined1 *)(uVar6 + (int)puVar5))[1] = 0;
    puVar7 = puVar2;
    if (0xfff < uVar1 + 1) {
      puVar7 = (uint *)puVar2[-1];
      uVar6 = (int)puVar2 - (int)puVar7;
      if (0x1f < uVar6 - 4) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
        goto LAB_00480f19;
      }
    }
    FUN_0047f280(puVar7);
  }
  *(uint **)this = puVar5;
  if ((0xf < *(uint *)((int)this + 0x14)) && (DAT_004f7b40 != '\0')) {
    guard_check_icall();
  }
  return this;
}

