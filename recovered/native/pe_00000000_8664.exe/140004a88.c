/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004a88 */

ulonglong FUN_140004a88(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = 9;
  uVar2 = param_2 >> 0x20;
  do {
    uVar1 = uVar2;
    uVar2 = *(ulonglong *)(param_1 + lVar5 * 8) ^ uVar1;
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar4 = (uint)uVar2;
    uVar2 = (ulonglong)
            ((uVar4 << 0x11 | uVar4 >> 0xf) ^ (uint)param_2 ^ (uVar3 << 0xb | uVar3 >> 0x15) ^ uVar4
            );
    bVar6 = lVar5 != 0;
    lVar5 = lVar5 + -1;
    param_2 = uVar1;
  } while (bVar6);
  return uVar2 << 0x20 | uVar1;
}

