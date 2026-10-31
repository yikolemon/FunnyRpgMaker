/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040459c */

void __thiscall FUN_0040459c(void *this,undefined1 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_stack_ffffffe8;
  undefined1 local_10;
  
  uVar2 = DAT_0050e8c0 ^ (uint)&stack0xffffffe4;
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    *(uint *)((int)this + 0x10) = uVar1 + 1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(void **)this;
    }
    *(undefined1 *)((int)this + uVar1) = param_1;
    *(undefined1 *)((int)this + uVar1 + 1) = 0;
  }
  else {
    FUN_00404614(this,1,CONCAT31((int3)((uint)in_stack_ffffffe8 >> 8),local_10),param_1);
  }
  if (DAT_0050e8c0 == (uVar2 ^ (uint)&stack0xffffffe4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(uVar2 ^ (uint)&stack0xffffffe4);
}

