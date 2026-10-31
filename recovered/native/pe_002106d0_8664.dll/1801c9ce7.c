/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9ce7 */

void FUN_1801c9ce7(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20) + (ulonglong)*(ushort *)(param_1 + 0x1a) * 8;
  }
  *(longlong *)(param_1 + 0x68) = lVar1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28) + (ulonglong)*(ushort *)(param_1 + 0x1a);
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x30) + (ulonglong)*(ushort *)(param_1 + 0x18) * 2;
  }
  *(longlong *)(param_1 + 0x78) = lVar1;
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x40) + lVar1;
    *(longlong *)(param_1 + 0x90) = lVar1 + *(longlong *)(param_1 + 0x48);
  }
  return;
}

