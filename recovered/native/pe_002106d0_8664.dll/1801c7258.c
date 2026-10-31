/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7258 */

undefined8 FUN_1801c7258(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_180107ee8();
  FUN_18011941b("1.92.9 WIP",0xc18,0x54c,8,0x10,0x14,2);
  puVar3 = (undefined8 *)FUN_1800fe7f8(0x28);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0x271000001388;
  *(undefined8 **)(lVar2 + 0xa8) = puVar3;
  *(char **)(lVar2 + 0x98) = "imgui_impl_dx9";
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 0x418;
  lVar2 = FUN_180107ef9();
  *(undefined8 *)(lVar2 + 0x3c) = 0x100000001000;
  *(code **)(lVar2 + 0x50) = FUN_18004187e;
  *(code **)(lVar2 + 0x58) = FUN_1801c7345;
  *(code **)(lVar2 + 0x60) = FUN_1801c738f;
  *puVar3 = param_1;
  (**(code **)(*param_1 + 8))(param_1);
  uVar1 = FUN_1801c73d9(*puVar3);
  *(undefined1 *)(puVar3 + 4) = uVar1;
  FUN_1801c74ba();
  return 1;
}

