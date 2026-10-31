/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bdca7 */

longlong FUN_1800bdca7(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    FUN_1800bddc6(param_3,puVar1,param_1[2]);
    param_3 = param_3 + 0x20;
    param_1 = param_1 + 4;
  }
  return param_3;
}

