/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004857b0 */

void __cdecl FUN_004857b0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_00495f00((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

