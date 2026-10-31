/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006ab46 */

undefined8 FUN_18006ab46(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_18006c624();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_18006d9bd("directory_iterator::operator++",iVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

