/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180214f52 */

ulonglong FUN_180214f52(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((int)plVar1[3] < 2) {
    FUN_180215369(plVar1);
  }
  do {
    *(undefined4 *)(plVar1 + 3) = 0;
    uVar2 = FUN_1802153c3();
    if (uVar2 != 0) {
      if (param_2 == (longlong *)0x0) {
        return uVar2;
      }
      lVar3 = ~uVar2 + *plVar1;
      goto LAB_180214fa0;
    }
  } while ((int)plVar1[3] == 2);
  lVar3 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_180214fa0:
    *param_2 = lVar3;
  }
  return uVar2;
}

