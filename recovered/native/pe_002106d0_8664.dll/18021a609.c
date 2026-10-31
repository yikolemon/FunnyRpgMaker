/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a609 */

void FUN_18021a609(longlong param_1)

{
  char cVar1;
  
  if ((*(ulonglong *)(param_1 + 0x18) < 0x11) &&
     (cVar1 = FUN_18021bb6f(param_1,0x11), cVar1 == '\0')) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0x11;
  return;
}

