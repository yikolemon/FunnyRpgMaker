/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005e75e */

longlong *
FUN_14005e75e(longlong *param_1,longlong param_2,int param_3,int *param_4,char param_5,
             longlong *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  iVar1 = *param_4;
  iVar3 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_14005e7c8:
    uVar4 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  }
  else {
    if (*(char *)((longlong)param_4 + 9) != '\0') {
      param_5 = *(char *)((longlong)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar5 = (iVar1 - param_3) / 2;
      iVar3 = (iVar1 - param_3) - iVar5;
    }
    else {
      if (param_5 != '\x02') {
        iVar3 = 0;
        if (param_5 == '\x01') {
          iVar3 = iVar1 - param_3;
        }
        goto LAB_14005e7c8;
      }
      iVar5 = iVar1 - param_3;
      iVar3 = 0;
    }
    uVar4 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    if (0 < iVar5) {
      uVar2 = iVar5 + 1;
      do {
        FUN_14005b260(&local_58,param_4 + 4,(longlong)(param_4 + 4) + uVar4 * 2);
        uVar2 = uVar2 - 1;
        param_2 = local_50;
      } while (1 < uVar2);
    }
  }
  local_58 = *param_6;
  local_50 = param_6[2] - local_58 >> 1;
  FUN_14005c073(&local_60,param_2);
  if (0 < iVar3) {
    uVar2 = iVar3 + 1;
    do {
      FUN_14005b260(&local_58,param_4 + 4,(longlong)param_4 + uVar4 * 2 + 0x10);
      uVar2 = uVar2 - 1;
      local_60 = local_50;
    } while (1 < uVar2);
  }
  *param_1 = local_60;
  if (DAT_1401c9640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

