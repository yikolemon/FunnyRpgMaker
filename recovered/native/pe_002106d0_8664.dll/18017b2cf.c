/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017b2cf */

void FUN_18017b2cf(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                  int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (0 < (int)param_5) {
    puVar1 = (undefined1 *)(param_1 + 3);
    uVar3 = 0;
    do {
      iVar2 = (uint)*(byte *)(param_2 + uVar3) * 0x100000;
      iVar5 = *(byte *)(param_4 + uVar3) - 0x80;
      iVar4 = iVar5 * 0x166f00 + iVar2 + 0x80000 >> 0x14;
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      if (0xfe < iVar4) {
        iVar4 = 0xff;
      }
      iVar6 = *(byte *)(param_3 + uVar3) - 0x80;
      iVar5 = (iVar6 * -0x58200 & 0xffff0000U) + iVar5 * -0xb6d00 + iVar2 + 0x80000;
      if (iVar5 >> 0x14 < 1) {
        iVar5 = 0;
      }
      iVar5 = iVar5 >> 0x14;
      if (0xfe < iVar5) {
        iVar5 = 0xff;
      }
      iVar2 = iVar2 + iVar6 * 0x1c5a00 + 0x80000 >> 0x14;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      puVar1[-3] = (char)iVar4;
      puVar1[-2] = (char)iVar5;
      puVar1[-1] = (char)iVar2;
      *puVar1 = 0xff;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + param_6;
    } while (param_5 != uVar3);
  }
  return;
}

