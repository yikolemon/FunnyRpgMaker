/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140456630 */

undefined8 FUN_140456630(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  undefined1 local_108 [8];
  longlong local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined2 local_d8;
  longlong local_d0;
  undefined2 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined1 local_70 [64];
  
  puVar6 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar5 = (undefined8 *)FUN_14044ab00(0x40);
    puVar8 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        pwVar7 = L"pNonPic";
      }
      else {
        pwVar7 = *(wchar_t **)(lVar1 + 0x28);
        if (pwVar7 == (wchar_t *)0x0) {
          pwVar7 = (wchar_t *)(lVar1 + 0x30);
        }
      }
      FUN_14044e710(local_108,0);
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      if (pwVar7 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14044acc0(L"ay");
      }
      FUN_14044e1c0(local_108,pwVar7);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &DAT_1404ca0d8;
      puVar6 = (undefined8 *)FUN_14044e840(local_70);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uStack_88 = (undefined4)puVar6[3];
      uVar4 = *(undefined8 *)((longlong)puVar6 + 0x1c);
      uStack_7c = *(undefined8 *)((longlong)puVar6 + 0x24);
      uStack_84 = (undefined4)uVar4;
      uStack_80 = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar5[2] = *puVar6;
      puVar5[3] = uVar2;
      local_90._0_4_ = (undefined4)uVar3;
      local_90._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)(puVar5 + 4) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar5 + 0x24) = local_90._4_4_;
      *(undefined4 *)(puVar5 + 5) = uStack_88;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_84;
      *(undefined8 *)((longlong)puVar5 + 0x2c) = uVar4;
      *(undefined8 *)((longlong)puVar5 + 0x34) = uStack_7c;
      puVar6 = puVar5;
      puVar8 = (undefined8 *)0x1;
      local_90 = uVar3;
    }
    *param_1 = (longlong)puVar6;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_14044e280(local_108);
      if (local_b0 != 0) {
        thunk_FUN_1404a2310();
      }
      local_b0 = 0;
      if (local_c0 != 0) {
        thunk_FUN_1404a2310();
      }
      local_c0 = 0;
      if (local_d0 != 0) {
        thunk_FUN_1404a2310();
      }
      local_d0 = 0;
      if (local_e0 != 0) {
        thunk_FUN_1404a2310();
      }
      local_e0 = 0;
      if (local_f0 != 0) {
        thunk_FUN_1404a2310();
      }
      local_f0 = 0;
      if (local_100 != 0) {
        thunk_FUN_1404a2310();
      }
      local_100 = 0;
      FUN_14044e760(local_108);
    }
  }
  return 2;
}

