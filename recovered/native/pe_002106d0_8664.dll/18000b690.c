/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000b690 */

undefined8 *
FUN_18000b690(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar1 = *param_4;
  iVar4 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_18000b6fa:
    uVar2 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  }
  else {
    if (*(char *)((longlong)param_4 + 9) != '\0') {
      param_5 = *(char *)((longlong)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar5 = (iVar1 - param_3) / 2;
      iVar4 = (iVar1 - param_3) - iVar5;
    }
    else {
      if (param_5 != '\x02') {
        iVar4 = 0;
        if (param_5 == '\x01') {
          iVar4 = iVar1 - param_3;
        }
        goto LAB_18000b6fa;
      }
      iVar5 = iVar1 - param_3;
      iVar4 = 0;
    }
    uVar2 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    if (0 < iVar5) {
      uVar3 = iVar5 + 1;
      do {
        FUN_180006064(&local_58,(longlong)param_4 + 0xf,(longlong)param_4 + 0xf + uVar2);
        uVar3 = uVar3 - 1;
        param_2 = local_50;
      } while (1 < uVar3);
    }
  }
  FUN_18000b4d2(param_6,&local_58,param_2);
  if (0 < iVar4) {
    uVar3 = iVar4 + 1;
    do {
      FUN_180006064(&local_58,(longlong)param_4 + 0xf,(longlong)param_4 + uVar2 + 0xf);
      uVar3 = uVar3 - 1;
      local_58 = local_50;
    } while (1 < uVar3);
  }
  *param_1 = local_58;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

