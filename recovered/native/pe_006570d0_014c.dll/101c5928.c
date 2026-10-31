/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5928 */

void FUN_101c5928(int *param_1,code *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0 && param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      if (param_2 != (code *)0x0) {
        (*param_2)(param_3,*(undefined4 *)(iVar2 + 8),param_4);
      }
      FUN_101c0017(param_3,iVar2);
      iVar2 = iVar1;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

