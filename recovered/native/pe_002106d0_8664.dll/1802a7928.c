/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7928 */

undefined4 FUN_1802a7928(ulonglong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  HANDLE hFile;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = param_1 & 0xffffffff;
  lVar5 = FUN_180297664(param_1,0,1);
  lVar6 = FUN_180297664(uVar10,0,2);
  uVar7 = param_2 - lVar6;
  if ((lVar5 == -1) || (lVar6 == -1)) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVar1 = 0x16;
      goto LAB_1802a7a87;
    }
  }
  else {
    uVar8 = 0;
    if (0 < (longlong)uVar7) {
      lVar6 = _calloc_base(0x1000,1);
      if (lVar6 == 0) {
        uVar8 = 0xc;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xc;
      }
      else {
        uVar1 = FUN_1802a77ac(param_1 & 0xffffffff,0x8000);
        do {
          uVar9 = uVar7 & 0xffffffff;
          if (0xfff < (longlong)uVar7) {
            uVar9 = 0x1000;
          }
          iVar2 = FUN_18029dddc(uVar10,lVar6,uVar9,param_3);
          if (iVar2 == -1) {
            if ((*(char *)(param_3 + 0x38) != '\0') && (*(int *)(param_3 + 0x34) == 5)) {
              *(undefined1 *)(param_3 + 0x30) = 1;
              *(undefined4 *)(param_3 + 0x2c) = 0xd;
            }
            if (*(char *)(param_3 + 0x30) != '\0') {
              uVar8 = *(undefined4 *)(param_3 + 0x2c);
            }
            goto LAB_1802a7a19;
          }
          uVar7 = uVar7 - (longlong)iVar2;
        } while (0 < (longlong)uVar7);
        FUN_1802a77ac(uVar10,uVar1);
      }
LAB_1802a7a19:
      FUN_180290e40(lVar6);
      uVar1 = uVar8;
      goto LAB_1802a7a87;
    }
    uVar1 = 0;
    if (-1 < (longlong)uVar7) goto LAB_1802a7a87;
    lVar6 = FUN_180297664(param_1 & 0xffffffff,param_2,0);
    uVar1 = uVar8;
    if (lVar6 != -1) {
      hFile = (HANDLE)FUN_180298ef0(param_1 & 0xffffffff);
      BVar3 = SetEndOfFile(hFile);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        *(undefined1 *)(param_3 + 0x38) = 1;
        uVar1 = 0xd;
        *(DWORD *)(param_3 + 0x34) = DVar4;
        *(undefined1 *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xd;
      }
      goto LAB_1802a7a87;
    }
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB_1802a7a87;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
LAB_1802a7a87:
  FUN_180297664(uVar10,lVar5,0);
  return uVar1;
}

