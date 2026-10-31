/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041df36 */

int __cdecl FUN_0041df36(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = FUN_0041f34b(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 4),param_1,param_2);
    return iVar1;
  }
  return 6;
}

