/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017a1a */

byte * FUN_180017a1a(longlong param_1,ulonglong param_2)

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
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulonglong)(uVar3 + (int)(uVar4 / 100) * -100) * 2);
    pbVar2 = pbVar1 + -2;
  } while (999 < uVar3);
  if (uVar3 < 100) {
    return pbVar1 + -1;
  }
  *pbVar2 = (byte)param_2 | 0x30;
  return pbVar2;
}

