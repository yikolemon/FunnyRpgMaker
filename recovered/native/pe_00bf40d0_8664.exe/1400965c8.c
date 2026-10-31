/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400965c8 */

undefined8 FUN_1400965c8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [32];
  undefined8 *puVar4;
  
  puVar4 = DAT_140142e90;
  if (DAT_140142e90 == (undefined8 *)0x0) {
LAB_1400965eb:
    uVar2 = 0xffffffff;
  }
  else {
    for (; (LPCSTR)*puVar4 != (LPCSTR)0x0; puVar4 = puVar4 + 1) {
      iVar1 = FUN_1400a1350(0,0,(LPCSTR)*puVar4,-1,(LPWSTR)0x0,0);
      if (iVar1 == 0) goto LAB_1400965eb;
      pauVar3 = _calloc_base((longlong)iVar1,2);
      if (pauVar3 == (undefined1 (*) [32])0x0) {
        pauVar3 = (undefined1 (*) [32])0x0;
LAB_140096678:
        FUN_1400a1290(pauVar3);
        goto LAB_1400965eb;
      }
      iVar1 = FUN_1400a1350(0,0,(LPCSTR)*puVar4,-1,(LPWSTR)pauVar3,iVar1);
      if (iVar1 == 0) goto LAB_140096678;
      thunk_FUN_1400a9454(pauVar3,0);
      FUN_1400a1290((LPVOID)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

