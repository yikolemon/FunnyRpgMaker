/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5d24 */

void FUN_100d5d24(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  FUN_10020b8e(puVar1,param_1[4] + (int)puVar1,0,param_2,param_3 | 0x10,puVar1);
  return;
}

