/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf2f4 */

undefined8 *
FUN_1800bf2f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((ulonglong)param_2[4] < 0x10) {
    puVar1 = param_2 + 1;
  }
  else {
    puVar1 = (undefined8 *)param_2[1];
  }
  FUN_1800bf35a(param_1,puVar1,param_2[3],param_4,0xfffffffffffffffe);
  return param_1;
}

