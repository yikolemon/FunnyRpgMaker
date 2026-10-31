/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076eaa */

void FUN_140076eaa(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  
  if (*(char *)(param_1 + 0xbe5) == '\x01') {
    if (DAT_1402112e0 < param_3) {
      param_3 = (float)(int)((int)param_3 - (uint)((float)(int)param_3 != param_3 && param_3 < 0.0))
      ;
    }
    lVar3 = *(longlong *)(param_1 + 0xe0);
    if (DAT_1402112e0 < param_2) {
      param_2 = (float)(int)((int)param_2 - (uint)((float)(int)param_2 != param_2 && param_2 < 0.0))
      ;
    }
    lVar7 = FUN_140076dd1(lVar3,1,0xffffffff);
    pfVar9 = (float *)(lVar7 + 0x10);
    pfVar5 = (float *)(lVar7 + 0xc);
    if (lVar7 == 0) {
      pfVar9 = (float *)(lVar3 + 0x11c);
      pfVar5 = (float *)(lVar3 + 0x118);
    }
    if ((*pfVar5 == param_2) && (!NAN(*pfVar5) && !NAN(param_2))) {
      if ((*pfVar9 == param_3) && (!NAN(*pfVar9) && !NAN(param_3))) {
        return;
      }
    }
    iVar1 = *(int *)(lVar3 + 0x15a4);
    *(int *)(lVar3 + 0x15a4) = iVar1 + 1;
    iVar6 = *(int *)(lVar3 + 0x1580);
    uVar2 = *(undefined4 *)(lVar3 + 0x15a0);
    if (iVar6 == *(int *)(lVar3 + 0x1584)) {
      if (iVar6 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar6 / 2 + iVar6;
      }
      iVar10 = iVar6 + 1;
      if (iVar6 + 1 < iVar8) {
        iVar10 = iVar8;
      }
      lVar7 = FUN_140077ab4((longlong)iVar10 * 0x1c);
      if (*(longlong *)(lVar3 + 0x1588) != 0) {
        FUN_1401c5180(lVar7,*(longlong *)(lVar3 + 0x1588),(longlong)*(int *)(lVar3 + 0x1580) * 0x1c)
        ;
        FUN_140077b90(*(undefined8 *)(lVar3 + 0x1588));
      }
      *(longlong *)(lVar3 + 0x1588) = lVar7;
      *(int *)(lVar3 + 0x1584) = iVar10;
      iVar6 = *(int *)(lVar3 + 0x1580);
    }
    else {
      lVar7 = *(longlong *)(lVar3 + 0x1588);
    }
    lVar4 = (longlong)iVar6 * 0x1c;
    *(undefined8 *)(lVar7 + lVar4) = 0x100000001;
    *(int *)(lVar7 + 8 + lVar4) = iVar1;
    *(float *)(lVar7 + 0xc + lVar4) = param_2;
    *(float *)(lVar7 + 0x10 + lVar4) = param_3;
    *(undefined4 *)(lVar7 + 0x14 + lVar4) = uVar2;
    *(undefined4 *)(lVar7 + 0x18 + lVar4) = 0;
    *(int *)(lVar3 + 0x1580) = *(int *)(lVar3 + 0x1580) + 1;
  }
  return;
}

