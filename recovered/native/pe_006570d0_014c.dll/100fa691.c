/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa691 */

uint FUN_100fa691(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 != 0) {
    pbVar2 = param_1 + param_2;
    param_3 = ~param_3;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 >> 8 ^ *(uint *)(&DAT_102b7c58 + ((uint)bVar1 ^ param_3 & 0xff) * 4);
    } while (param_1 < pbVar2);
    param_3 = ~param_3;
  }
  return param_3;
}

