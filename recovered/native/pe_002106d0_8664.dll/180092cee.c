/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180092cee */

longlong FUN_180092cee(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,ulonglong param_6)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  
  if ((param_6 & 0x100) == 0) {
    if (param_2 - param_1 < param_4 - param_3) {
      return param_2;
    }
    lVar4 = thunk_FUN_18023b8c0();
    return lVar4;
  }
  lVar4 = param_2;
  if ((param_4 - param_3 <= param_2 - param_1) && (lVar4 = param_1, param_3 != param_4)) {
    while( true ) {
      lVar4 = 0;
      while (sVar2 = *(short *)(param_3 + lVar4),
            sVar3 = (**(code **)(**(longlong **)(param_5 + 8) + 0x40))
                              (*(longlong **)(param_5 + 8),*(undefined2 *)(param_1 + lVar4)),
            sVar3 == sVar2) {
        lVar1 = param_3 + lVar4;
        lVar4 = lVar4 + 2;
        if (lVar1 + 2 == param_4) {
          return param_1;
        }
      }
      lVar4 = param_2;
      if (param_1 == param_2 - (param_4 - param_3)) break;
      param_1 = param_1 + 2;
    }
  }
  return lVar4;
}

