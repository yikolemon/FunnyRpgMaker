/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013280c */

void FUN_14013280c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_140131e22(*(undefined8 *)(param_1 + 0x30));
  if (cVar1 != '\0') {
    FUN_140132867(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_14013292c(param_1,param_2,param_4,param_5);
  return;
}

