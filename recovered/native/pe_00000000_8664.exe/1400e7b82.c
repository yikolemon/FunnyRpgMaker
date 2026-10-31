/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e7b82 */

void FUN_1400e7b82(undefined8 param_1,float *param_2,float *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  fVar7 = param_3[3];
  fVar8 = param_2[3];
  if (fVar3 < fVar1) {
    local_e0 = (uint)(fVar8 <= fVar7) * 0x40 + (uint)(fVar2 <= fVar4) * 0x10 + 0x100;
    local_c8 = CONCAT44(fVar7,fVar1);
    local_d0 = CONCAT44(fVar2,fVar3);
    local_e8 = param_5;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if (fVar5 < fVar6) {
    local_e0 = (uint)(fVar8 <= fVar7) * 0x80 + (uint)(fVar2 <= fVar4) * 0x20 + 0x100;
    local_c8 = CONCAT44(param_3[3],param_2[2]);
    local_d0 = CONCAT44((int)*(undefined8 *)(param_3 + 1),
                        (int)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20));
    local_e8 = param_5;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if (fVar4 < fVar2) {
    local_e0 = (uint)(fVar6 <= fVar5) * 0x20 + (uint)(fVar1 <= fVar3) * 0x10 + 0x100;
    local_c8 = CONCAT44((int)*(undefined8 *)(param_3 + 1),
                        (int)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20));
    local_d0 = CONCAT44(param_2[1],*param_3);
    local_e8 = param_5;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if (fVar7 < fVar8) {
    local_e0 = (uint)(fVar6 <= fVar5) * 0x80 + (uint)(fVar1 <= fVar3) * 0x40 + 0x100;
    local_c8 = CONCAT44(param_2[3],param_3[2]);
    local_d0 = CONCAT44(param_3[3],*param_3);
    local_e8 = param_5;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if ((fVar3 < fVar1) && (fVar4 < fVar2)) {
    local_c8 = *(undefined8 *)param_3;
    local_d0 = *(undefined8 *)param_2;
    local_e8 = param_5;
    local_e0 = 0x10;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if ((fVar5 < fVar6) && (fVar4 < fVar2)) {
    local_c8 = CONCAT44(param_3[1],param_2[2]);
    local_d0 = CONCAT44(param_2[1],param_3[2]);
    local_e8 = param_5;
    local_e0 = 0x20;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if ((fVar3 < fVar1) && (fVar7 < fVar8)) {
    local_c8 = CONCAT44(param_2[3],*param_3);
    local_d0 = CONCAT44(param_3[3],*param_2);
    local_e8 = param_5;
    local_e0 = 0x40;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if ((fVar5 < fVar6) && (fVar7 < fVar8)) {
    local_c8 = *(undefined8 *)(param_2 + 2);
    local_d0 = *(undefined8 *)(param_3 + 2);
    local_e8 = param_5;
    local_e0 = 0x80;
    FUN_1400de294(param_1,&local_d0,&local_c8,param_4);
  }
  if (DAT_140f17b40 == (local_c0 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_c0 ^ (ulonglong)auStack_108);
}

