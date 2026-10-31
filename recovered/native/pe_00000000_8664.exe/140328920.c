/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140328920 */

void FUN_140328920(longlong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar7 = DAT_14062a630;
  lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
  *param_1 = lVar3;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar7 + 0x1fe0);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar7 + 0x1f9c);
  uVar2 = *(uint *)(lVar7 + 0x1fe4);
  *(uint *)(param_1 + 4) = uVar2;
  uVar1 = *(undefined8 *)(lVar3 + 0x168);
  fVar4 = *(float *)(lVar7 + 0x2000);
  fVar5 = *(float *)(lVar7 + 0x2004);
  fVar6 = *(float *)(lVar7 + 0x2008);
  fVar8 = (float)uVar1;
  fVar9 = (float)((ulonglong)uVar1 >> 0x20);
  *(float *)(param_1 + 2) = *(float *)(lVar7 + 0x1ffc) - fVar8;
  *(float *)((longlong)param_1 + 0x14) = fVar4 - fVar9;
  *(float *)(param_1 + 3) = fVar5 - fVar8;
  *(float *)((longlong)param_1 + 0x1c) = fVar6 - fVar9;
  if ((uVar2 >> 0x15 & 1) != 0) {
    param_1[6] = *(longlong *)(lVar7 + 0x1fb8);
  }
  return;
}

