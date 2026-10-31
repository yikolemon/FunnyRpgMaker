/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071dca */

void FUN_140071dca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (*(short *)(param_1 + 0x35a) != 0) {
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined2 *)(param_1 + 0x35a) = 0;
  }
  if (*(short *)(param_1 + 0x35c) != 0) {
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x368));
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined2 *)(param_1 + 0x35c) = 0;
  }
  *(undefined1 *)(param_1 + 0x358) = 0;
  return;
}

