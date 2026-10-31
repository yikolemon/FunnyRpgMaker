/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095619 */

void FUN_140095619(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_140f2a910;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x2200);
  if (lVar2 != 0) {
    iVar4 = *(int *)(DAT_140f2a910 + 0x2270);
    if (*(int *)(DAT_140f2a910 + 0x21f8) != iVar4) {
      uVar1 = *(undefined4 *)(DAT_140f2a910 + 0x2274);
      *(undefined4 *)(DAT_140f2a910 + 0x23c8) = *(undefined4 *)(DAT_140f2a910 + 0x2208);
      *(int *)(lVar3 + 0x23cc) = iVar4;
      *(undefined4 *)(lVar3 + 0x23d0) = uVar1;
      *(undefined4 *)(lVar3 + 0x23d4) = 0;
      *(undefined1 *)(lVar3 + 0x23d8) = 0;
      *(byte *)(lVar3 + 0x23d9) = (byte)(*(uint *)(lVar3 + 0x2288) >> 0x15) & 1;
    }
    if ((*(byte *)(lVar3 + 0x2acc) & 0x10) != 0) {
      FUN_1400772a6("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n",
                    iVar4,*(undefined4 *)(lVar3 + 0x220c),*(undefined8 *)(lVar2 + 8));
      iVar4 = *(int *)(lVar3 + 0x2270);
    }
    FUN_1400952ab(iVar4,*(undefined4 *)(lVar3 + 0x220c),*(undefined4 *)(lVar3 + 0x2274),
                  lVar3 + 0x2278);
    *(undefined1 *)(lVar3 + 0x21f7) = 1;
    if (*(longlong *)(lVar3 + 0x2298) != -1) {
      *(longlong *)(lVar3 + 0x2258) = *(longlong *)(lVar3 + 0x2298);
    }
    if (*(char *)(lVar3 + 0x2263) == '\x01') {
      FUN_140095213();
      return;
    }
  }
  return;
}

