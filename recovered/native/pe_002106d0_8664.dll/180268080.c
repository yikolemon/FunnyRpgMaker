/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180268080 */

void FUN_180268080(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4,
                  longlong param_5,undefined1 param_6,double param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *****pppppuVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined8 ****local_90 [3];
  ulonglong local_78;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_128;
  uVar11 = SUB84(param_7,0);
  uVar12 = (uint)((ulonglong)param_7 >> 0x20);
  if (param_7 < 0.0) {
    uVar11 = uVar11 ^ (uint)DAT_1802b0dc0;
    uVar12 = uVar12 ^ DAT_1802b0dc0._4_4_;
  }
  local_d8 = param_7 < 0.0;
  dVar1 = (double)CONCAT44(uVar12,uVar11);
  for (uVar9 = 0; (DAT_180327cd8 <= dVar1 && (uVar9 < 5000)); uVar9 = uVar9 + 10) {
    dVar1 = dVar1 / DAT_1802b7cb0;
  }
  local_d7 = param_4;
  local_b8 = param_1;
  iVar6 = FUN_18007d317(local_70,0x28,"%.0Lf",dVar1);
  if (iVar6 < 0) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
    lStack_c0 = lVar8;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar8);
    uVar7 = FUN_18001c0ec(&local_c8);
    if ((lVar8 != 0) && (lVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar8), lVar8 != 0))
    {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar8,1);
    }
    uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar7,0x30);
    FUN_18023f000(local_90,(longlong)iVar6,0);
    pppppuVar10 = local_90;
    if (0xf < local_78) {
      pppppuVar10 = (undefined8 *****)local_90[0];
    }
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar7,local_70,local_70 + iVar6,pppppuVar10);
    FUN_18000397c(local_90,uVar9,uVar5);
    local_f0 = FUN_180003216(local_b0,local_90);
    local_c8 = *param_3;
    uStack_c4 = param_3[1];
    lStack_c0 = *(longlong *)(param_3 + 2);
    local_f8 = local_d8;
    local_100 = param_6;
    local_108 = param_5;
    local_e8 = uVar5;
    FUN_1802685a0(local_b8,param_2,&local_c8,local_d7);
    FUN_180004c8c(local_90);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_128);
}

