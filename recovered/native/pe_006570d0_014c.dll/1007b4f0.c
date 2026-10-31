/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b4f0 */

int __thiscall FUN_1007b4f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  iVar2 = -1;
  if ((uVar1 != 0) && (**(uint **)(param_1 + 0xc) < uVar1)) {
    if (param_2 == -1) {
      **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
      **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
      iVar2 = 0;
    }
    else if ((*(char *)(uVar1 - 1) == (char)param_2) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
      **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
      **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
      *(char *)**(undefined4 **)(param_1 + 0x1c) = (char)param_2;
      iVar2 = param_2;
    }
  }
  return iVar2;
}

