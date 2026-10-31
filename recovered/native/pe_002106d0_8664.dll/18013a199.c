/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013a199 */

byte * FUN_18013a199(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)FUN_180141d50();
  pbVar3 = param_2;
  if (param_1 < pbVar2) {
    bVar4 = false;
    do {
      bVar1 = *param_1;
      if ((bVar4) ||
         ((9 < (byte)(bVar1 - 0x30) &&
          ((0x2e < bVar1 || ((0x480800000000U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
        bVar4 = (bool)(bVar4 | (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a);
        if ((0x3b < bVar1 - 0x24) ||
           ((0x800000000000009U >> ((ulonglong)(bVar1 - 0x24) & 0x3f) & 1) == 0)) {
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

