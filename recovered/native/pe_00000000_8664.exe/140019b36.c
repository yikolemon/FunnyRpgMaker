/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019b36 */

void FUN_140019b36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140019bd2();
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_140019ca0(param_1,lVar1,param_4);
    return;
  }
  return;
}

