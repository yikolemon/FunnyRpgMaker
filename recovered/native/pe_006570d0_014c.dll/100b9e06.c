/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9e06 */

int FUN_100b9e06(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    FUN_100b9f36(puVar1,param_1[4]);
    param_3 = param_3 + 0x1c;
    param_1 = param_1 + 6;
  }
  return param_3;
}

