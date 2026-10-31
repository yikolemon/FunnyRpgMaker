/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015b2d0 */

void FUN_14015b2d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar1 = *param_1;
  FUN_14012bc80(param_1[8]);
  iVar5 = FUN_14012b73b(*(undefined8 *)(lVar1 + 0x2b8),param_2);
  if (iVar5 == 0) {
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

