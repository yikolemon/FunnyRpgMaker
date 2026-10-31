/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b5e6 */

void __fastcall FUN_0043b5e6(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(*param_1 + 0x60) + 0x38) == 0x23) {
    iVar1 = (*(code *)param_1[0x7c])(param_1);
  }
  else {
    iVar1 = param_1[0x2d];
  }
  *param_2 = iVar1;
  return;
}

