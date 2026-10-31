/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177505 */

uint FUN_180177505(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  
  pbVar2 = *(byte **)(param_1 + 0xc0);
  pbVar4 = *(byte **)(param_1 + 200);
  if (pbVar2 < pbVar4) {
    *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
    bVar5 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_180176673(param_1);
    pbVar1 = *(byte **)(param_1 + 0xc0);
    pbVar4 = *(byte **)(param_1 + 200);
    pbVar2 = pbVar1 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar2;
    bVar5 = *pbVar1;
  }
  if (pbVar4 <= pbVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar3 = 0;
      goto LAB_18017758a;
    }
    FUN_180176673(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
  }
  *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
  uVar3 = (uint)*pbVar2;
LAB_18017758a:
  return (uint)bVar5 << 8 | uVar3;
}

