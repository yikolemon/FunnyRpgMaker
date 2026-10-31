/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d082 */

void __cdecl FUN_0041d082(int param_1)

{
  uint *puVar1;
  
  if ((*(int *)(param_1 + 0x9c) == 0) || ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    FUN_0041c607(*(int *)(*(int *)(param_1 + 4) + 100),*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

