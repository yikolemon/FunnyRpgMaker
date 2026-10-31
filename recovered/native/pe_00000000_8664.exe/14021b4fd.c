/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021b4fd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14021b4fd(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  char *local_50;
  longlong local_48;
  int local_40 [2];
  char local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  FUN_14021ba3f(local_40,param_1,param_2,local_2c);
  uVar2 = 0xffffffff;
  if (local_38 != '\0') {
    uVar2 = local_40[0] - (int)param_1;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c("ne.");
  }
  pcVar4 = param_1 + uVar2;
  if (param_1 + uVar2 == param_2) {
    pcVar4 = param_1;
  }
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '^') {
      uVar3 = 3;
LAB_14021b584:
      if ((longlong)pcVar4 - (longlong)param_1 != 0) {
        if (*param_1 == '{') {
                    /* WARNING: Subroutine does not return */
          FUN_14021738c(
                       "gui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
                       );
        }
        local_50 = param_1;
        local_48 = (longlong)pcVar4 - (longlong)param_1;
        FUN_14021b9e6(param_3);
        param_1 = pcVar4;
      }
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 9) = uVar3;
      break;
    }
    if (cVar1 == '>') {
      uVar3 = 2;
      goto LAB_14021b584;
    }
    if (cVar1 == '<') {
      uVar3 = 1;
      goto LAB_14021b584;
    }
    bVar5 = pcVar4 != param_1;
    pcVar4 = param_1;
  } while (bVar5);
  if (ram0x000140613b10 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_28 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

