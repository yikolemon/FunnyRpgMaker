/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402780 */

ulonglong __thiscall FUN_00402780(void *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (-1 < (int)param_2) {
    uVar2 = 0xf;
    puVar1 = this;
    if (0xf < param_2) {
      uVar2 = 0x16;
      if (0x16 < (param_2 | 0xf)) {
        uVar2 = param_2 | 0xf;
      }
      puVar1 = (uint *)FUN_004027ed(uVar2 + 1);
      *(uint **)this = puVar1;
    }
    *(uint *)((int)this + 0x10) = param_2;
    *(uint *)((int)this + 0x14) = uVar2;
    uVar3 = FUN_004878c0(puVar1,param_1,param_2);
    *(undefined1 *)((int)puVar1 + param_2) = 0;
    return uVar3;
  }
  uVar3 = FUN_004027e3();
  return uVar3;
}

