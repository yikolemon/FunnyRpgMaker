/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802348ff */

undefined8 FUN_1802348ff(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  if (((param_1 != (undefined8 *)0x0) && (*(int *)(param_1 + 0xc) == 0x62697473)) &&
     ((*(byte *)(param_1[0x1e] + 8) & 1) == 0)) {
    FUN_180233d68(&local_48);
    uVar1 = FUN_180233d80(*param_1,param_1 + 0xd,&local_48);
    if ((int)uVar1 == 0) {
      param_1[0x11] = local_28;
      param_1[0xf] = local_38;
      param_1[0x10] = uStack_30;
      *(undefined4 *)(param_1 + 0xd) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_44;
      *(undefined4 *)(param_1 + 0xe) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x74) = uStack_3c;
      *(uint *)(param_1[0x1e] + 8) = *(uint *)(param_1[0x1e] + 8) | 1;
      uVar1 = 0;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

