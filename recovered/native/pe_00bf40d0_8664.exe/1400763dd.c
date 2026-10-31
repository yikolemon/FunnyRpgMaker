/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400763dd */

ulonglong FUN_1400763dd(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 auStack_58 [40];
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  iVar3 = *(int *)(param_1 + 0x270);
  uVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,plVar1,&local_30);
  if (((int)uVar4 == 0) && (0x21 < local_30)) {
    uVar4 = FUN_140020a93((longlong)plVar1,0x20);
    local_2c = (uint)uVar4;
    if (local_2c == 0) {
      uVar2 = FUN_140020aa5(plVar1,&local_2c);
      uVar4 = (ulonglong)local_2c;
      if ((local_2c == 0) && (uVar4 = 0, (ushort)(uVar2 - 1) < *(ushort *)(param_1 + 0x174))) {
        if (iVar3 == 0x25000) {
          iVar3 = FUN_140076708(param_1 + 0x358,plVar1,uVar2,local_30 - 0x22);
          uVar4 = CONCAT44(extraout_var_00,iVar3);
        }
        else if (iVar3 == 0x20000) {
          iVar3 = FUN_1400764d7(param_1 + 0x358,plVar1,uVar2,local_30 - 0x22);
          uVar4 = CONCAT44(extraout_var,iVar3);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

