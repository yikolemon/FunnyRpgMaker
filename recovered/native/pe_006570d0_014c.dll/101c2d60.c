/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2d60 */

undefined4 FUN_101c2d60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar2 = 0x23;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) != 0)) {
      *(int **)(iVar1 + 0x58) = param_1;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x24;
}

