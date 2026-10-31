/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019f6b4 */

undefined8 FUN_14019f6b4(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_140f328a0;
  if (DAT_140f328a0 == (longlong *)0x0) {
LAB_14019f6d7:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_1401aeaf0(0,0,*plVar4,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_14019f6d7;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_14019f764:
        FUN_1401aea30(lVar3);
        goto LAB_14019f6d7;
      }
      iVar1 = FUN_1401aeaf0(0,0,*plVar4,0xffffffff,lVar3,iVar1);
      if (iVar1 == 0) goto LAB_14019f764;
      thunk_FUN_1401b8984();
      FUN_1401aea30();
    }
    uVar2 = 0;
  }
  return uVar2;
}

