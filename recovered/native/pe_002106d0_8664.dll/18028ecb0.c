/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ecb0 */

undefined8 FUN_18028ecb0(longlong param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_18026e580();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_18026e580();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*(byte *)(param_1 + 4) & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_18026e580();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_18026e5c0();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_18026e580();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_18026e5c0();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*(byte *)(param_1 + 4) & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*(byte *)(param_1 + 4) & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*(byte *)(param_1 + 4) & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}

