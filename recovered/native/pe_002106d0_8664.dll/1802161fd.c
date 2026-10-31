/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802161fd */

int FUN_1802161fd(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  local_40 = &local_2c;
  local_48 = lVar2;
  lVar3 = FUN_1801c9c3f(param_1[6],1,(int)param_1[2],param_2 & 0xffffffff);
  *param_1 = lVar3;
  if (local_2c == 0) {
    if (((lVar2 != 0) && (lVar3 != lVar2)) && (0 < (longlong)*(int *)((longlong)param_1 + 0x1c))) {
      plVar4 = (longlong *)param_1[4];
      plVar1 = plVar4 + *(int *)((longlong)param_1 + 0x1c);
      do {
        if (*plVar4 != 0) {
          *plVar4 = (*plVar4 - lVar2) + *param_1;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar1);
    }
    param_1[2] = param_2;
    local_2c = 0;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

