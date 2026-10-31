/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10261594 */

int __thiscall FUN_10261594(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10288e30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)(param_1 + 8);
  if (*(char *)(iVar7 + 0x14) == '\0') {
    FUN_1025ec50(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  }
  puVar1 = *(undefined4 **)(iVar7 + 0xc);
  pcVar6 = *(char **)(param_1 + 0x30);
  iVar7 = 0;
  if (puVar1[2] == 0xfde9) {
    if (0 < param_2) {
      do {
        if (*pcVar6 == '\0') {
          ExceptionList = local_10;
          return iVar7;
        }
        iVar2 = FUN_10278277(pcVar6);
        iVar4 = 1;
        if (iVar2 - 1U < 4) {
          iVar4 = iVar2;
        }
        iVar3 = iVar7 + 1;
        if (iVar2 != 4) {
          iVar3 = iVar7;
        }
        pcVar6 = pcVar6 + iVar4;
        iVar7 = iVar3 + 1;
      } while (iVar7 < param_2);
    }
  }
  else if (0 < param_2) {
    do {
      if (*pcVar6 == '\0') {
        ExceptionList = local_10;
        return iVar7;
      }
      iVar4 = ___acrt_locale_get_ctype_array_value(*puVar1,*pcVar6,0x8000);
      pcVar5 = pcVar6 + 1;
      if (iVar4 == 0) {
        pcVar5 = pcVar6;
      }
      iVar7 = iVar7 + 1;
      pcVar6 = pcVar5 + 1;
    } while (iVar7 < param_2);
  }
  ExceptionList = local_10;
  return iVar7;
}

