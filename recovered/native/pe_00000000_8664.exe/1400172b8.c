/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400172b8 */

undefined4 * FUN_1400172b8(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 local_b8 [32];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0x12] = 0xffffffff;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x13) = 0x200000000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0xffffffff;
  param_1[0x28] = 0x102;
  param_1[0x3b] = 0;
  local_50 = param_1 + 0x3c;
  local_20 = param_1;
  FUN_140017a4a();
  local_48 = local_20 + 0x4c;
  FUN_140017a9e();
  local_28 = (undefined4 *)FUN_1401887b0(0xd8);
  FUN_1400027d2(local_b8,"\r\n");
  FUN_140017af2(local_28,0,local_b8);
  *(undefined4 **)(local_20 + 0x5c) = local_28;
  *(undefined8 *)(local_20 + 0x5e) = 0x600000002;
  local_38 = local_20 + 0x60;
  *(undefined8 *)(local_20 + 0x6e) = 0;
  local_40 = local_20 + 0x70;
  *(undefined8 *)(local_20 + 0x70) = 0;
  *(undefined8 *)(local_20 + 0x72) = 0;
  local_30 = local_20 + 0x74;
  *(undefined8 *)(local_20 + 0x74) = 0;
  local_28 = local_20 + 0x76;
  *(undefined8 *)(local_20 + 0x76) = 0;
  *(undefined8 *)(local_20 + 0x78) = 0;
  *(undefined1 *)(local_20 + 0x7a) = 1;
  *(undefined8 *)(local_20 + 0x7c) = 0;
  FUN_140017d6b(local_88);
  local_78 = &DAT_140edcdbf;
  FUN_140017e2d(local_70,&local_78,local_88);
  FUN_140017f0e(local_28,local_70);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 8))(local_68);
      }
    }
  }
  FUN_1400027d2(local_70,local_78);
  FUN_140039384(local_20 + 0x3c,local_98,local_70);
  FUN_140017fa2(local_98[0] + 0x30,local_28);
  FUN_14000109c(local_70);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 8))(local_80);
      }
    }
  }
  return local_20;
}

