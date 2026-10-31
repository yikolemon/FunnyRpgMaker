/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f3e0 */

undefined8 FUN_18027f3e0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_180420ee8;
  if (DAT_180420ee8 == (longlong *)0x0) {
LAB_18027f403:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_180290f00(0,0,*plVar4,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_18027f403;
      lVar3 = _calloc_base((longlong)iVar1);
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_18027f490:
        FUN_180290e40(lVar3);
        goto LAB_18027f403;
      }
      iVar1 = FUN_180290f00(0,0,*plVar4,0xffffffff,lVar3,iVar1);
      if (iVar1 == 0) goto LAB_18027f490;
      thunk_FUN_1802982f4();
      FUN_180290e40();
    }
    uVar2 = 0;
  }
  return uVar2;
}

