/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298b70 */

/* WARNING: Removing unreachable block (ram,0x000180298bf7) */
/* WARNING: Removing unreachable block (ram,0x000180298c00) */

undefined1 (*) [16] FUN_180298b70(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  bool bVar7;
  bool bVar8;
  
  pauVar3 = param_1;
  if (DAT_1804039d8 < 2) {
    do {
      puVar1 = *pauVar3;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 2);
    } while (*(short *)puVar1 != 0);
    do {
      pauVar2 = pauVar3 + -1;
      pauVar3 = (undefined1 (*) [16])(pauVar3[-1] + 0xe);
      if (pauVar3 == param_1) {
        pauVar6 = (undefined1 (*) [16])0x0;
        if (*(ushort *)(*pauVar2 + 0xe) == param_2) {
          pauVar6 = pauVar3;
        }
        return pauVar6;
      }
    } while (*(ushort *)(*pauVar2 + 0xe) != param_2);
    return pauVar3;
  }
  pauVar3 = (undefined1 (*) [16])0x0;
  uVar4 = (int)param_1 + 1;
  while( true ) {
    if ((uVar4 & 0xe) == 0) {
      bVar7 = param_2 != 0;
      if (param_2 != 0) {
        bVar8 = false;
        while( true ) {
          iVar5 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
          if (bVar7) {
            pauVar3 = (undefined1 (*) [16])(*param_1 + (longlong)iVar5 * 2);
            pcmpistri(ZEXT216(param_2),*param_1,0x41);
          }
          if (bVar8) break;
          bVar7 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
          param_1 = param_1 + 1;
          bVar8 = param_1 == (undefined1 (*) [16])0x0;
        }
        return pauVar3;
      }
      iVar5 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15);
      return (undefined1 (*) [16])(*param_1 + (longlong)iVar5 * 2);
    }
    if (*(ushort *)*param_1 == param_2) {
      pauVar3 = param_1;
    }
    if (*(ushort *)*param_1 == 0) break;
    uVar4 = (int)param_1 + 3;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
  }
  return pauVar3;
}

