/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462a6e */

undefined1 __fastcall FUN_00462a6e(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)param_1[3];
  if (puVar1 < (undefined1 *)param_1[2]) {
    param_1[3] = puVar1 + 1;
    return *puVar1;
  }
  FUN_00461f8a((int *)*param_1,0x55);
  return 0;
}

