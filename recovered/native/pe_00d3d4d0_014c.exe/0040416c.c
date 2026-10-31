/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040416c */

void __thiscall FUN_0040416c(void *this,uint param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = param_1 - *(uint *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x10) <= param_1 && uVar1 != 0) {
    FUN_00404328(this,uVar1,param_2);
    return;
  }
  *(uint *)((int)this + 0x10) = param_1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  *(undefined1 *)((int)this + param_1) = 0;
  return;
}

