/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085a8e */

ulonglong FUN_140085a8e(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140020a41(*param_1,0);
  if ((int)uVar1 == 0) {
    FUN_1400852a6(param_1 + 3);
    param_1[0x220] = (longlong)(param_1 + 0x21e);
    param_1[0x21f] = (longlong)(param_1 + 0x21e);
    *(undefined4 *)(param_1 + 0x21e) = 0;
  }
  return uVar1 & 0xffffffff;
}

