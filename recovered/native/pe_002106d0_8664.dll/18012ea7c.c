/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012ea7c */

void FUN_18012ea7c(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180419160;
  if (param_1 == 0) {
    lVar2 = *(longlong *)(DAT_180419160 + 0x2200);
    lVar4 = FUN_18011befe(lVar2);
    *(longlong *)(lVar3 + 0x2200) = lVar4;
    *(undefined8 *)(lVar3 + 0x2258) = 0xffffffffffffffff;
    if ((lVar2 != 0) && ((*(byte *)(lVar3 + 0x2acc) & 4) != 0)) {
      FUN_1800fdfea("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n",
                    *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar4 + 8));
    }
  }
  lVar2 = *(longlong *)(lVar3 + 0x2200);
  iVar1 = *(int *)(lVar2 + 0x450 + (longlong)param_1 * 4);
  if (iVar1 != 0) {
    FUN_18011bfef(iVar1,param_1,0,lVar2 + (longlong)param_1 * 0x10 + 0x458);
    return;
  }
  *(int *)(lVar3 + 0x220c) = param_1;
  FUN_18011120b(lVar2,CONCAT71((int7)(int3)((uint)param_1 >> 8),1));
  return;
}

