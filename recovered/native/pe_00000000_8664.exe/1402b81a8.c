/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b81a8 */

undefined8 FUN_1402b81a8(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1402bdfc6();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_14027ee8d("ct (checkboxes)",iVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

