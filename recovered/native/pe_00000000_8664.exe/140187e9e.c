/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187e9e */

int FUN_140187e9e(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_14012d612(*param_1,0);
  if (iVar1 == 0) {
    FUN_1401876b6(param_1 + 3);
    param_1[0x220] = param_1 + 0x21e;
    param_1[0x21f] = param_1 + 0x21e;
    *(undefined4 *)(param_1 + 0x21e) = 0;
  }
  return iVar1;
}

