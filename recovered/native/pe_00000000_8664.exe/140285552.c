/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140285552 */

void FUN_140285552(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  
  FUN_1402855c4();
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_14028564c(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_1402856fa(param_1,*(uint *)(param_1 + 0x10) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_140450350(param_1);
    return;
  }
  return;
}

