/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140158d17 */

int FUN_140158d17(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_3c = 0;
  if (*param_4 != 0) {
    FUN_140128b39(param_3);
    *param_4 = 0;
  }
  if ((param_2 == 0) ||
     (param_2 = param_2 - (*(char *)(param_1 + -1 + (ulonglong)param_2) == '\0'), param_2 == 0)) {
LAB_140158dc0:
    iVar1 = 0;
    lVar2 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2;
    uVar3 = 0;
    do {
      if (*(char *)(param_1 + uVar3) < ' ') goto LAB_140158dc0;
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
    lVar2 = FUN_14012afda(param_3,param_2 + 1,&local_3c);
    iVar1 = local_3c;
    if (local_3c == 0) {
      FUN_1401c5180(lVar2,param_1,uVar4);
      *(undefined1 *)(lVar2 + uVar4) = 0;
      iVar1 = local_3c;
    }
  }
  *param_4 = lVar2;
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
  }
  return iVar1;
}

