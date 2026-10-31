/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c58e8 */

int FUN_101c58e8(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 6;
  if (param_2 != (code *)0x0 && param_1 != (int *)0x0) {
    iVar3 = *param_1;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar3 + 4);
      iVar2 = (*param_2)(iVar3,param_3);
      iVar3 = iVar1;
    } while (iVar2 == 0);
  }
  return iVar2;
}

