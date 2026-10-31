/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021299c */

ulonglong FUN_18021299c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  local_44 = 0;
  lVar3 = thunk_FUN_1801ca2fe(param_1,param_2 + 0x98);
  uVar5 = 0;
  if (lVar3 == 0) {
    local_58 = *(undefined8 *)(param_2 + 0x88);
    local_50 = &local_44;
    lVar3 = FUN_1801cc8d6(uVar2,0x18,*(int *)(param_2 + 0x90),*(int *)(param_2 + 0x90) + 1);
    *(longlong *)(param_2 + 0x88) = lVar3;
    uVar5 = (ulonglong)local_44;
    if (local_44 == 0) {
      uVar1 = *(uint *)(param_2 + 0x90);
      uVar4 = FUN_1801cfa40(uVar2,param_1,&local_44);
      *(undefined8 *)(lVar3 + (ulonglong)uVar1 * 0x18) = uVar4;
      uVar5 = (ulonglong)local_44;
      if (local_44 == 0) {
        lVar3 = lVar3 + (ulonglong)uVar1 * 0x18;
        *(undefined8 *)(lVar3 + 8) = 1;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        uVar5 = FUN_1801ca1f2(uVar4,*(int *)(param_2 + 0x90) + 0x52,param_2 + 0x98,uVar2);
        if ((int)uVar5 == 0) {
          *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
          uVar5 = 0;
        }
      }
    }
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

