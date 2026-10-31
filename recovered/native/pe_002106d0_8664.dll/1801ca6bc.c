/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca6bc */

void FUN_1801ca6bc(longlong param_1)

{
  uint *puVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    FUN_1801c9b65(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98),*(undefined8 *)(param_1 + 0x78)
                 );
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

