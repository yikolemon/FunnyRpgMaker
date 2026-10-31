/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028989e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028989e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*ram0x00014059e220)();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*ram0x00014059dd60)();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    (*ram0x00014059dd60)();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

