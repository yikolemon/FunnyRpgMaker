/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a79ac */

void FUN_1400a79ac(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_140f2a910;
  if (param_1 == 0) {
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x2200);
    lVar4 = FUN_1400951ba(lVar2);
    *(longlong *)(lVar3 + 0x2200) = lVar4;
    *(undefined8 *)(lVar3 + 0x2258) = 0xffffffffffffffff;
    if ((lVar2 != 0) && ((*(byte *)(lVar3 + 0x2acc) & 4) != 0)) {
      FUN_1400772a6("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n",
                    *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar4 + 8));
    }
  }
  lVar2 = *(longlong *)(lVar3 + 0x2200);
  iVar1 = *(int *)(lVar2 + 0x450 + (longlong)param_1 * 4);
  if (iVar1 != 0) {
    FUN_1400952ab(iVar1,param_1,0,lVar2 + (longlong)param_1 * 0x10 + 0x458);
    return;
  }
  *(int *)(lVar3 + 0x220c) = param_1;
  FUN_14008a523(lVar2,CONCAT71((int7)(int3)((uint)param_1 >> 8),1));
  return;
}

