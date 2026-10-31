/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eee4d */

longlong * FUN_1800eee4d(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_2[1];
  if (uVar3 != *(ulonglong *)(param_3 + 8)) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*param_2 + 8) + (*(longlong *)(*param_2 + 0x10) - 1U & uVar3) * 8);
      lVar2 = *(longlong *)
               (*(longlong *)(*param_4 + 8) + (*(longlong *)(*param_4 + 0x10) - 1U & param_4[1]) * 8
               );
      FUN_1802a82f0(lVar2,lVar1,0x2018);
      FUN_1800eee0a(lVar2 + 0x2018,lVar1 + 0x2018);
      FUN_1802a82f0(lVar2 + 0x2058,lVar1 + 0x2058,0x1000);
      param_4[1] = param_4[1] + 1;
      uVar3 = param_2[1] + 1;
      param_2[1] = uVar3;
    } while (uVar3 != *(ulonglong *)(param_3 + 8));
  }
  lVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = lVar1;
  return param_1;
}

