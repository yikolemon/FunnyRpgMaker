/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003abba */

void FUN_14003abba(longlong param_1,ushort *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140046021(param_1,param_2[2],*param_2,(undefined4 *)(param_1 + 0x19c));
  if ((char)uVar1 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x19c);
  FUN_140043f14(param_1);
  return;
}

