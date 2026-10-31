/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013444a */

void FUN_14013444a(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar4 = 0;
    bVar2 = true;
    do {
      bVar5 = bVar2;
      plVar3 = param_1 + lVar4 * 0x113 + 9;
      *plVar3 = 0;
      if ((longlong *)plVar3[1] != plVar3 + 5) {
        FUN_140128b39(lVar1);
        param_1[lVar4 * 0x113 + 10] = 0;
      }
      param_1[lVar4 * 0x113 + 0xb] = 0;
      if ((longlong *)param_1[lVar4 * 0x113 + 0xc] != param_1 + lVar4 * 0x113 + 0xb0) {
        FUN_140128b39(lVar1);
        param_1[lVar4 * 0x113 + 0xc] = 0;
      }
      lVar4 = 1;
      bVar2 = false;
    } while (bVar5);
    if ((longlong *)param_1[6] != param_1 + 0x231) {
      FUN_140128b39(lVar1);
      param_1[6] = 0;
    }
    if ((longlong *)param_1[7] != param_1 + 0x239) {
      FUN_140128b39(lVar1);
      param_1[7] = 0;
    }
    if ((longlong *)param_1[8] != param_1 + 0x23d) {
      FUN_140128b39(lVar1);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    if ((longlong *)param_1[4] != param_1 + 0x241) {
      FUN_140128b39(lVar1);
      param_1[4] = 0;
    }
    param_1[3] = 0;
    *param_1 = 0;
  }
  return;
}

