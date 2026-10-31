/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075414 */

longlong FUN_180075414(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (iVar1 = FUN_180289cf0(*(longlong *)(param_1 + 0x80),param_2,
                            (ulonglong)(param_2 == 0 && param_3 == 0) << 2), iVar1 == 0)) {
    FUN_180074952(param_1,*(undefined8 *)(param_1 + 0x80),1);
    return param_1;
  }
  return 0;
}

