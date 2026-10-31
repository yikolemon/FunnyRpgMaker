/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004885a */

longlong * FUN_14004885a(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

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
      FUN_1401c5180(lVar1,lVar2,0x2018);
      FUN_140048924(lVar1 + 0x2018,lVar2 + 0x2018);
      FUN_1401c5180(lVar1 + 0x2058,lVar2 + 0x2058,0x1000);
      lVar2 = param_3[1];
    } while (*(longlong *)(param_2 + 8) != lVar2);
  }
  lVar2 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = lVar2;
  return param_1;
}

