/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075fa8 */

int * __thiscall FUN_10075fa8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != param_2) {
    if (iVar1 != 0) {
      thunk_FUN_10274120(iVar1);
    }
    *param_1 = 0;
    if (param_2 != 0) {
      iVar1 = FUN_10075fdf(param_2);
      *param_1 = iVar1;
    }
  }
  return param_1;
}

