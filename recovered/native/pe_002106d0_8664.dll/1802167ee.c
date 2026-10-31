/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802167ee */

ulonglong FUN_1802167ee(undefined8 *param_1,char *param_2,int param_3,longlong param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined2 extraout_var;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_50 = (char *)*param_1;
  uVar4 = 0;
  pcVar3 = local_50;
  if (param_2 <= local_50) goto LAB_1802168d4;
  if (*local_50 == '[') {
    cVar5 = ']';
LAB_180216844:
    local_50 = local_50 + 1;
    bVar1 = false;
  }
  else {
    if (*local_50 == '{') {
      cVar5 = '}';
      goto LAB_180216844;
    }
    cVar5 = '\0';
    bVar1 = true;
  }
  uVar4 = 0;
  local_58 = param_1;
  do {
    pcVar3 = local_50;
    param_1 = local_58;
    if ((param_2 <= local_50) ||
       (FUN_1802162b6(&local_50,param_2), pcVar2 = local_50, pcVar3 = local_50, param_1 = local_58,
       param_2 <= local_50)) break;
    if (cVar5 == *local_50) {
      pcVar3 = local_50 + 1;
      break;
    }
    if ((longlong)param_3 <= (longlong)uVar4 && param_4 != 0) break;
    FUN_1802154ad(&local_50,param_2,0);
    if (param_4 != 0) {
      *(undefined2 *)(param_4 + uVar4 * 2) = extraout_var;
    }
    pcVar3 = local_50;
    param_1 = local_58;
    if (pcVar2 == local_50) {
      uVar4 = 0xffffffff;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (!bVar1);
LAB_1802168d4:
  *param_1 = pcVar3;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar4 & 0xffffffff;
}

