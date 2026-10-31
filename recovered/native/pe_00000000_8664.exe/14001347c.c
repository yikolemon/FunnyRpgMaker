/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001347c */

void FUN_14001347c(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  
  FUN_1400134ee();
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_140013576(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_140013624(param_1,*(uint *)(param_1 + 0x10) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_140188ef0(param_1);
    return;
  }
  return;
}

