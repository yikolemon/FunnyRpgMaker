/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022eeb6 */

void FUN_14022eeb6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 8) != 6) {
    FUN_140231872(param_1);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    param_2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = *(uint *)(lVar2 + 0x24);
  if (*(uint *)(lVar2 + 0x20) <= uVar3) {
    FUN_1402306f6(lVar2 + 0x20,1);
    uVar3 = *(uint *)(lVar2 + 0x24);
  }
  *(uint *)(lVar2 + 0x24) = uVar3 + 1;
  *(char *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)uVar3) = (char)param_2;
  return;
}

