/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047164d */

uint __thiscall FUN_0047164d(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((void *)(param_1 >> 0x10) < this);
  if (this < (void *)(param_1 & 0xffff)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

