/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005ffd8 */

ulonglong FUN_14005ffd8(char *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStackY_78 [32];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar2 = *(longlong *)(param_2 + 0x80);
  local_44 = 0;
  lVar3 = thunk_FUN_14001ccd6(param_1,param_2 + 0x98);
  uVar5 = 0;
  if (lVar3 == 0) {
    lVar3 = FUN_14001f231(lVar2,0x18,*(uint *)(param_2 + 0x90),*(uint *)(param_2 + 0x90) + 1,
                          *(longlong *)(param_2 + 0x88),(int *)&local_44);
    *(longlong *)(param_2 + 0x88) = lVar3;
    uVar5 = (ulonglong)local_44;
    if (local_44 == 0) {
      uVar1 = *(uint *)(param_2 + 0x90);
      uVar4 = FUN_140021e43(lVar2,param_1,(int *)&local_44);
      *(undefined8 *)(lVar3 + (ulonglong)uVar1 * 0x18) = uVar4;
      uVar5 = (ulonglong)local_44;
      if (local_44 == 0) {
        lVar3 = lVar3 + (ulonglong)uVar1 * 0x18;
        *(undefined8 *)(lVar3 + 8) = 1;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        uVar5 = FUN_14001cbca(uVar4,(ulonglong)(*(int *)(param_2 + 0x90) + 0x52),
                              (uint *)(param_2 + 0x98),lVar2);
        if ((int)uVar5 == 0) {
          *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
          uVar5 = 0;
        }
      }
    }
  }
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

