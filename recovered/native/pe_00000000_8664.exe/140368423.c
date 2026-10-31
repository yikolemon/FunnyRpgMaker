/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140368423 */

void FUN_140368423(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = FUN_140364ccf();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 4) & 0xc0) == 0)) {
    fVar6 = *(float *)(DAT_14062a630 + 0x1320);
    iVar2 = (int)((ulonglong)(lVar1 - *(longlong *)(param_1 + 0x10)) >> 3) * -0x49249249;
    fVar3 = (float)FUN_140368525(param_1,param_3);
    fVar5 = *(float *)(lVar1 + 0x18) - (float)param_3[1];
    fVar7 = DAT_1404f0624;
    if (*param_3 <= iVar2) {
      fVar7 = fVar6;
    }
    fVar7 = fVar5 - fVar7;
    if (*(int *)(param_1 + 8) - param_3[8] <= iVar2 + 1) {
      fVar6 = DAT_1404bda40;
    }
    fVar6 = fVar5 + *(float *)(lVar1 + 0x1c) + fVar6;
    *(undefined4 *)(param_1 + 100) = 0;
    if ((fVar7 < *(float *)(param_1 + 0x60)) || (fVar3 <= fVar6 - fVar7)) {
      fVar5 = *(float *)(param_1 + 0x5c) - fVar6;
    }
    else {
      if (fVar6 - fVar3 <= *(float *)(param_1 + 0x60)) {
        return;
      }
      fVar5 = (fVar7 - fVar3) - *(float *)(param_1 + 0x5c);
      fVar7 = fVar6 - fVar3;
    }
    uVar4 = FUN_140313933(fVar5,0);
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(float *)(param_1 + 0x60) = fVar7;
  }
  return;
}

