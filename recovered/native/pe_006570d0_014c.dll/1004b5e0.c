/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004b5e0 */

undefined4 FUN_1004b5e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  FUN_1004d2a3(param_1,puVar1,param_2[4] + (int)puVar1);
  return param_1;
}

