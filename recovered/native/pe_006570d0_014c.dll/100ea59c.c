/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea59c */

int * __thiscall FUN_100ea59c(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
      param_1[9] = 0;
    }
    FUN_1004d262(param_2);
  }
  return param_1;
}

