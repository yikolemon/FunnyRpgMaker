/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f937 */

undefined4 *
FUN_1001f937(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 *param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_4 != 0) {
    FUN_1001fd02(param_4);
    FUN_1001fc1b(param_2,param_3,*param_1,param_1[1],*param_5);
  }
  return param_1;
}

