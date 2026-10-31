/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044bab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14044bab0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (*ram0x00014059e0f8)(param_1,8,param_2,param_3,param_4,param_5);
  if (uVar1 == 0) {
    uVar1 = (*_DAT_14059df60)();
    return (ulonglong)uVar1 << 0x20;
  }
  return (ulonglong)uVar1;
}

