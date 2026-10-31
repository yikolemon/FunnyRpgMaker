/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023b3d0 */

longlong FUN_18023b3d0(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char local_140 [280];
  
  if ((DAT_1804039dc & 4) == 0) {
    FUN_1802a89a0(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    lVar3 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (local_140[*(byte *)(param_1 + lVar3)] == '\0') {
      lVar3 = lVar3 + 1;
      if (lVar3 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVar2 = FUN_18023c230(param_2,param_4,DAT_1804039dc >> 5 & 0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_18023c990(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 == 1) {
      FUN_1802a89a0(local_140,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_140[*param_3] = '\x01';
      }
      lVar3 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (local_140[*(byte *)(param_1 + lVar3)] != '\0') {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != param_2);
      return -1;
    }
    lVar4 = FUN_18023be50(param_1,param_2,param_3);
    lVar3 = -1;
    if (lVar4 != param_2 + param_1) {
      lVar3 = lVar4 - param_1;
    }
  }
  return lVar3;
}

