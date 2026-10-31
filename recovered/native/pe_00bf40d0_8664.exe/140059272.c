/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140059272 */

void FUN_140059272(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  FUN_14001f607((longlong *)param_1[8]);
  uVar4 = FUN_14001f06f(*(longlong *)(lVar1 + 0x2b8),(ulonglong)param_2);
  if ((int)uVar4 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x18);
    lVar3 = *(longlong *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(lVar1 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x2c) = uVar4;
    param_1[3] = lVar2;
    param_1[4] = lVar3;
  }
  return;
}

