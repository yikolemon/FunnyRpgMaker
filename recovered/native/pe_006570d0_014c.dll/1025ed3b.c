/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ed3b */

void FUN_1025ed3b(byte *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  
  param_2 = (int *)*param_2;
  bVar2 = *param_1;
  if (*(char *)((uint)bVar2 + param_2[0x25]) != 'e') {
    do {
      param_1 = param_1 + 1;
      bVar2 = *param_1;
    } while ((*(byte *)(*param_2 + (uint)bVar2 * 2) & 4) != 0);
  }
  bVar4 = *(char *)((uint)bVar2 + param_2[0x25]) == 'x';
  if (bVar4) {
    bVar2 = param_1[2];
  }
  pbVar3 = param_1 + 2;
  if (!bVar4) {
    pbVar3 = param_1;
  }
  *pbVar3 = **(byte **)param_2[0x22];
  do {
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
    *pbVar3 = bVar2;
    bVar4 = bVar2 != 0;
    bVar2 = bVar1;
  } while (bVar4);
  return;
}

