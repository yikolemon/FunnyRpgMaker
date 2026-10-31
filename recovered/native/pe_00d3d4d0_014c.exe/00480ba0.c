/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480ba0 */

void __thiscall FUN_00480ba0(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  *(undefined4 **)((int)this + 0xc) = (undefined4 *)((int)this + 4);
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(undefined1 *)((int)this + 0x3e) = 0;
  *(undefined4 **)((int)this + 0x20) = (undefined4 *)((int)this + 0x18);
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x24);
  *(undefined4 **)((int)this + 0x30) = (undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  uVar1 = DAT_0051bbc8;
  *(undefined4 *)((int)this + 0x40) = DAT_0051bbc4;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  return;
}

