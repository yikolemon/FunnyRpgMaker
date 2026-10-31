/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014bb6c */

void FUN_18014bb6c(undefined8 param_1,ulonglong param_2,undefined8 param_3,float param_4,
                  float param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = param_2 & 0xffffffff00000000;
  fVar4 = (float)param_3;
  fVar5 = DAT_1802ac570;
  if (param_5 <= DAT_1802ac570) {
    fVar5 = param_5;
  }
  iVar3 = (int)(float)(-(uint)(param_5 < 0.0) & (uint)DAT_1802dbb2c |
                      ~-(uint)(param_5 < 0.0) & (uint)(fVar5 * DAT_1802dc270 + DAT_1802dbb2c)) *
          0x1000000;
  fVar5 = (float)param_2 + fVar4;
  uVar2 = CONCAT44((float)((ulonglong)param_3 >> 0x20) + DAT_1802ac570,DAT_1802de650 + fVar4);
  FUN_18019bc7e(DAT_1802de650 + fVar4,(uint)(DAT_1802ac570 + fVar5) | uVar1,uVar2,1,iVar3);
  FUN_18019bc7e(param_1,(uint)fVar5 | uVar1,param_3,1,iVar3 + 0xffffff);
  fVar4 = (param_4 + (float)param_2) - fVar4;
  FUN_18019bc7e(param_1,(uint)(DAT_1802bb8e0 + fVar4) | uVar1,uVar2,0,iVar3);
  FUN_18019bc7e(param_1,(uint)fVar4 | uVar1,param_3,0,iVar3 + 0xffffff);
  return;
}

