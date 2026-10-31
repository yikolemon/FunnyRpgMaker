/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180283970 */

/* WARNING: Removing unreachable block (ram,0x000180283b3a) */

undefined8 FUN_180283970(char *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  
  lVar1 = 0;
  do {
    lVar8 = lVar1;
    cVar3 = *param_1;
    if ((cVar3 != (&DAT_18035196c)[lVar8]) && (cVar3 != (&DAT_180351970)[lVar8])) {
      *param_2 = *param_2 + -1;
      if ((cVar3 != '\0') && (*(char *)*param_2 != cVar3)) {
        puVar6 = (undefined4 *)FUN_18027e66c();
        *puVar6 = 0x16;
        FUN_180290a50();
      }
      uVar7 = 7;
      goto LAB_180283b4f;
    }
    cVar3 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar3;
    lVar1 = lVar8 + 1;
  } while (lVar8 + 1 != 3);
  lVar1 = *param_2;
  iVar9 = (int)lVar8 + 0x14;
  *param_2 = lVar1 + -1;
  if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
    piVar5 = (int *)FUN_18027e66c();
    *piVar5 = iVar9;
    FUN_180290a50();
  }
  param_3 = (char *)*param_2;
  cVar3 = *param_3;
  *param_2 = (longlong)(param_3 + 1);
  *param_1 = cVar3;
  pcVar2 = (char *)*param_2;
  if (cVar3 == '(') {
    cVar3 = *pcVar2;
    *param_2 = (longlong)(pcVar2 + 1);
    *param_1 = cVar3;
    cVar3 = FUN_180283b5c(param_1,param_2);
    if (cVar3 != '\0') {
      lVar1 = *param_2;
      cVar3 = *param_1;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_18027e66c();
        *piVar5 = iVar9;
        FUN_180290a50();
      }
      return 5;
    }
    cVar4 = FUN_180283ba4(param_1,param_2);
    cVar3 = *param_1;
    if (cVar4 != '\0') {
      lVar1 = *param_2;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_18027e66c();
        *piVar5 = iVar9;
        FUN_180290a50();
      }
      return 6;
    }
    while (cVar3 != ')') {
      if (cVar3 == '\0') {
        *param_2 = *param_2 + -1;
LAB_180283b4a:
        uVar7 = 4;
LAB_180283b4f:
        *param_1 = '\0';
        *param_2 = (longlong)param_3;
        return uVar7;
      }
      if ((((9 < (byte)(cVar3 - 0x30U)) && (0x19 < (byte)(cVar3 + 0x9fU))) &&
          (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
        *param_2 = *param_2 + -1;
        if (*(char *)*param_2 != cVar3) {
          piVar5 = (int *)FUN_18027e66c();
          *piVar5 = iVar9;
          FUN_180290a50();
        }
        goto LAB_180283b4a;
      }
      cVar3 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      *param_1 = cVar3;
    }
  }
  else {
    *param_2 = (longlong)(pcVar2 + -1);
    if ((cVar3 != '\0') && (pcVar2[-1] != cVar3)) {
      piVar5 = (int *)FUN_18027e66c();
      *piVar5 = iVar9;
      FUN_180290a50();
    }
    *param_1 = '\0';
    *param_2 = (longlong)param_3;
  }
  return 4;
}

