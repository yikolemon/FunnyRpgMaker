/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf60d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101bf60d(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int *piStack_24;
  undefined *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = (int *)0x101bf61d;
  iVar2 = FUN_1010330d();
  piStack_24 = _UNK_10301bdc;
  local_1c = (int *)0x2;
  local_20 = (undefined *)0x14;
  FUN_101145d8("1.92.9 WIP",_DAT_10301bd0,_UNK_10301bd4,_UNK_10301bd8);
  local_1c = (int *)0x50;
  local_20 = (undefined *)0x101bf654;
  puVar3 = (undefined4 *)FUN_100fa1fa();
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0xe] = 5000;
  puVar3[0xf] = 10000;
  *(undefined4 **)(iVar2 + 0x84) = puVar3;
  *(char **)(iVar2 + 0x7c) = "imgui_impl_dx11";
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x418;
  local_1c = (int *)0x101bf696;
  iVar2 = FUN_1010331e();
  *(undefined4 *)(iVar2 + 0x24) = 0x4000;
  *(undefined4 *)(iVar2 + 0x20) = 0x4000;
  *(code **)(iVar2 + 0x2c) = FUN_10041162;
  *(undefined1 **)(iVar2 + 0x30) = &LAB_101bf76e;
  *(undefined1 **)(iVar2 + 0x34) = &LAB_101bf788;
  local_1c = &local_10;
  local_10 = 0;
  local_18 = 0;
  local_14 = 0;
  local_20 = (undefined *)0x101bf6cb;
  local_1c = (int *)FUN_10018d26();
  local_20 = &DAT_10302d58;
  piStack_24 = param_1;
  iVar2 = (**(code **)*param_1)();
  piVar1 = local_1c;
  if (iVar2 == 0) {
    uVar4 = FUN_10018d26(&piStack_24);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&DAT_10302d68,uVar4);
    piVar1 = piStack_24;
    if (iVar2 == 0) {
      uVar4 = FUN_10018d26(&local_20);
      iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&DAT_10302c70,uVar4);
      if (iVar2 == 0) {
        *puVar3 = param_1;
        puVar3[1] = unaff_EBX;
        puVar3[2] = local_20;
      }
    }
  }
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
  }
  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 8))(piStack_24);
  }
  (**(code **)(*(int *)*puVar3 + 4))((int *)*puVar3);
  (**(code **)(*(int *)puVar3[1] + 4))((int *)puVar3[1]);
  FUN_101bf7a2();
  return 1;
}

