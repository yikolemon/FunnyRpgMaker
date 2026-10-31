/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105538 */

void FUN_140105538(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  
  local_28 = 0;
  do {
    if (*(longlong *)(param_1 + 0x78 + local_28) != 0) {
      FUN_140077b90();
    }
    local_28 = local_28 + -0x30;
  } while (local_28 != -0x60);
  lVar1 = 0x10;
  do {
    if (*(longlong *)(param_1 + 8 + lVar1) != 0) {
      FUN_140077b90();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return;
}

