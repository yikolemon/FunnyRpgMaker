/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010deea */

void FUN_14010deea(longlong param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [48];
  undefined4 local_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  int iStack_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  iStack_44 = param_2 * 0x74;
  local_38 = 0;
  uStack_20 = 0;
  iStack_2c = param_2 * 2;
  local_48 = 0;
  uVar2 = param_2 * 0x76 + 3;
  uStack_40 = (ulonglong)uVar2 & 0xfffffffffffffffc;
  local_28 = (ulonglong)(uint)(param_2 * 8);
  iVar3 = (uVar2 & 0xfffffffc) + param_2 * 8;
  uVar2 = param_2 + 0x1f >> 3 & 0xfffffffc;
  lVar4 = 0;
  do {
    *(int *)((longlong)&uStack_40 + lVar4 * 4 + 4) = iVar3;
    *(uint *)((longlong)&local_28 + lVar4 * 4 + 4) = uVar2;
    iVar3 = iVar3 + uVar2;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  iStack_30 = iStack_44;
  uVar1 = FUN_140077ab4((longlong)iVar3);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_1401c5830(uVar1,0,(longlong)iVar3);
  lVar4 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = lVar4;
  *(longlong *)(param_1 + 0x20) = iStack_30 + lVar4;
  *(longlong *)(param_1 + 0x28) = iStack_44 + lVar4;
  *(longlong *)(param_1 + 0x30) = (longlong)iStack_2c + iStack_44 + lVar4;
  *(longlong *)(param_1 + 0x38) = (int)uStack_40 + lVar4;
  *(longlong *)(param_1 + 0x40) = (longlong)(int)local_28 + (int)uStack_40 + lVar4;
  *(longlong *)(param_1 + 0x48) = uStack_40._4_4_ + lVar4;
  *(longlong *)(param_1 + 0x50) = (int)local_38 + lVar4;
  *(longlong *)(param_1 + 0x58) = local_38._4_4_ + lVar4;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_78);
}

