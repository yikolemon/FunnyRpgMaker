/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140059b16 */

void FUN_140059b16(longlong param_1,undefined8 param_2,char param_3)

{
  undefined2 uVar1;
  
  FUN_1400134ee();
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_140059b78(param_1,0x20);
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_140013624(param_1,*(uint *)(param_1 + 0x10) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_140188ef0(param_1);
    return;
  }
  return;
}

