/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010014e */

void FUN_18010014e(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  local_48 = param_3;
  iVar2 = FUN_1800feb7f(0,0,param_2,param_3);
  if (iVar2 < 1) goto LAB_180100235;
  iVar1 = param_1[1];
  iVar6 = *param_1 + (uint)(*param_1 == 0);
  iVar4 = iVar6 + iVar2;
  if (iVar4 < iVar1) {
LAB_1801001ba:
    if (iVar1 < iVar4) {
      if (iVar1 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar1 / 2 + iVar1;
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      goto LAB_1801001e7;
    }
    lVar3 = *(longlong *)(param_1 + 2);
  }
  else {
    iVar5 = iVar1 * 2;
    if (iVar1 * 2 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 <= iVar1) goto LAB_1801001ba;
LAB_1801001e7:
    lVar3 = FUN_1800fe7f8((longlong)iVar5);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar3;
    param_1[1] = iVar5;
  }
  *param_1 = iVar4;
  FUN_1800feb7f(lVar3 + iVar6 + -1,iVar2 + 1,param_2,local_50);
LAB_180100235:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

