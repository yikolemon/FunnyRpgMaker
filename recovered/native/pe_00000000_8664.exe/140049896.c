/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140049896 */

void FUN_140049896(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0x100) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    FUN_1400498d6(lVar1,*(undefined8 *)(lVar1 + 0x10),param_1 + 0x28,0x100);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return;
}

