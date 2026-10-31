/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007acf3 */

ulonglong FUN_14007acf3(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    FUN_1400074a8();
    uVar1 = FUN_14001f95a((ushort *)(param_1 + 0x48),&PTR_FUN_14010a2f0,param_1);
    FUN_1400074a8();
    return uVar1 & 0xffffffff;
  }
  uVar1 = FUN_14001f95a((ushort *)(param_1 + 0x48),&PTR_FUN_14010a2f0,param_1);
  return uVar1;
}

