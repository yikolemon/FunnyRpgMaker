/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f302 */

int __cdecl FUN_0041f302(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x94);
    if (param_3 != (int *)0x0) {
      if (*param_3 != 0) {
        iVar2 = *(int *)(*param_3 + 4);
      }
      *param_3 = 0;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = *(int *)(iVar2 + 8);
      if (*(int *)(iVar1 + 0x10) == param_2) {
        if (param_3 == (int *)0x0) {
          return iVar1;
        }
        *param_3 = iVar2;
        return iVar1;
      }
    }
  }
  return 0;
}

