/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012dc0a */

void FUN_14012dc0a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_14012dc34();
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

