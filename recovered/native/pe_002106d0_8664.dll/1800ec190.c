/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ec190 */

void Unwind_1800ec190(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x236);
  *(char *)(param_2 + 0x234) = cVar1;
  if (cVar1 == '\x01') {
    FUN_180060538(param_2 + 0x1e8);
  }
  *(char *)(param_2 + 0x234) = cVar1;
  return;
}

