/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db1a6 */

undefined8 * FUN_1800db1a6(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  FUN_18001bf40();
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  FUN_18001bdf8(param_1,puVar1,param_2[2] + (longlong)puVar1,param_3);
  return param_1;
}

