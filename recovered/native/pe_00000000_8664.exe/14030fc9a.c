/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14030fc9a */

void FUN_14030fc9a(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_1);
  uVar2 = FUN_14030fcc8(sVar1 + 1);
  FUN_1404b97c0(uVar2,param_1,sVar1 + 1);
  return;
}

