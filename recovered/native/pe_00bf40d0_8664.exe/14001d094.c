/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d094 */

void FUN_14001d094(longlong param_1)

{
  uint *puVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    FUN_14001c53d(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98),*(longlong *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

