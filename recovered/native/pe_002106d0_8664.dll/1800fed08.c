/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fed08 */

uint FUN_1800fed08(byte *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 != 0) {
    pbVar2 = param_1 + param_2;
    param_3 = ~param_3;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 >> 8 ^
                *(uint *)(&DAT_1802dd2e0 + (ulonglong)((uint)bVar1 ^ param_3 & 0xff) * 4);
    } while (param_1 < pbVar2);
    param_3 = ~param_3;
  }
  return param_3;
}

