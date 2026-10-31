/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178653 */

void FUN_180178653(longlong *param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 3);
  iVar4 = (int)param_1[2];
  do {
    bVar3 = (byte)iVar4 & 0x1f;
    if (uVar5 >> bVar3 != 0) {
      *param_1 = param_1[1];
      return;
    }
    pbVar1 = (byte *)*param_1;
    uVar6 = 0 >> bVar3;
    if (pbVar1 < (byte *)param_1[1]) {
      *param_1 = (longlong)(pbVar1 + 1);
      uVar6 = (uint)*pbVar1;
    }
    uVar5 = uVar5 | uVar6 << ((byte)iVar4 & 0x1f);
    *(uint *)(param_1 + 3) = uVar5;
    *(int *)(param_1 + 2) = iVar4 + 8;
    bVar2 = iVar4 < 0x11;
    iVar4 = iVar4 + 8;
  } while (bVar2);
  return;
}

