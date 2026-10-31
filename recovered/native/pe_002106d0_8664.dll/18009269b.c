/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009269b */

undefined4 FUN_18009269b(ushort param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(uint *)(param_2 + 4) == 0) {
    return 0;
  }
  uVar4 = 2;
  do {
    bVar1 = *(ushort *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar4 - 2) * 2) <= param_1;
    bVar2 = param_1 <= *(ushort *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar4 - 1) * 2);
    uVar3 = CONCAT31((int3)(uVar4 - 2 >> 8),bVar2 && bVar1);
    if (*(uint *)(param_2 + 4) <= uVar4) {
      return uVar3;
    }
    uVar4 = uVar4 + 2;
  } while (!bVar2 || !bVar1);
  return uVar3;
}

