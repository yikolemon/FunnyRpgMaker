/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401150fc */

undefined8 FUN_1401150fc(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_140354cc8;
  if (DAT_140354cc8 == (longlong *)0x0) {
LAB_14011511f:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_1401213a0(0,0,*plVar4,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_14011511f;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_1401151ac:
        FUN_1401212e0(lVar3);
        goto LAB_14011511f;
      }
      iVar1 = FUN_1401213a0(0,0,*plVar4,0xffffffff,lVar3,iVar1);
      if (iVar1 == 0) goto LAB_1401151ac;
      thunk_FUN_14012bd4c();
      FUN_1401212e0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

