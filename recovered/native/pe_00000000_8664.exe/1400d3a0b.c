/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3a0b */

undefined8 FUN_1400d3a0b(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140081200();
  FUN_140092733("1.92.9 WIP",0xc18,0x54c,8,0x10,0x14,2);
  puVar3 = (undefined8 *)FUN_140077ab4(0x28);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0x271000001388;
  *(undefined8 **)(lVar2 + 0xa8) = puVar3;
  *(char **)(lVar2 + 0x98) = "imgui_impl_dx9";
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 0x418;
  lVar2 = FUN_140081211();
  *(undefined8 *)(lVar2 + 0x3c) = 0x100000001000;
  *(code **)(lVar2 + 0x50) = FUN_1400151ba;
  *(code **)(lVar2 + 0x58) = FUN_1400d3af8;
  *(code **)(lVar2 + 0x60) = FUN_1400d3b42;
  *puVar3 = param_1;
  (**(code **)(*param_1 + 8))(param_1);
  uVar1 = FUN_1400d3b8c(*puVar3);
  *(undefined1 *)(puVar3 + 4) = uVar1;
  FUN_1400d3c6d();
  return 1;
}

