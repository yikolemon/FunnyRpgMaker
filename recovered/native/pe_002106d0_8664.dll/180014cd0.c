/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180014cd0 */

void FUN_180014cd0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 8) +
            (*(longlong *)(param_1 + 0x10) - 1U & (*(longlong *)(param_1 + 0x18) + lVar3) - 1U) * 8)
  ;
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))
              (plVar2,CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),plVar2 != plVar1))
    ;
    plVar1[7] = 0;
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  *(longlong *)(param_1 + 0x20) = lVar3 + -1;
  if (lVar3 + -1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

