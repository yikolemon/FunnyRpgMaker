/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140366b90 */

undefined8 FUN_140366b90(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if (*(char *)(param_2 + 0x114) == '\0') {
    bVar1 = (*(byte *)(param_2 + 0x16) & 4) >> 2;
  }
  FUN_14036618f(param_1,*(undefined8 *)(param_2 + 8),bVar1);
  return param_1;
}

