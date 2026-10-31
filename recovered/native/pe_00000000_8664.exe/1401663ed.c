/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401663ed */

undefined8 FUN_1401663ed(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar1 = FUN_14016646a();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_14016642d(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

