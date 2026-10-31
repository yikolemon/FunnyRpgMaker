/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007940a */

void FUN_14007940a(int *param_1,undefined8 param_2,undefined8 param_3)

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
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  local_48 = param_3;
  iVar2 = FUN_140077e3b(0,0,param_2,param_3);
  if (iVar2 < 1) goto LAB_1400794f1;
  iVar1 = param_1[1];
  iVar6 = *param_1 + (uint)(*param_1 == 0);
  iVar4 = iVar6 + iVar2;
  if (iVar4 < iVar1) {
LAB_140079476:
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
      goto LAB_1400794a3;
    }
    lVar3 = *(longlong *)(param_1 + 2);
  }
  else {
    iVar5 = iVar1 * 2;
    if (iVar1 * 2 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 <= iVar1) goto LAB_140079476;
LAB_1400794a3:
    lVar3 = FUN_140077ab4((longlong)iVar5);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(lVar3,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar3;
    param_1[1] = iVar5;
  }
  *param_1 = iVar4;
  FUN_140077e3b(lVar3 + iVar6 + -1,iVar2 + 1,param_2,local_50);
LAB_1400794f1:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

