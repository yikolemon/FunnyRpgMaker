/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7905 */

void FUN_1400a7905(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_140f2a910;
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x2200);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_1 == *(longlong *)(lVar3 + 0x418)) goto LAB_1400a7999;
    lVar3 = *(longlong *)(lVar3 + 0x48);
  }
  FUN_14008076e();
  FUN_140095213();
  FUN_140082057(param_1,0);
  FUN_140081404(param_1,1);
  lVar1 = *(longlong *)(lVar2 + 0x2200);
  if (*(int *)(lVar1 + 0x450) == 0) {
    FUN_14008a523(lVar1,0);
  }
  if (*(short *)(lVar1 + 0x1b6) == 2) {
    *(undefined4 *)(lVar2 + 0x220c) = 1;
  }
  if ((*(longlong *)(lVar1 + 0x48) != lVar3) && (*(code **)(lVar2 + 0xcf0) != (code *)0x0)) {
    (**(code **)(lVar2 + 0xcf0))();
  }
LAB_1400a7999:
  *(undefined8 *)(lVar2 + 0x23e8) = 0;
  return;
}

