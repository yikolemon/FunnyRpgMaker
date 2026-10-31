/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484420 */

void __cdecl FUN_00484420(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    thunk_FUN_00495f00((int *)(param_1 + -8));
    return;
  }
  return;
}

