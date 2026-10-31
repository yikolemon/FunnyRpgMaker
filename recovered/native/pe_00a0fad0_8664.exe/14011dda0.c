/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011dda0 */

uint * FUN_14011dda0(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    pbVar3 = (byte *)(param_3 + *(int *)(param_2 + 0xc));
    *(byte **)(param_1 + 2) = pbVar3;
    bVar1 = (&DAT_1401661f0)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1401661e0)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    *param_1 = uVar2 >> (bVar1 & 0x1f);
    *(byte **)(param_1 + 4) = pbVar3;
    bVar1 = (&DAT_1401661f0)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1401661e0)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[6] = uVar2 >> (bVar1 & 0x1f);
    pbVar4 = pbVar3 + -(longlong)(char)(&DAT_1401661e0)[*pbVar3 & 0xf];
    param_1[7] = *(uint *)(pbVar4 + -4) >> ((&DAT_1401661f0)[*pbVar3 & 0xf] & 0x1f);
    *(byte **)(param_1 + 2) = pbVar4;
    puVar5 = (uint *)(pbVar4 + -(longlong)(char)(&DAT_1401661e0)[*pbVar4 & 0xf]);
    param_1[8] = puVar5[-1] >> ((&DAT_1401661f0)[*pbVar4 & 0xf] & 0x1f);
    *(uint **)(param_1 + 2) = puVar5;
    uVar2 = *puVar5;
    *(uint **)(param_1 + 2) = puVar5 + 1;
    param_1[9] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

