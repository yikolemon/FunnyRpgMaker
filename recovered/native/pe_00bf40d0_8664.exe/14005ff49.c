/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005ff49 */

int FUN_14005ff49(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  cVar1 = *param_1;
  bVar2 = param_1[cVar1 == '-'];
  if (((byte)(&DAT_1400f97c0)[bVar2 >> 3] >> (bVar2 & 7) & 1) == 0) {
    iVar4 = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + (cVar1 == '-'));
    iVar4 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      if (0xcccccca < iVar4) {
        iVar4 = 0x7fffffff;
        break;
      }
      iVar4 = (uint)(byte)(&DAT_1400f97e0)[(char)bVar2] + iVar4 * 10;
      bVar2 = *pbVar5;
    } while (((byte)(&DAT_1400f97c0)[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0);
  }
  iVar3 = -iVar4;
  if (cVar1 != '-') {
    iVar3 = iVar4;
  }
  return iVar3;
}

