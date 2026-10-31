/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b7db */

void __fastcall
FUN_1012b7db(int param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = DAT_1039d74c;
  fVar9 = *(float *)(DAT_1039d74c + 0x1228);
  fVar4 = *(float *)(DAT_1039d74c + 0xd10);
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  fVar6 = (float)((ulonglong)uVar1 >> 0x20);
  fVar7 = fVar4 + fVar4 + fVar6 + fVar9;
  fVar8 = *(float *)(param_1 + 0x3c) + (float)uVar1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = uVar1;
    *(float *)(param_2 + 1) = fVar8;
    *(float *)((int)param_2 + 0xc) = fVar7;
    fVar9 = *(float *)(iVar2 + 0x1228);
    fVar4 = *(float *)(iVar2 + 0xd10);
  }
  fVar10 = *(float *)(iVar2 + 0xce0);
  fVar5 = *(float *)(iVar2 + 0xd0c);
  fVar8 = (fVar8 - fVar10) - fVar5;
  fVar4 = fVar4 + fVar6;
  bVar3 = *(byte *)(param_1 + 0xac);
  if ((bVar3 & 8) != 0) {
    if (param_5 != (float *)0x0) {
      *param_5 = fVar8 - fVar9;
      param_5[1] = fVar4;
      bVar3 = *(byte *)(param_1 + 0xac);
    }
    fVar8 = fVar8 - (*(float *)(iVar2 + 0xd24) + fVar9);
  }
  fVar5 = (float)uVar1 + fVar10 + fVar5;
  fVar10 = fVar5;
  if ((bVar3 & 0x10) != 0) {
    if (*(int *)(iVar2 + 0xcf8) == 1) {
      fVar4 = *(float *)(iVar2 + 0xd10) + fVar6;
      fVar10 = fVar8 - fVar9;
      fVar8 = fVar8 - (fVar9 + *(float *)(iVar2 + 0xd24));
    }
    else if (*(int *)(iVar2 + 0xcf8) == 0) {
      fVar5 = fVar9 + *(float *)(iVar2 + 0xd24) + fVar5;
    }
  }
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar8;
  param_3[3] = fVar7;
  if (param_4 != (float *)0x0) {
    *param_4 = fVar10;
    param_4[1] = fVar4;
  }
  return;
}

