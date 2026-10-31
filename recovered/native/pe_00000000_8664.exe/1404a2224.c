/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2224 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1404a2224(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    uVar1 = (*_DAT_14059df60)();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    (*(code *)s_IsProcessorFeaturePresent_14059e1c0._8_8_)(uVar1);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar2 * 8;
}

