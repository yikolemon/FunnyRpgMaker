/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180238bc6 */

int FUN_180238bc6(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1801ce63e(*param_1,0);
  if (iVar1 == 0) {
    FUN_1802383de(param_1 + 3);
    param_1[0x220] = param_1 + 0x21e;
    param_1[0x21f] = param_1 + 0x21e;
    *(undefined4 *)(param_1 + 0x21e) = 0;
  }
  return iVar1;
}

