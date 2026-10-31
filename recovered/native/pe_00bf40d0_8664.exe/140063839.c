/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063839 */

int FUN_140063839(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStackY_68 [32];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  lVar2 = *param_1;
  lVar3 = FUN_14001c617(param_1[6],1,*(uint *)(param_1 + 2),(uint)param_2,lVar2,&local_2c);
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
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_68)) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
}

