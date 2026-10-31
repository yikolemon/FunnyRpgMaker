/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049c2db */

void __fastcall FUN_0049c2db(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)param_1[1]; puVar1 = puVar1 + 1) {
    FUN_00495f00((LPVOID)*puVar1);
  }
  FUN_00495f00((LPVOID)*param_1);
  return;
}

