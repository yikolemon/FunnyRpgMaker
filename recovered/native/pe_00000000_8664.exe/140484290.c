/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140484290 */

void FUN_140484290(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140484220();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
  FUN_1404a2bdc(lVar1,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  FUN_1404a2c14(lVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 8));
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  return;
}

