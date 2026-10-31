/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049a725 */

void __cdecl FUN_0049a725(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_00495f00((LPVOID)*param_1);
  }
  return;
}

