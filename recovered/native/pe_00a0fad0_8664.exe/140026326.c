/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026326 */

longlong thunk_FUN_1400db100(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char acStack_140 [280];
  
  if ((DAT_1401ca374 & 4) == 0) {
    FUN_1401366a0(acStack_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      acStack_140[*param_3] = '\x01';
    }
    lVar3 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (acStack_140[*(byte *)(param_1 + lVar3)] != '\0') {
      lVar3 = lVar3 + 1;
      if (lVar3 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVar2 = FUN_1400dbc50(param_2,param_4,DAT_1401ca374 >> 5 & 0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_1400dc190(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 == 1) {
      FUN_1401366a0(acStack_140,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        acStack_140[*param_3] = '\x01';
      }
      lVar3 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (acStack_140[*(byte *)(param_1 + lVar3)] == '\0') {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != param_2);
      return -1;
    }
    lVar4 = FUN_1400dc3c0(param_1,param_2,param_3);
    lVar3 = -1;
    if (lVar4 != param_2 + param_1) {
      lVar3 = lVar4 - param_1;
    }
  }
  return lVar3;
}

