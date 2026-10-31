/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140005988 */

undefined8 FUN_140005988(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_140043a64();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_140043b0a("directory_iterator::operator++",iVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

