/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140008410 */

void FUN_140008410(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  
  FUN_140008482(param_1);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_14000627c(param_1,0x20);
  *(short *)(param_1 + 0x58) = (short)uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_140005d34(param_1,*(uint *)(param_1 + 0x10) | 4,'\0');
  }
  if (param_3 != '\0') {
    FUN_140089550(param_1);
    return;
  }
  return;
}

