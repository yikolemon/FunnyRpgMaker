/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001830a */

void FUN_18001830a(longlong *param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  DWORD DVar5;
  int *piVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *local_d8;
  longlong local_d0;
  int local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  piVar6 = (int *)FUN_1800188ac(param_1 + 8);
  iVar2 = *piVar6;
  pbVar7 = (byte *)FUN_1800188ac(param_1 + 0x1b);
  bVar1 = *pbVar7;
  if ((param_3 < iVar2 & (bVar1 ^ 1)) == 0) {
    local_78 = *param_4;
    uStack_70 = param_4[1];
    lVar4 = param_1[3];
    if ((ulonglong)param_1[4] < 0x10) {
      plVar8 = param_1 + 1;
    }
    else {
      plVar8 = (longlong *)param_1[1];
    }
    local_58 = *(undefined8 *)(param_2 + 4);
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_c0 = _Xtime_get_ticks();
    uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x10);
    local_d8 = plVar8;
    local_d0 = lVar4;
    local_c8 = param_3;
    if ((uVar3 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) = uVar3 | 1;
      DVar5 = GetCurrentThreadId();
      local_b8 = (ulonglong)DVar5;
      *(ulonglong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) =
           local_b8;
    }
    else {
      local_b8 = *(ulonglong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  8);
    }
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = CONCAT44(uStack_64,local_68);
    uStack_98 = CONCAT44(uStack_5c,uStack_60);
    local_90 = local_58;
    local_88 = (undefined4)local_78;
    uStack_84 = local_78._4_4_;
    uStack_80 = (undefined4)uStack_70;
    uStack_7c = uStack_70._4_4_;
    if (iVar2 <= param_3) {
      (**(code **)(*param_1 + 0x10))(param_1,&local_d8);
    }
    if ((bVar1 & 1) != 0) {
      FUN_1800188b0(param_1 + 0x11,&local_d8);
    }
  }
  return;
}

