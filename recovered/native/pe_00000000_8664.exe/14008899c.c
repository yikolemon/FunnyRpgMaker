/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008899c */

void FUN_14008899c(short *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = DAT_140f2a910;
  iVar2 = *(int *)(DAT_140f2a910 + 0x15d8);
  iVar3 = (int)*param_1;
  if (iVar3 < iVar2) {
    do {
      if ((*(byte *)(*(longlong *)(lVar1 + 0x1608) + 0x17) & 1) == 0) {
        FUN_14007a954("Missing End()");
        FUN_140088c18();
      }
      else if ((*(longlong *)(lVar1 + 0x24f8) == 0) ||
              (*(longlong *)(*(longlong *)(lVar1 + 0x24f8) + 0x188) != *(longlong *)(lVar1 + 0x1608)
              )) {
        FUN_14007a954("Missing EndChild()");
        FUN_14008a651();
      }
      else {
        FUN_14007a954("Missing EndTable()");
        FUN_140110400();
      }
      iVar2 = *(int *)(lVar1 + 0x15d8);
      iVar3 = (int)*param_1;
    } while (iVar3 < iVar2);
  }
  if (iVar2 != iVar3) {
    return;
  }
  FUN_14008f4fe(param_1);
  return;
}

