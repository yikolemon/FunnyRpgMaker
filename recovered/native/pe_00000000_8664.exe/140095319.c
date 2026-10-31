/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095319 */

void FUN_140095319(int param_1,longlong param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = DAT_140f2a910;
  if (*(longlong *)(DAT_140f2a910 + 0x2200) != param_2) {
    FUN_1400903a8(param_2);
  }
  iVar2 = *(int *)(param_2 + 0x1b0);
  *(int *)(lVar6 + 0x21f8) = param_1;
  *(int *)(lVar6 + 0x220c) = iVar2;
  FUN_1400900d8(*(undefined4 *)(lVar6 + 0x1f9c));
  *(int *)(param_2 + 0x450 + (longlong)iVar2 * 4) = param_1;
  uVar7 = 0;
  if (*(int *)(lVar6 + 0x1fe0) == param_1) {
    fVar3 = *(float *)(lVar6 + 0x2000);
    fVar4 = *(float *)(lVar6 + 0x2004);
    fVar5 = *(float *)(lVar6 + 0x2008);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x168);
    fVar9 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x168) >> 0x20);
    pfVar1 = (float *)(param_2 + 0x458 + (longlong)iVar2 * 0x10);
    *pfVar1 = *(float *)(lVar6 + 0x1ffc) - fVar8;
    pfVar1[1] = fVar3 - fVar9;
    pfVar1[2] = fVar4 - fVar8;
    pfVar1[3] = fVar5 - fVar9;
    uVar7 = 0;
    if (*(int *)(lVar6 + 0x1fe0) == param_1) {
      uVar7 = *(undefined4 *)(lVar6 + 0x1fe4);
    }
  }
  *(undefined4 *)(lVar6 + 0x2210) = uVar7;
  if (param_1 == *(int *)(lVar6 + 0x1680)) {
    *(undefined1 *)(lVar6 + 0x21f7) = 1;
  }
  if ((*(uint *)(lVar6 + 0x169c) & 0xfffffffe) == 2) {
    *(undefined1 *)(lVar6 + 0x21f5) = 1;
  }
  else if (*(char *)(lVar6 + 0x7e) == '\x01') {
    *(undefined1 *)(lVar6 + 0x21f4) = 0;
  }
  FUN_14009527c(0);
  FUN_14009527c(1);
  return;
}

