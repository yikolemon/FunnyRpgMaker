/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025acd */

longlong FUN_180025acd(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (uint)param_3;
  uVar3 = param_2;
  if (99 < param_2) {
    do {
      uVar2 = (int)param_3 - 2;
      param_3 = (ulonglong)uVar2;
      param_2 = uVar3 / 100;
      *(undefined2 *)(param_1 + param_3) = *(undefined2 *)(&DAT_1802b1ce0 + (uVar3 % 100) * 2);
      bVar1 = 9999 < uVar3;
      uVar3 = param_2;
    } while (bVar1);
  }
  if (param_2 < 10) {
    uVar3 = (ulonglong)(uVar2 - 1);
    *(byte *)(param_1 + uVar3) = (byte)param_2 | 0x30;
  }
  else {
    uVar3 = (ulonglong)(uVar2 - 2);
    *(undefined2 *)(param_1 + uVar3) = *(undefined2 *)(&DAT_1802b1ce0 + param_2 * 2);
  }
  return param_1 + uVar3;
}

