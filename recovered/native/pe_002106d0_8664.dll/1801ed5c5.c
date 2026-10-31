/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ed5c5 */

void FUN_1801ed5c5(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1801f89ed(param_1,param_2[2],*param_2,param_1 + 0x1a0);
  if (cVar1 != '\0') {
    return;
  }
  FUN_1801f68e0(param_1);
  return;
}

