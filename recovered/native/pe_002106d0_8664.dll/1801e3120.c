/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e3120 */

void FUN_1801e3120(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_1801e2736(*(undefined8 *)(param_1 + 0x30));
  if (cVar1 != '\0') {
    FUN_1801e317b(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_1801e3240(param_1,param_2,param_4,param_5);
  return;
}

