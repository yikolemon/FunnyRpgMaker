/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bee20 */

longlong * FUN_100bee20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_1022c8e0();
  lVar3 = FUN_1022c8c0();
  if (lVar2 == 24000000) {
    lVar2 = __alldiv((uint)lVar3 * 2,(int)((ulonglong)lVar3 >> 0x20) << 1 | (uint)lVar3 >> 0x1f,3,0)
    ;
    lVar3 = lVar2 + lVar3 * 0x29;
  }
  else if (lVar2 == 10000000) {
    lVar3 = lVar3 * 100;
  }
  else {
    uVar4 = __alldiv(lVar3,lVar2);
    lVar1 = (uVar4 & 0xffffffff) * 1000000000;
    lVar3 = __alldiv((lVar3 - uVar4 * lVar2) * 1000000000,lVar2);
    lVar3 = lVar3 + CONCAT44((int)(uVar4 >> 0x20) * 1000000000 + (int)((ulonglong)lVar1 >> 0x20),
                             (int)lVar1);
  }
  *param_1 = lVar3;
  return param_1;
}

