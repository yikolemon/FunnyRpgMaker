/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ab05 */

undefined8 FUN_14007ab05(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 != (int *)0x0) {
      FUN_14001df2d(param_2 + 0x98,param_3);
    }
    uVar1 = 0;
    if (param_4 != (int *)0x0) {
      FUN_14001df78(param_2 + 0x98,*param_4,param_4[1]);
    }
  }
  return uVar1;
}

