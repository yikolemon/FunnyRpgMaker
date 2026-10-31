/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a855c */

ushort * FUN_1400a855c(longlong param_1,ulonglong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ulonglong uVar3;
  
  if (param_2 < 10) {
    *(ushort *)(param_1 + -2) = (ushort)param_2 | 0x30;
    puVar1 = (ushort *)(param_1 + -2);
  }
  else {
    puVar1 = (ushort *)(param_1 + -2);
    do {
      uVar3 = param_2;
      puVar2 = puVar1;
      param_2 = uVar3 / 100;
      *(undefined4 *)(puVar2 + -1) =
           *(undefined4 *)
            (
            L"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uint)((int)uVar3 + (int)param_2 * -100) * 2);
      puVar1 = puVar2 + -2;
    } while (999 < uVar3);
    if (uVar3 < 100) {
      puVar1 = puVar2 + -1;
    }
    else {
      *puVar1 = (ushort)param_2 | 0x30;
    }
  }
  return puVar1;
}

