/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180052e67 */

byte * FUN_180052e67(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  if (param_2 < 10) {
    *(byte *)(param_1 + -1) = (byte)param_2 | 0x30;
    pbVar1 = (byte *)(param_1 + -1);
  }
  else {
    pbVar1 = (byte *)(param_1 + -1);
    do {
      uVar3 = param_2;
      pbVar2 = pbVar1;
      param_2 = uVar3 / 100;
      *(undefined2 *)(pbVar2 + -1) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uint)((int)uVar3 + (int)param_2 * -100) * 2);
      pbVar1 = pbVar2 + -2;
    } while (999 < uVar3);
    if (uVar3 < 100) {
      pbVar1 = pbVar2 + -1;
    }
    else {
      *pbVar1 = (byte)param_2 | 0x30;
    }
  }
  return pbVar1;
}

