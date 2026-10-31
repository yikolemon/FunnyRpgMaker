/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fed39 */

uint FUN_1800fed39(byte *param_1,ulonglong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  param_3 = ~param_3;
  uVar2 = param_3;
  if (param_2 == 0) {
    bVar1 = *param_1;
    while (bVar1 != 0) {
      pbVar3 = param_1 + 1;
      if (((bVar1 == 0x23) && (*pbVar3 == 0x23)) && (param_1[2] == 0x23)) {
        pbVar3 = param_1 + 3;
        uVar2 = param_3;
      }
      else {
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_1802dd2e0 + (ulonglong)(uVar2 & 0xff ^ (uint)bVar1) * 4)
        ;
      }
      param_1 = pbVar3;
      bVar1 = *pbVar3;
    }
  }
  else {
    do {
      uVar4 = param_2 - 1;
      pbVar3 = param_1 + 1;
      if (((uVar4 < 2 || *param_1 != 0x23) || (*pbVar3 != 0x23)) || (param_1[2] != 0x23)) {
        uVar2 = uVar2 >> 8 ^
                *(uint *)(&DAT_1802dd2e0 + (ulonglong)(uVar2 & 0xff ^ (uint)*param_1) * 4);
      }
      else {
        pbVar3 = param_1 + 3;
        uVar4 = param_2 - 3;
        uVar2 = param_3;
      }
      param_1 = pbVar3;
      param_2 = uVar4;
    } while (uVar4 != 0);
  }
  return ~uVar2;
}

