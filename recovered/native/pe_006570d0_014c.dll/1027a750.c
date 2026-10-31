/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a750 */

/* WARNING: Removing unreachable block (ram,0x1027a7f0) */

undefined1 (*) [16] FUN_1027a750(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  bool bVar6;
  bool bVar7;
  
  pauVar5 = (undefined1 (*) [16])0x0;
  pauVar3 = param_1;
  if (DAT_1039d7b4 < 2) {
    do {
      puVar1 = *pauVar3;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 2);
    } while (*(short *)puVar1 != 0);
    do {
      pauVar5 = pauVar3 + -1;
      pauVar3 = (undefined1 (*) [16])(pauVar3[-1] + 0xe);
      if (pauVar3 == param_1) {
        pauVar2 = (undefined1 (*) [16])0x0;
        if (*(ushort *)(*pauVar5 + 0xe) == param_2) {
          pauVar2 = pauVar3;
        }
        return pauVar2;
      }
    } while (*(ushort *)(*pauVar5 + 0xe) != param_2);
    return pauVar3;
  }
  puVar1 = *param_1 + 1;
  while( true ) {
    if (((uint)puVar1 & 0xe) == 0) {
      bVar6 = param_2 != 0;
      if (param_2 != 0) {
        bVar7 = false;
        while( true ) {
          iVar4 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
          if (bVar6) {
            pauVar5 = (undefined1 (*) [16])(*param_1 + iVar4 * 2);
          }
          if (bVar7) break;
          bVar6 = (undefined1 (*) [16])0xffffffef < param_1;
          param_1 = param_1 + 1;
          bVar7 = param_1 == (undefined1 (*) [16])0x0;
        }
        return pauVar5;
      }
      iVar4 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15);
      return (undefined1 (*) [16])(*param_1 + iVar4 * 2);
    }
    if (*(ushort *)*param_1 == param_2) {
      pauVar5 = param_1;
    }
    if (*(ushort *)*param_1 == 0) break;
    puVar1 = *param_1 + 3;
    param_1 = (undefined1 (*) [16])(*param_1 + 2);
  }
  return pauVar5;
}

