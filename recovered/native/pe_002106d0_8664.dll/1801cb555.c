/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb555 */

void FUN_1801cb555(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (((param_2 != 0 && param_1 != 0) && (uVar2 = *(ulonglong *)(param_1 + 8), uVar2 != 0)) &&
     (*(ushort *)(param_1 + 2) != 0)) {
    uVar1 = uVar2 + (ulonglong)*(ushort *)(param_1 + 2) * 8;
    do {
      FUN_1801cb5c7(uVar2,param_2);
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}

