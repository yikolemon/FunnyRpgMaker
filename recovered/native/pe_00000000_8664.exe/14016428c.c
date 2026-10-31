/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016428c */

undefined8 FUN_14016428c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar1 = FUN_14016422c();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1401641ef(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

