/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079bd3 */

ushort * FUN_140079bd3(longlong param_1,ulonglong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((uint)param_2 < 10) {
    *(ushort *)(param_1 + -2) = (ushort)param_2 | 0x30;
    return (ushort *)(param_1 + -2);
  }
  puVar2 = (ushort *)(param_1 + -2);
  do {
    puVar1 = puVar2;
    uVar3 = (uint)param_2;
    uVar4 = param_2 & 0xffffffff;
    param_2 = uVar4 / 100;
    uVar4 = uVar4 / 100;
    *(undefined4 *)(puVar1 + -1) =
         *(undefined4 *)
          (
          L"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulonglong)(uVar3 + (int)uVar4 * -100) * 2);
    puVar2 = puVar1 + -2;
  } while (999 < uVar3);
  if (uVar3 < 100) {
    return puVar1 + -1;
  }
  *puVar2 = (ushort)uVar4 | 0x30;
  return puVar2;
}

