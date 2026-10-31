/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017cd9f */

ulonglong FUN_14017cd9f(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    FUN_1400151ba();
    uVar1 = FUN_14012c52b(param_1 + 0x48,&PTR_FUN_140eb1530,param_1);
    FUN_1400151ba();
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_14012c52b(param_1 + 0x48,&PTR_FUN_140eb1530,param_1);
  return uVar2;
}

