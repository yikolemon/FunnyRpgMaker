/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178719 */

ulonglong FUN_180178719(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = (ushort)*(uint *)(param_1 + 0x18);
  uVar2 = uVar2 << 8 | uVar2 >> 8;
  uVar3 = (uVar2 & 0xf0f) << 4 | (uVar2 & 0xf0f0) >> 4;
  uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333) * 4;
  uVar3 = (uVar3 >> 1 & 0x5555) + (uVar3 & 0x5555) * 2;
  lVar1 = 0;
  do {
    lVar6 = lVar1;
    lVar1 = lVar6 + 1;
  } while (*(int *)(param_2 + 0x448 + lVar6 * 4) <= (int)uVar3);
  uVar4 = 0xffffffff;
  if (((lVar6 + 10U < 0x10) &&
      (lVar5 = (ulonglong)*(ushort *)(param_2 + 0x476 + lVar1 * 2) +
               ((ulonglong)(uVar3 >> (7U - (char)lVar1 & 0x1f)) -
               (ulonglong)*(ushort *)(param_2 + 0x412 + lVar1 * 2)), (int)lVar5 < 0x120)) &&
     ((ulonglong)*(byte *)(param_2 + 0x484 + lVar5) - 9 == lVar1)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) >> ((byte)(lVar6 + 10U) & 0x1f);
    *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 0x10) - (int)lVar1) + -9;
    uVar4 = (ulonglong)*(ushort *)(param_2 + 0x5a4 + lVar5 * 2);
  }
  return uVar4;
}

