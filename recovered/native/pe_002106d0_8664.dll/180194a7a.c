/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194a7a */

void FUN_180194a7a(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (int)param_3) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar1) = 0;
      *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar1) = (int)lVar2;
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + lVar1) = *(undefined8 *)(param_2 + lVar2 * 8)
      ;
      lVar3 = *(longlong *)(param_1 + 8) + 0x20 + lVar1;
      *(longlong *)(lVar3 + -0x10) = lVar3;
      lVar3 = *(longlong *)(param_1 + 8) + lVar1;
      *(longlong *)(lVar3 + 0x18) = lVar3 + -0x20;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while ((ulonglong)param_3 << 5 != lVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
       *(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x20 + -0x20;
  *(longlong *)(*(longlong *)(param_1 + 8) + -0x10 + (longlong)(int)param_3 * 0x20) =
       *(longlong *)(param_1 + 8);
  return;
}

