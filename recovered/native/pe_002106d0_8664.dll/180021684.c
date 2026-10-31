/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021684 */

longlong FUN_180021684(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = param_2;
  if ((param_4 - param_3 <= param_2 - param_1) && (lVar4 = param_1, param_3 != param_4)) {
    while( true ) {
      lVar4 = 0;
      while (cVar2 = *(char *)(param_3 + lVar4),
            cVar3 = (**(code **)(**(longlong **)(param_5 + 8) + 0x20))
                              (*(longlong **)(param_5 + 8),*(undefined1 *)(param_1 + lVar4)),
            cVar3 == cVar2) {
        lVar1 = param_3 + lVar4;
        lVar4 = lVar4 + 1;
        if (lVar1 + 1 == param_4) {
          return param_1;
        }
      }
      lVar4 = param_2;
      if (param_1 == param_2 - (param_4 - param_3)) break;
      param_1 = param_1 + 1;
    }
  }
  return lVar4;
}

