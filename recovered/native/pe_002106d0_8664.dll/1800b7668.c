/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b7668 */

void FUN_1800b7668(longlong *param_1,undefined8 *param_2,int param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  DWORD DVar6;
  int *piVar7;
  byte *pbVar8;
  longlong *plVar9;
  undefined1 *local_298;
  undefined8 local_290;
  undefined8 local_288;
  code *local_280;
  undefined1 local_278 [288];
  undefined8 local_158;
  longlong **local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_130 [40];
  longlong *local_108;
  longlong local_100;
  int local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  piVar7 = (int *)FUN_1800188ac(param_1 + 8);
  iVar2 = *piVar7;
  local_58 = param_1;
  pbVar8 = (byte *)FUN_1800188ac(param_1 + 0x1b);
  bVar1 = *pbVar8;
  if ((param_3 < iVar2 & (bVar1 ^ 1)) == 0) {
    local_298 = local_278;
    local_290 = 0;
    local_280 = FUN_180018c5c;
    local_288 = 0xfa;
    local_108 = (longlong *)*param_5;
    local_150 = &local_108;
    local_158 = 0xc;
    local_148 = *param_4;
    uStack_144 = param_4[1];
    uStack_140 = param_4[2];
    uStack_13c = param_4[3];
    local_78 = &local_298;
    local_60 = param_2;
    FUN_180024c6e(local_130);
    uVar5 = local_290;
    puVar4 = local_298;
    local_100 = local_58[3];
    if ((ulonglong)local_58[4] < 0x10) {
      plVar9 = local_58 + 1;
    }
    else {
      plVar9 = (longlong *)local_58[1];
    }
    local_68 = local_60[2];
    local_78 = (undefined1 **)*local_60;
    uStack_70 = *(undefined4 *)(local_60 + 1);
    uStack_6c = *(undefined4 *)((longlong)local_60 + 0xc);
    local_f0 = _Xtime_get_ticks();
    uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x10);
    local_108 = plVar9;
    local_f8 = param_3;
    if ((uVar3 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) = uVar3 | 1;
      DVar6 = GetCurrentThreadId();
      local_e8 = (ulonglong)DVar6;
      *(ulonglong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) =
           local_e8;
    }
    else {
      local_e8 = *(ulonglong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  8);
    }
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = (undefined4)local_78;
    uStack_cc = local_78._4_4_;
    uStack_c8 = uStack_70;
    uStack_c4 = uStack_6c;
    local_c0 = local_68;
    local_b8 = puVar4;
    local_b0 = uVar5;
    if (iVar2 <= param_3) {
      (**(code **)(*local_58 + 0x10))(local_58,&local_108);
    }
    if ((bVar1 & 1) != 0) {
      FUN_1800188b0(local_58 + 0x11,&local_108);
    }
    if (local_298 != local_278) {
      thunk_FUN_180290e40();
    }
  }
  return;
}

