/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e82cd */

void Unwind_1800e82cd(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x1a6);
  *(char *)(param_2 + 0x1a4) = cVar1;
  if (cVar1 == '\x01') {
    FUN_180060538(param_2 + 0x110);
  }
  *(char *)(param_2 + 0x1a4) = cVar1;
  return;
}

