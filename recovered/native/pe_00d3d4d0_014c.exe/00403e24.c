/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403e24 */

void __thiscall FUN_00403e24(void *this,uint *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (-1 < (int)param_2) {
    if (param_2 < 0x10) {
      *(uint *)((int)this + 0x10) = param_2;
      *(undefined4 *)((int)this + 0x14) = 0xf;
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(uint *)this = *param_1;
      *(uint *)((int)this + 4) = uVar5;
      *(uint *)((int)this + 8) = uVar2;
      *(uint *)((int)this + 0xc) = uVar3;
    }
    else {
      uVar5 = 0x16;
      if (0x16 < (param_2 | 0xf)) {
        uVar5 = param_2 | 0xf;
      }
      puVar4 = (uint *)FUN_004027ed(uVar5 + 1);
      *(uint **)this = puVar4;
      *(uint *)((int)this + 0x10) = param_2;
      *(uint *)((int)this + 0x14) = uVar5;
      FUN_004878c0(puVar4,param_1,param_2 + 1);
    }
    return;
  }
  FUN_004027e3();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

