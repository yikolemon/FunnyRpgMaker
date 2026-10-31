/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e128 */

void FUN_14005e128(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 8) != 6) {
    FUN_140060344(param_1);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    param_2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = *(uint *)(lVar2 + 0x24);
  if (*(uint *)(lVar2 + 0x20) <= uVar3) {
    FUN_14005fbda(lVar2 + 0x20,1);
    uVar3 = *(uint *)(lVar2 + 0x24);
  }
  *(uint *)(lVar2 + 0x24) = uVar3 + 1;
  *(short *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)uVar3 * 2) = (short)param_2;
  return;
}

