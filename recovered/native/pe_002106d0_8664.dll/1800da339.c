/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da339 */

void FUN_1800da339(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  FUN_180020ee9(puVar1,param_1[2] + (longlong)puVar1,0,param_2,param_3 | 0x10,puVar1);
  return;
}

