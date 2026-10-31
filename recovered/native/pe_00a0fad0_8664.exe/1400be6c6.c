/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400be6c6 */

void FUN_1400be6c6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1400dcef0(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    return;
  }
  FUN_140042c40(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}

