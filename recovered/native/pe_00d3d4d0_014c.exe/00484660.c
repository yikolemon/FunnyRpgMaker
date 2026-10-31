/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484660 */

void __fastcall FUN_00484660(int *param_1)

{
  int *piVar1;
  
  if ((*param_1 != 0) && (piVar1 = (int *)(*param_1 + -8), *piVar1 == 0xdddd)) {
    thunk_FUN_00495f00(piVar1);
  }
  return;
}

