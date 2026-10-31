/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a6cd8 */

undefined8 FUN_1800a6cd8(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1800acaf6();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_18006d9bd("recursive_directory_iterator::operator++",iVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

