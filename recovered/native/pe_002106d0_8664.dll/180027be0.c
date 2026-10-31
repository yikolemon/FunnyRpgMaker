/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180027be0 */

undefined8 * FUN_180027be0(undefined8 *param_1,longlong *param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [40];
  byte *local_50;
  ulonglong *local_48;
  int local_40;
  longlong *local_38;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar2 = param_2[1];
  uVar3 = lVar2 + 1;
  local_29 = param_3;
  if ((ulonglong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)(*param_2 + lVar2) = 0x27;
  bVar1 = 1;
  if ((((0x1f < param_3) && (param_3 != 0x22)) && (param_3 != 0x5c)) && (param_3 != 0x7f)) {
    bVar1 = FUN_180027f00((int)(char)param_3);
    bVar1 = bVar1 ^ 1;
  }
  if ((param_3 == 0x27) || ((param_3 != 0x22 & bVar1) != 0)) {
    local_50 = &local_29;
    local_48 = &local_28;
    local_40 = (int)(char)param_3;
    FUN_180027d22(&local_38,param_2);
    param_2 = local_38;
  }
  else {
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + lVar2) = param_3;
  }
  lVar2 = param_2[1];
  uVar3 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)(*param_2 + lVar2) = 0x27;
  *param_1 = param_2;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}

