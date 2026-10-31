/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eed40 */

longlong * FUN_1800eed40(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_3[1];
  if (*(longlong *)(param_2 + 8) != lVar2) {
    do {
      param_3[1] = lVar2 - 1U;
      lVar2 = *(longlong *)
               (*(longlong *)(*param_3 + 8) + (*(longlong *)(*param_3 + 0x10) - 1U & lVar2 - 1U) * 8
               );
      lVar1 = param_4[1];
      param_4[1] = lVar1 - 1U;
      lVar1 = *(longlong *)
               (*(longlong *)(*param_4 + 8) + (*(longlong *)(*param_4 + 0x10) - 1U & lVar1 - 1U) * 8
               );
      FUN_1802a82f0(lVar1,lVar2,0x2018);
      FUN_1800eee0a(lVar1 + 0x2018,lVar2 + 0x2018);
      FUN_1802a82f0(lVar1 + 0x2058,lVar2 + 0x2058,0x1000);
      lVar2 = param_3[1];
    } while (*(longlong *)(param_2 + 8) != lVar2);
  }
  lVar2 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = lVar2;
  return param_1;
}

