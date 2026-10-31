/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180074082 */

void FUN_180074082(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  
  FUN_1800740f4();
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_18007417c(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_18007422a(param_1,*(uint *)(param_1 + 0x10) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_18023ee80(param_1);
    return;
  }
  return;
}

