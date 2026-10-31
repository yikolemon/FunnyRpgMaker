/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6b90 */

undefined8 FUN_1401c6b90(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 **)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 8) = iVar1;
  if ((iVar1 == -0x3ffffffb) || (iVar1 == -0x3fffffe3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

