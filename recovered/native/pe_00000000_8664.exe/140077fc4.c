/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077fc4 */

uint FUN_140077fc4(byte *param_1,longlong param_2,uint param_3)

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
                *(uint *)(&DAT_140210060 + (ulonglong)((uint)bVar1 ^ param_3 & 0xff) * 4);
    } while (param_1 < pbVar2);
    param_3 = ~param_3;
  }
  return param_3;
}

