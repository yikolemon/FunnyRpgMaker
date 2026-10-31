/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bf3f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1402bf3f0(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

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
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_98;
  uVar4 = *param_2;
  uVar1 = uVar4 + param_2[1];
  if (param_2[1] != 0) {
    do {
      lVar3 = FUN_1402bf5dc(uVar4,uVar1 - uVar4);
      local_70 = uVar4;
      local_68 = lVar3;
      FUN_1402bf54c(&DAT_140628d10,local_60,&local_70);
      cVar2 = FUN_1402bf500(&DAT_140628d10,local_50,&local_70);
      if (cVar2 == '\0') {
        FUN_1402bf54c(param_3,local_60,&local_70);
        cVar2 = FUN_1402bf500(param_3,local_50,&local_70);
        if (cVar2 == '\0') break;
      }
      uVar4 = uVar4 + lVar3;
    } while (uVar4 < uVar1);
  }
  *param_1 = uVar4;
  param_1[1] = uVar1 - uVar4;
  if (ram0x000140613b10 == (local_48 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_98);
}

