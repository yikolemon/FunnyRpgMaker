/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a7769 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407a7769(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((int)param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xb8);
    FUN_14075bad9();
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_14075a0a4(*(undefined4 *)((ulonglong)_DAT_150b44ed5 + 0x14cc));
  return uVar2;
}

