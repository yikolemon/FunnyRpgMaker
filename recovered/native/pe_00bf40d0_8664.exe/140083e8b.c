/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140083e8b */

ulonglong FUN_140083e8b(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140020a41(*param_1,*(uint *)(param_1 + 0xe));
  if ((int)uVar1 == 0) {
    FUN_140083fc4((longlong)(param_1 + 3));
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x74;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[5] = (longlong)param_1 + 0x1074;
    param_1[0x410] = (longlong)param_1 + 0x2074;
    param_1[0x40f] = (longlong)param_1 + 0x2074;
    *(undefined4 *)((longlong)param_1 + 0x2074) = 0;
  }
  return uVar1 & 0xffffffff;
}

