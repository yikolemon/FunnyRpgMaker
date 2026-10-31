/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180286f78 */

longlong FUN_180286f78(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)FUN_18027efcc();
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
         (iVar1 = FUN_1802a0830(lVar3,param_1,uVar5), iVar1 == 0)) {
        return *plVar2 + uVar5 * 2 + 2;
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  return 0;
}

