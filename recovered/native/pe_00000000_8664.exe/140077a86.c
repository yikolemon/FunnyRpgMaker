/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077a86 */

void FUN_140077a86(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_1);
  uVar2 = FUN_140077ab4(sVar1 + 1);
  FUN_1401c5180(uVar2,param_1,sVar1 + 1);
  return;
}

