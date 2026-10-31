/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180245160 */

undefined8 FUN_180245160(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
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
    puVar5 = (undefined8 *)FUN_180239630(0x40);
    puVar8 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        puVar7 = &DAT_1803861e4;
      }
      else {
        puVar7 = *(undefined1 **)(lVar1 + 0x28);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)(lVar1 + 0x30);
        }
      }
      FUN_18023d240(local_108,0);
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
      if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802397f0("bad locale name");
      }
      FUN_18023ccf0(local_108,puVar7);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
      puVar6 = (undefined8 *)FUN_18023d370(local_70);
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
      FUN_18023cdb0(local_108);
      if (local_b0 != 0) {
        thunk_FUN_180290e40();
      }
      local_b0 = 0;
      if (local_c0 != 0) {
        thunk_FUN_180290e40();
      }
      local_c0 = 0;
      if (local_d0 != 0) {
        thunk_FUN_180290e40();
      }
      local_d0 = 0;
      if (local_e0 != 0) {
        thunk_FUN_180290e40();
      }
      local_e0 = 0;
      if (local_f0 != 0) {
        thunk_FUN_180290e40();
      }
      local_f0 = 0;
      if (local_100 != 0) {
        thunk_FUN_180290e40();
      }
      local_100 = 0;
      FUN_18023d290(local_108);
    }
  }
  return 2;
}

