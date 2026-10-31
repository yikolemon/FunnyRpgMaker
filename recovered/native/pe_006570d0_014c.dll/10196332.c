/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10196332 */

void __thiscall FUN_10196332(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 0xb;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = puVar2;
  puVar1 = param_1 + 10;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  param_1[9] = puVar1;
  *puVar2 = 0;
  *(undefined4 *)param_1[9] = 0;
  return;
}

