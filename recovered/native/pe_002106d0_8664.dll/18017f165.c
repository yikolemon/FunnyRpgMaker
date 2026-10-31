/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f165 */

char FUN_18017f165(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180176664();
  pcVar5 = *(char **)(param_1 + 0xc0);
  pcVar4 = *(char **)(param_1 + 200);
  if (pcVar5 < pcVar4) {
    *(char **)(param_1 + 0xc0) = pcVar5 + 1;
    cVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    cVar6 = '\0';
  }
  else {
    FUN_180176673(param_1);
    pcVar1 = *(char **)(param_1 + 0xc0);
    pcVar4 = *(char **)(param_1 + 200);
    pcVar5 = pcVar1 + 1;
    *(char **)(param_1 + 0xc0) = pcVar5;
    cVar6 = *pcVar1;
  }
  if (pcVar5 < pcVar4) {
LAB_18017f201:
    *(char **)(param_1 + 0xc0) = pcVar5 + 1;
    if ((cVar6 != 'P') || ((byte)(*pcVar5 - 0x37U) < 0xfe)) goto LAB_18017f2db;
    *param_4 = (uint)(*pcVar5 == '6') * 2 + 1;
    puVar3 = *(undefined1 **)(param_1 + 0xc0);
    if (puVar3 < *(undefined1 **)(param_1 + 200)) {
LAB_18017f25e:
      *(undefined1 **)(param_1 + 0xc0) = puVar3 + 1;
      local_31 = *puVar3;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        puVar3 = *(undefined1 **)(param_1 + 0xc0);
        goto LAB_18017f25e;
      }
      local_31 = 0;
    }
    FUN_18017f3d3(param_1,&local_31);
    iVar2 = FUN_18017f512(param_1,&local_31);
    *param_2 = iVar2;
    if (iVar2 == 0) {
LAB_18017f2e5:
      pcVar5 = "invalid width";
    }
    else {
      FUN_18017f3d3(param_1,&local_31);
      iVar2 = FUN_18017f512(param_1,&local_31);
      *param_3 = iVar2;
      if (iVar2 == 0) goto LAB_18017f2e5;
      FUN_18017f3d3(param_1,&local_31);
      iVar2 = FUN_18017f512(param_1,&local_31);
      if (iVar2 < 0x10000) {
        cVar6 = (0xff < iVar2) * '\b' + '\b';
        goto LAB_18017f2f3;
      }
      pcVar5 = "max value > 65535";
    }
    FUN_1801765d0(pcVar5);
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      pcVar5 = *(char **)(param_1 + 0xc0);
      goto LAB_18017f201;
    }
LAB_18017f2db:
    FUN_180176664(param_1);
  }
  cVar6 = '\0';
LAB_18017f2f3:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return cVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

