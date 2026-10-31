/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140368039 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140368039(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  lVar9 = DAT_14062a630;
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(DAT_14062a630 + 0x1608);
  fVar1 = *(float *)(DAT_14062a630 + 0xdf8);
  fVar2 = *(float *)(DAT_14062a630 + 0x1320);
  uVar5 = *(undefined8 *)(lVar4 + 0x158);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar4 + 0x158) = *(float *)(param_1 + 0x38) - fVar1;
  *(undefined4 *)(lVar4 + 0x15c) = uVar3;
  *(float *)(param_1 + 0x38) = fVar2 + fVar1 + *(float *)(param_1 + 0x38);
  local_58 = *(undefined8 *)(lVar9 + 0xee8);
  uVar8 = *(undefined8 *)(lVar9 + 0xef0);
  fStack_4c = (float)((ulonglong)uVar8 >> 0x20);
  _uStack_50 = CONCAT44(fStack_4c * DAT_1404ecffc,(int)uVar8);
  piVar10 = (int *)0x0;
  FUN_1403129c9(0);
  local_68 = 0;
  uStack_60 = 0;
  FUN_1403129c9(0x16);
  cVar6 = FUN_140349bf2("e useful on TV/console systems where moving a virtual mouse is difficult",0
                        ,0x50);
  FUN_140312af5(2);
  if (cVar6 != '\0') {
    iVar7 = *(int *)(param_1 + 8);
    piVar10 = (int *)0x0;
    if (0 < iVar7) {
      lVar11 = 0;
      lVar9 = 0;
      do {
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 6 + lVar11) & 0x20) == 0) {
          piVar12 = (int *)(*(longlong *)(param_1 + 0x10) + lVar11);
          uVar8 = FUN_140364d30(param_1,piVar12);
          local_68 = 0;
          cVar6 = FUN_14034a6c6(uVar8,*(int *)(param_1 + 0x20) == *piVar12,0,&local_68);
          if (cVar6 != '\0') {
            piVar10 = piVar12;
          }
          iVar7 = *(int *)(param_1 + 8);
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x38;
      } while (lVar9 < iVar7);
    }
    FUN_14034a43c();
  }
  *(undefined8 *)(lVar4 + 0x158) = uVar5;
  if (ram0x000140613b10 == (local_48 ^ (ulonglong)auStack_88)) {
    return piVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_88);
}

