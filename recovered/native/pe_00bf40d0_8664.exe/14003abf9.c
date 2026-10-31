/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003abf9 */

void FUN_14003abf9(longlong param_1,ushort *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140046021(param_1,param_2[2],*param_2,(undefined4 *)(param_1 + 0x1a0));
  if ((char)uVar1 != '\0') {
    return;
  }
  FUN_140043f14(param_1);
  return;
}

