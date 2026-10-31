/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a51b8 */

longlong FUN_1401a51b8(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)FUN_14019f2a0();
  if ((plVar2 != (longlong *)0x0) && (param_1 != 0)) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(short *)(param_1 + uVar5 * 2) != 0);
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(short *)(lVar3 + uVar4 * 2) != 0);
      if (((uVar5 < uVar4) && (*(short *)(lVar3 + uVar5 * 2) == 0x3d)) &&
         (iVar1 = FUN_1401bda70(lVar3,param_1,uVar5), iVar1 == 0)) {
        return *plVar2 + uVar5 * 2 + 2;
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  return 0;
}

