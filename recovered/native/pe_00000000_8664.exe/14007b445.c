/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007b445 */

void FUN_14007b445(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,float *param_7,float *param_8)

{
  undefined8 uVar1;
  bool bVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined8 *)param_2;
  local_88 = uVar1;
  if (param_6 == (undefined8 *)0x0) {
    local_d8 = 0;
    FUN_14007b686(&local_90,param_4,param_5,0);
  }
  else {
    local_90 = *param_6;
  }
  fVar5 = (float)((ulonglong)uVar1 >> 0x20);
  pfVar6 = param_8 + 2;
  pfVar3 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar6 = param_3;
    pfVar3 = param_2;
  }
  bVar2 = true;
  if ((float)local_90 + (float)uVar1 < *pfVar6) {
    bVar2 = pfVar6[1] <= local_90._4_4_ + fVar5;
  }
  bVar4 = bVar2;
  if ((param_8 != (float *)0x0) && (bVar4 = true, *param_8 <= (float)uVar1)) {
    bVar4 = (bool)(bVar2 | fVar5 < param_8[1]);
  }
  if (0.0 < *param_7) {
    uVar7 = FUN_14007b71f();
    local_88 = CONCAT44(local_88._4_4_,uVar7);
  }
  if (0.0 < param_7[1]) {
    uVar7 = FUN_14007b71f();
    local_88 = CONCAT44(uVar7,(undefined4)local_88);
  }
  if (bVar4) {
    local_a8 = *(undefined8 *)pfVar3;
    uStack_a0 = *(undefined8 *)pfVar6;
    local_d8 = FUN_14007a557(0);
    local_b8 = &local_a8;
  }
  else {
    local_d8 = FUN_14007a557(0);
    local_b8 = (undefined8 *)0x0;
  }
  local_c8 = param_5;
  local_c0 = 0;
  local_d0 = param_4;
  FUN_1400df1a0(param_1,0,0,&local_88);
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_f8);
}

