/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801556c0 */

undefined8 FUN_1801556c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if (*(char *)(param_2 + 0x114) == '\0') {
    bVar1 = (*(byte *)(param_2 + 0x16) & 4) >> 2;
  }
  FUN_180154cbf(param_1,*(undefined8 *)(param_2 + 8),bVar1);
  return param_1;
}

