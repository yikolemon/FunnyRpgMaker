/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027c016 */

undefined8 FUN_14027c016(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_14027daf4();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_14027ee8d("oxes)",iVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

