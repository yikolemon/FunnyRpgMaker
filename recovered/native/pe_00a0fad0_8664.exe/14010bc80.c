/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010bc80 */

void FUN_14010bc80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14010bc10();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
  FUN_140121b5c(lVar1,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  FUN_140121b94(lVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 8));
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  return;
}

