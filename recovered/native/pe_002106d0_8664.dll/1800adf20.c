/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800adf20 */

ulonglong * FUN_1800adf20(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar4 = *param_2;
  uVar1 = uVar4 + param_2[1];
  if (param_2[1] != 0) {
    do {
      lVar3 = FUN_1800ae10c(uVar4,uVar1 - uVar4);
      local_70 = uVar4;
      local_68 = lVar3;
      FUN_1800ae07c(&DAT_180417840,local_60,&local_70);
      cVar2 = FUN_1800ae030(&DAT_180417840,local_50,&local_70);
      if (cVar2 == '\0') {
        FUN_1800ae07c(param_3,local_60,&local_70);
        cVar2 = FUN_1800ae030(param_3,local_50,&local_70);
        if (cVar2 == '\0') break;
      }
      uVar4 = uVar4 + lVar3;
    } while (uVar4 < uVar1);
  }
  *param_1 = uVar4;
  param_1[1] = uVar1 - uVar4;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
}

