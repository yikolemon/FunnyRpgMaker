/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021661e */

ulonglong FUN_18021661e(undefined8 *param_1,char *param_2,int param_3,longlong param_4,
                       undefined4 param_5)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_50 = (char *)*param_1;
  uVar5 = 0;
  pcVar4 = local_50;
  if (param_2 <= local_50) goto LAB_180216709;
  if (*local_50 == '[') {
    cVar6 = ']';
LAB_180216676:
    local_50 = local_50 + 1;
    bVar1 = false;
  }
  else {
    if (*local_50 == '{') {
      cVar6 = '}';
      goto LAB_180216676;
    }
    cVar6 = '\0';
    bVar1 = true;
  }
  uVar5 = 0;
  local_58 = param_1;
  do {
    pcVar4 = local_50;
    param_1 = local_58;
    if ((param_2 <= local_50) ||
       (FUN_1802162b6(&local_50,param_2), pcVar2 = local_50, pcVar4 = local_50, param_1 = local_58,
       param_2 <= local_50)) break;
    if (cVar6 == *local_50) {
      pcVar4 = local_50 + 1;
      break;
    }
    if ((longlong)param_3 <= (longlong)uVar5 && param_4 != 0) break;
    uVar3 = FUN_1802154ad(&local_50,param_2,param_5);
    if (param_4 != 0) {
      *(undefined4 *)(param_4 + uVar5 * 4) = uVar3;
    }
    pcVar4 = local_50;
    param_1 = local_58;
    if (pcVar2 == local_50) {
      uVar5 = 0xffffffff;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (!bVar1);
LAB_180216709:
  *param_1 = pcVar4;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar5 & 0xffffffff;
}

