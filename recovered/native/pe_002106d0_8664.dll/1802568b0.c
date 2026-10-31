/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802568b0 */

ulonglong FUN_1802568b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_180244c90(param_2,param_3,param_4,param_5,param_1 + 0x10);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (ulonglong)(iVar1 != 0);
}

