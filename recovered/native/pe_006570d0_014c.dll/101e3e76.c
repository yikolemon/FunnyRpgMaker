/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3e76 */

void __fastcall FUN_101e3e76(int *param_1,int *param_2)

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

