/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f2dd */

undefined4 __cdecl FUN_0041f2dd(int *param_1)

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

