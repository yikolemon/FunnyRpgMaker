/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180030d7a */

undefined8 FUN_180030d7a(int *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  iVar3 = *param_1;
  if (iVar3 != 0) {
    lVar1 = param_3[1];
    uVar2 = lVar1 + 1;
    if ((ulonglong)param_3[2] < uVar2) {
      (*(code *)param_3[3])(param_3);
      lVar1 = param_3[1];
      uVar2 = lVar1 + 1;
    }
    param_3[1] = uVar2;
    *(char *)(*param_3 + lVar1) = (char)(0x202b2d00 >> ((byte)(iVar3 << 3) & 0x1f));
  }
  local_40 = (undefined1)param_1[7];
  local_48 = 1;
  FUN_180031518(&local_38,param_3,*(undefined8 *)(param_1 + 2),param_1[6]);
  iVar3 = param_1[8];
  if (0 < iVar3) {
    do {
      lVar1 = local_38[1];
      uVar2 = lVar1 + 1;
      if ((ulonglong)local_38[2] < uVar2) {
        (*(code *)local_38[3])(local_38);
        lVar1 = local_38[1];
        uVar2 = lVar1 + 1;
      }
      local_38[1] = uVar2;
      *(undefined1 *)(*local_38 + lVar1) = 0x30;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = param_1[9];
  lVar1 = local_38[1];
  uVar2 = lVar1 + 1;
  if ((ulonglong)local_38[2] < uVar2) {
    (*(code *)local_38[3])(local_38);
    lVar1 = local_38[1];
    uVar2 = lVar1 + 1;
  }
  local_38[1] = uVar2;
  *(char *)(*local_38 + lVar1) = (char)iVar3;
  FUN_180029346(param_2,param_1[10],local_38);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

