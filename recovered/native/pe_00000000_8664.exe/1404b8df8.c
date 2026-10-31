/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b8df8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1404b8df8(ulonglong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = param_1 & 0xffffffff;
  lVar3 = FUN_1404a8b34(param_1,0,1);
  lVar4 = FUN_1404a8b34(uVar9,0,2);
  uVar6 = param_2 - lVar4;
  if ((lVar3 == -1) || (lVar4 == -1)) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVar1 = 0x16;
      goto LAB_1404b8f57;
    }
  }
  else {
    uVar7 = 0;
    if (0 < (longlong)uVar6) {
      lVar4 = _calloc_base(0x1000,1);
      if (lVar4 == 0) {
        uVar7 = 0xc;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xc;
      }
      else {
        uVar1 = FUN_1404b8c7c(param_1 & 0xffffffff,0x8000);
        do {
          uVar8 = uVar6 & 0xffffffff;
          if (0xfff < (longlong)uVar6) {
            uVar8 = 0x1000;
          }
          iVar2 = FUN_1404af2ac(uVar9,lVar4,uVar8,param_3);
          if (iVar2 == -1) {
            if ((*(char *)(param_3 + 0x38) != '\0') && (*(int *)(param_3 + 0x34) == 5)) {
              *(undefined1 *)(param_3 + 0x30) = 1;
              *(undefined4 *)(param_3 + 0x2c) = 0xd;
            }
            if (*(char *)(param_3 + 0x30) != '\0') {
              uVar7 = *(undefined4 *)(param_3 + 0x2c);
            }
            goto LAB_1404b8ee9;
          }
          uVar6 = uVar6 - (longlong)iVar2;
        } while (0 < (longlong)uVar6);
        FUN_1404b8c7c(uVar9,uVar1);
      }
LAB_1404b8ee9:
      FUN_1404a2310(lVar4);
      uVar1 = uVar7;
      goto LAB_1404b8f57;
    }
    uVar1 = 0;
    if (-1 < (longlong)uVar6) goto LAB_1404b8f57;
    lVar4 = FUN_1404a8b34(param_1 & 0xffffffff,param_2,0);
    uVar1 = uVar7;
    if (lVar4 != -1) {
      uVar5 = FUN_1404aa3c0(param_1 & 0xffffffff);
      iVar2 = (*_DAT_14059e198)(uVar5);
      if (iVar2 == 0) {
        uVar7 = (*_DAT_14059df60)();
        *(undefined1 *)(param_3 + 0x38) = 1;
        uVar1 = 0xd;
        *(undefined4 *)(param_3 + 0x34) = uVar7;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xd;
      }
      goto LAB_1404b8f57;
    }
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB_1404b8f57;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
LAB_1404b8f57:
  FUN_1404a8b34(uVar9,lVar3,0);
  return uVar1;
}

