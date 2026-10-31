/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011501c */

undefined8 FUN_14011501c(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_140354cd0;
  if (DAT_140354cd0 == (longlong *)0x0) {
LAB_140115045:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_140121430(0,0,*plVar4,0xffffffff,0,0,0,0);
      if (iVar1 == 0) goto LAB_140115045;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_1401150f0:
        FUN_1401212e0(lVar3);
        goto LAB_140115045;
      }
      iVar1 = FUN_140121430(0,0,*plVar4,0xffffffff,lVar3,iVar1,0,0);
      if (iVar1 == 0) goto LAB_1401150f0;
      thunk_FUN_14012b9f4();
      FUN_1401212e0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

