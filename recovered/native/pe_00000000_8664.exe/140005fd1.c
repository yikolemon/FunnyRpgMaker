/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005fd1 */

byte * FUN_140005fd1(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((uint)param_2 < 10) {
    *(byte *)(param_1 + -1) = (byte)param_2 | 0x30;
    return (byte *)(param_1 + -1);
  }
  pbVar2 = (byte *)(param_1 + -1);
  do {
    pbVar1 = pbVar2;
    uVar3 = (uint)param_2;
    uVar4 = param_2 & 0xffffffff;
    param_2 = uVar4 / 100;
    *(undefined2 *)(pbVar1 + -1) =
         *(undefined2 *)(&DAT_1401c8c78 + (ulonglong)(uVar3 + (int)(uVar4 / 100) * -100) * 2);
    pbVar2 = pbVar1 + -2;
  } while (999 < uVar3);
  if (uVar3 < 100) {
    return pbVar1 + -1;
  }
  *pbVar2 = (byte)param_2 | 0x30;
  return pbVar2;
}

