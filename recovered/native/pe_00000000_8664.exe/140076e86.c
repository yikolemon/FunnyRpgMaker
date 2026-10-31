/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076e86 */

void FUN_140076e86(longlong param_1,undefined8 param_2,char param_3)

{
  if (*(char *)(param_1 + 0xbe5) != '\x01') {
    return;
  }
  if (param_3 == '\0') {
    FUN_140076be0();
    return;
  }
  FUN_140076be0();
  return;
}

