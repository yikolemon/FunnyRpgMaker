/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a4fe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1800a4fe4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined2 param_5,ulonglong param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a0 [2];
  undefined8 local_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_88 = (undefined1  [16])0x0;
  local_78 = 0;
  local_70 = 0xf;
  uVar5 = *(uint *)(param_4 + 0x18) & 0x3000;
  uVar7 = 0xffffffffffffffff;
  if (uVar5 != 0x3000) {
    uVar7 = *(ulonglong *)(param_4 + 0x20);
  }
  local_98 = param_1;
  local_90 = param_3;
  iVar2 = FUN_18007dba6(uVar7,uVar5);
  lVar4 = (longlong)iVar2;
  uVar6 = param_6 & 0x7fffffffffffffff;
  if (((uVar6 < 0x7ff0000000000000) && (DAT_1802b7cb0 < (double)(_DAT_1802ac560 & param_6))) &&
     (uVar5 == 0x2000)) {
    local_a0[0] = 0;
    FUN_1802860a0(param_6,local_a0);
    iVar2 = -local_a0[0];
    if (-local_a0[0] < 0) {
      iVar2 = local_a0[0];
    }
    lVar4 = lVar4 + (ulonglong)((uint)(iVar2 * 0x7597) >> 5) / 0xc35;
  }
  FUN_1800037ec(local_88,lVar4 + 0x32,0);
  uVar5 = *(uint *)(param_4 + 0x18) & 0xffffffef;
  if (uVar6 < 0x7ff0000000000000) {
    uVar5 = *(uint *)(param_4 + 0x18);
  }
  FUN_18007dbcc(local_98,local_a0,0,uVar5);
  puVar3 = local_88;
  if (0xf < local_70) {
    puVar3 = (undefined1 *)local_88._0_8_;
  }
  iVar2 = FUN_18007d317(puVar3,local_78,local_a0,uVar7 & 0xffffffff,param_6);
  if (iVar2 < 0) {
    uVar1 = local_90[1];
    *param_2 = *local_90;
    param_2[1] = uVar1;
  }
  else {
    if (local_70 < 0x10) {
      puVar3 = local_88;
    }
    else {
      puVar3 = (undefined1 *)local_88._0_8_;
    }
    local_b8 = *local_90;
    uStack_b0 = local_90[1];
    FUN_1800a619a(local_98,param_2,&local_b8,param_4,param_5,puVar3,iVar2,uVar6 < 0x7ff0000000000000
                 );
  }
  FUN_180001ef2(local_88);
  return param_2;
}

