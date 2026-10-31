/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012e9d5 */

void FUN_18012e9d5(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_180419160;
  lVar3 = *(longlong *)(DAT_180419160 + 0x2200);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_1 == *(longlong *)(lVar3 + 0x418)) goto LAB_18012ea69;
    lVar3 = *(longlong *)(lVar3 + 0x48);
  }
  FUN_180107456();
  FUN_18011bf57();
  FUN_180108d3f(param_1,0);
  FUN_1801080ec(param_1,1);
  lVar1 = *(longlong *)(lVar2 + 0x2200);
  if (*(int *)(lVar1 + 0x450) == 0) {
    FUN_18011120b(lVar1,0);
  }
  if (*(short *)(lVar1 + 0x1b6) == 2) {
    *(undefined4 *)(lVar2 + 0x220c) = 1;
  }
  if ((*(longlong *)(lVar1 + 0x48) != lVar3) && (*(code **)(lVar2 + 0xcf0) != (code *)0x0)) {
    (**(code **)(lVar2 + 0xcf0))();
  }
LAB_18012ea69:
  *(undefined8 *)(lVar2 + 0x23e8) = 0;
  return;
}

