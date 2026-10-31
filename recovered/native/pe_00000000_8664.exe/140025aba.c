/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140025aba */

int FUN_140025aba(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140025b07();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    FUN_140026168(param_1,param_2);
    iVar1 = 0;
    do {
      FUN_140026202(param_1,param_2);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_140025b07(param_1,param_2);
    } while (-1 < iVar2);
  }
  return iVar1;
}

