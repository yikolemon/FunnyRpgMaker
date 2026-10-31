/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021bc3d */

void FUN_18021bc3d(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == *(longlong *)(param_1 + 0x18)) {
    cVar1 = FUN_18021bb6f(param_1,lVar2 * 2 + 0x10);
    if (cVar1 == '\0') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  FUN_1802a82f0(lVar2 * *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x30),param_2);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

