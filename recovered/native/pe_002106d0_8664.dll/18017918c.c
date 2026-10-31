/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017918c */

uint FUN_18017918c(longlong param_1)

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
      goto LAB_180179214;
    }
    FUN_180176673(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
  }
  *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
  uVar3 = (uint)*pbVar2 << 8;
LAB_180179214:
  return bVar5 | uVar3;
}

