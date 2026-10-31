/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003f588 */

longlong FUN_14003f588(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (iVar1 = FUN_140117998(*(longlong *)(param_1 + 0x80),param_2,
                            (ulonglong)(param_2 == 0 && param_3 == 0) << 2), iVar1 == 0)) {
    FUN_14003eb56(param_1,*(undefined8 *)(param_1 + 0x80),1);
    return param_1;
  }
  return 0;
}

