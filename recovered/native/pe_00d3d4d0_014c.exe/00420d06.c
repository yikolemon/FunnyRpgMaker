/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420d06 */

undefined4 __cdecl FUN_00420d06(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  if (puVar1 < *(undefined1 **)(param_1 + 0x24)) {
    *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
    return CONCAT31((int3)((uint)puVar1 >> 8),*puVar1);
  }
  return 0;
}

