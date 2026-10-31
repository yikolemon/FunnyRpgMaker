/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134766 */

byte * FUN_10134766(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)FUN_1013daa2(param_1);
  pbVar3 = param_2;
  if (param_1 < pbVar2) {
    bVar4 = false;
    do {
      bVar1 = *param_1;
      if ((bVar4) ||
         ((9 < (byte)(bVar1 - 0x30) &&
          ((0xb < bVar1 - 0x23 || ((0x901U >> (bVar1 - 0x23 & 0x1f) & 1) == 0)))))) {
        bVar4 = (bool)(bVar4 | (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a);
        if (((bVar1 != 0x24) && (bVar1 != 0x27)) && (bVar1 != 0x5f)) {
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
        }
      }
      else {
        bVar4 = false;
      }
      param_1 = param_1 + 1;
    } while (param_1 != pbVar2);
  }
  *pbVar3 = 0;
  return param_2;
}

