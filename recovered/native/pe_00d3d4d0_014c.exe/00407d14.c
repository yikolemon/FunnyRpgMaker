/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407d14 */

uint __thiscall FUN_00407d14(void *this,ushort param_1)

{
  uint uVar1;
  
  uVar1 = **(uint **)((int)this + 0x1c);
  if ((uVar1 != 0) && (**(uint **)((int)this + 0xc) < uVar1)) {
    if (param_1 == 0xffff) {
      **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + 1;
      **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + -2;
      return 0;
    }
    if ((param_1 == *(ushort *)(uVar1 - 2)) || ((*(byte *)((int)this + 0x3c) & 2) == 0)) {
      **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + 1;
      **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + -2;
      *(ushort *)**(undefined4 **)((int)this + 0x1c) = param_1;
      return (uint)param_1;
    }
  }
  return 0xffffffff;
}

