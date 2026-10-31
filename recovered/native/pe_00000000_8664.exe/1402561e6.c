/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402561e6 */

void FUN_1402561e6(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    FUN_140256260(lVar1,*(undefined8 *)(lVar1 + 0x10),param_1 + 0x28);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return;
}

