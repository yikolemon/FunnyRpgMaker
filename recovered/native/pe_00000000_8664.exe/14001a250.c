/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a250 */

longlong FUN_14001a250(longlong param_1,uint param_2,ulonglong param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = (uint)param_3;
  uVar2 = param_2;
  if (99 < param_2) {
    do {
      uVar3 = (int)param_3 - 2;
      param_3 = (ulonglong)uVar3;
      param_2 = uVar2 / 100;
      *(undefined2 *)(param_1 + param_3) =
           *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)(uVar2 % 100) * 2);
      bVar1 = 9999 < uVar2;
      uVar2 = uVar2 / 100;
    } while (bVar1);
  }
  if (param_2 < 10) {
    uVar4 = (ulonglong)(uVar3 - 1);
    *(byte *)(param_1 + uVar4) = (byte)param_2 | 0x30;
  }
  else {
    uVar4 = (ulonglong)(uVar3 - 2);
    *(undefined2 *)(param_1 + uVar4) = *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)param_2 * 2);
  }
  return param_1 + uVar4;
}

