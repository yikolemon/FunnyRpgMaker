/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140116ff2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140116ff2(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  if ((*(char *)(lVar2 + 0x10e) == '\0') && (lVar3 = *(longlong *)(lVar2 + 0x208), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) == 1) {
      *(float *)(lVar2 + 0x158) =
           (float)(int)(*(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x19c) +
                       *(float *)(lVar2 + 0x1a0));
    }
    else {
      iVar5 = *(int *)(lVar3 + 0xc) + 1;
      iVar6 = 0;
      if (iVar5 != *(int *)(lVar3 + 0x10)) {
        iVar6 = iVar5;
      }
      *(int *)(lVar3 + 0xc) = iVar6;
      FUN_14009366e();
      FUN_1401128df(lVar2,(longlong)*(int *)(lVar3 + 0xc) * 0x1c + *(longlong *)(lVar3 + 0x68) + 0xc
                   );
      FUN_1400e0ab6(lVar3 + 0x70,*(undefined8 *)(lVar2 + 800),*(int *)(lVar3 + 0xc) + 1);
      fVar1 = *(float *)(lVar4 + 0xe04);
      uVar7 = FUN_14007b71f(*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar2 + 0x15c));
      *(undefined4 *)(lVar3 + 0x20) = uVar7;
      if (*(int *)(lVar3 + 0xc) < 1) {
        uVar7 = FUN_14007b71f(fVar1 - *(float *)(lVar2 + 0x90),0);
        *(undefined4 *)(lVar2 + 0x1a0) = uVar7;
        *(undefined1 *)(lVar2 + 0x198) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(lVar3 + 0x20);
        fVar9 = *(float *)(lVar2 + 0x19c);
        fVar8 = *(float *)(lVar2 + 0x1a0);
      }
      else {
        fVar8 = (float)FUN_14011640a();
        fVar9 = *(float *)(lVar2 + 0x19c);
        fVar8 = (fVar8 - fVar9) + fVar1;
        *(float *)(lVar2 + 0x1a0) = fVar8;
      }
      *(float *)(lVar2 + 0x158) = (float)(int)(fVar9 + *(float *)(lVar2 + 0x60) + fVar8);
      *(undefined4 *)(lVar2 + 0x15c) = *(undefined4 *)(lVar3 + 0x1c);
      *(undefined8 *)(lVar2 + 0x180) = 0;
      *(undefined4 *)(lVar2 + 400) = 0;
      fVar9 = (float)FUN_14011640a(*(undefined4 *)(lVar3 + 0xc));
      fVar8 = (float)FUN_14011640a(*(int *)(lVar3 + 0xc) + 1);
      FUN_140093372((fVar8 - fVar9) * switchD_1404b9b72::caseD_100);
      *(float *)(lVar2 + 0x2a0) = (fVar8 + *(float *)(lVar2 + 0x60)) - fVar1;
    }
  }
  return;
}

