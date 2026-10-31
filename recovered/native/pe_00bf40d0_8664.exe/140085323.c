/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085323 */

void FUN_140085323(undefined1 (*param_1) [32])

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1[6] + 0x10);
  FUN_1400852a6((undefined8 *)param_1);
  if (*(undefined1 **)(param_1[3] + 0x10) != param_1[4] + 8) {
    FUN_14001c53d(lVar1,(longlong)*(undefined1 **)(param_1[3] + 0x10));
    *(undefined8 *)(param_1[3] + 0x10) = 0;
  }
  FUN_14001c53d(lVar1,*(longlong *)(param_1[2] + 0x18));
  FUN_1400b3c00(param_1,0,0xd8);
  return;
}

