/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102735e0 */

void FUN_102735e0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_10273590;
  local_20 = ExceptionList;
  uVar2 = DAT_10388d00 ^ (uint)&local_20;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_102736b0(uVar2);
    }
  }
  ExceptionList = local_20;
  return;
}

