/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fb00 */

undefined1 FUN_14008fb00(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14008fb4c(param_1,param_3,param_4);
  if (lVar2 == param_2) {
    uVar1 = 1;
  }
  else if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      if (param_1 == lVar2) {
        return 0;
      }
      param_1 = *(longlong *)(param_1 + 0x408);
      uVar1 = 0;
    } while (param_1 != 0);
  }
  return uVar1;
}

