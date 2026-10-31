/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f719 */

void __cdecl FUN_0048f719(uint param_1,int param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(uint *)(param_2 + 0x20) = param_1;
  puVar1 = FUN_0048f6ba(param_1);
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined **)(param_2 + 0x18) = puVar1;
  return;
}

