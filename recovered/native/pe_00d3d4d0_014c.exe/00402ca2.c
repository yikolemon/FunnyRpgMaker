/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402ca2 */

void __thiscall FUN_00402ca2(void *this,uint param_1,undefined2 param_2)

{
  uint uVar1;
  
  uVar1 = param_1 - *(uint *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x10) <= param_1 && uVar1 != 0) {
    FUN_00402cd0(this,uVar1,param_2);
    return;
  }
  *(uint *)((int)this + 0x10) = param_1;
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  *(undefined2 *)((int)this + param_1 * 2) = 0;
  return;
}

