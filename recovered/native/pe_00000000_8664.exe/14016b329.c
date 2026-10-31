/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016b329 */

void FUN_14016b329(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == *(longlong *)(param_1 + 0x18)) {
    cVar1 = FUN_14016b25b(param_1,lVar2 * 2 + 0x10);
    if (cVar1 == '\0') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  FUN_1401c5180(lVar2 * *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x30),param_2);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

