/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022d6b3 */

ulonglong FUN_18022d6b3(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    FUN_18004187e();
    uVar1 = FUN_1801cd557(param_1 + 0x48,&PTR_FUN_18034d1c0,param_1);
    FUN_18004187e();
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_1801cd557(param_1 + 0x48,&PTR_FUN_18034d1c0,param_1);
  return uVar2;
}

