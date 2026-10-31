/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c8fcc */

undefined8 FUN_1801c8fcc(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  lVar3 = FUN_180107ee8();
  FUN_18011941b("1.92.9 WIP",0xc18,0x54c,8,0x10,0x14,2);
  puVar4 = (undefined8 *)FUN_1800fe7f8(0x90);
  FUN_1802a89a0(puVar4,0,0x90);
  puVar4[0xe] = 0x271000001388;
  *(undefined8 **)(lVar3 + 0xa8) = puVar4;
  *(char **)(lVar3 + 0x98) = "imgui_impl_dx11";
  *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) | 0x418;
  lVar3 = FUN_180107ef9();
  *(undefined8 *)(lVar3 + 0x3c) = 0x400000004000;
  *(code **)(lVar3 + 0x50) = FUN_18004187e;
  *(code **)(lVar3 + 0x58) = FUN_1801c9178;
  *(code **)(lVar3 + 0x60) = FUN_1801c91a3;
  local_30 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  uVar5 = FUN_1800188ac();
  iVar2 = (**(code **)*param_1)(param_1,&DAT_1803295c0,uVar5);
  plVar1 = local_30;
  if (iVar2 == 0) {
    uVar5 = FUN_1800188ac(&local_40);
    iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_1803295d0,uVar5);
    plVar1 = local_40;
    if (iVar2 == 0) {
      uVar5 = FUN_1800188ac(&local_38);
      iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_1803294f0,uVar5);
      if (iVar2 == 0) {
        *puVar4 = param_1;
        puVar4[1] = param_2;
        puVar4[2] = local_38;
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  (**(code **)(*(longlong *)*puVar4 + 8))();
  (**(code **)(*(longlong *)puVar4[1] + 8))();
  FUN_1801c91ce();
  return 1;
}

