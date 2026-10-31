/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e2d68 */

void FUN_1801e2d68(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_1801e2736(*(undefined8 *)(param_2 + 0x30));
  if (cVar1 != '\0') {
    FUN_1801e2db2();
    return;
  }
  FUN_1801e3002(param_1,param_2,param_3,param_4);
  return;
}

