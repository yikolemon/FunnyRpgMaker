/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266fcc */

undefined4 * __thiscall
FUN_10266fcc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[6] = param_5;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  return param_1;
}

