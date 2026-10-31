/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0cca */

uint __thiscall FUN_100a0cca(int param_1,ushort param_2)

{
  uint uVar1;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  if ((uVar1 != 0) && (**(uint **)(param_1 + 0xc) < uVar1)) {
    if (param_2 == 0xffff) {
      **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
      **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -2;
      return 0;
    }
    if ((param_2 == *(ushort *)(uVar1 - 2)) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
      **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
      **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -2;
      *(ushort *)**(undefined4 **)(param_1 + 0x1c) = param_2;
      return (uint)param_2;
    }
  }
  return 0xffffffff;
}

