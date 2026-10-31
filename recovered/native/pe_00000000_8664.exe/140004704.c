/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004704 */

ulonglong FUN_140004704(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = param_2 >> 0x20;
  lVar1 = 0;
  do {
    uVar2 = param_2;
    uVar3 = *(ulonglong *)(param_1 + lVar1 * 8) ^ uVar2 & 0xffffffff;
    uVar3 = (uVar3 >> 0x1e ^ uVar3) * -0x40a7b892e31b1a47;
    uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
    uVar3 = uVar3 >> 0x1f ^ uVar3;
    uVar4 = (uint)(uVar3 >> 0x20);
    uVar5 = (uint)uVar3;
    param_2 = (ulonglong)
              ((uVar5 << 0x11 | uVar5 >> 0xf) ^ (uint)uVar6 ^ (uVar4 << 0xb | uVar4 >> 0x15) ^ uVar5
              );
    lVar1 = lVar1 + 1;
    uVar6 = uVar2 & 0xffffffff;
  } while (lVar1 != 10);
  return param_2 | uVar2 << 0x20;
}

