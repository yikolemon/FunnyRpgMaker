/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140165d0a */

ulonglong FUN_140165d0a(undefined8 *param_1,char *param_2,int param_3,longlong param_4,
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_50 = (char *)*param_1;
  uVar5 = 0;
  pcVar4 = local_50;
  if (param_2 <= local_50) goto LAB_140165df5;
  if (*local_50 == '[') {
    cVar6 = ']';
LAB_140165d62:
    local_50 = local_50 + 1;
    bVar1 = false;
  }
  else {
    if (*local_50 == '{') {
      cVar6 = '}';
      goto LAB_140165d62;
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
       (FUN_1401659a2(&local_50,param_2), pcVar2 = local_50, pcVar4 = local_50, param_1 = local_58,
       param_2 <= local_50)) break;
    if (cVar6 == *local_50) {
      pcVar4 = local_50 + 1;
      break;
    }
    if ((longlong)param_3 <= (longlong)uVar5 && param_4 != 0) break;
    uVar3 = FUN_140164b99(&local_50,param_2,param_5);
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
LAB_140165df5:
  *param_1 = pcVar4;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar5 & 0xffffffff;
}

