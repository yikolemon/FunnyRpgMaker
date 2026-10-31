/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdda8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101bdda8(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_1010330d();
  FUN_101145d8("1.92.9 WIP",_DAT_10301bd0,_UNK_10301bd4,_UNK_10301bd8,_UNK_10301bdc,0x14,2);
  puVar3 = (undefined4 *)FUN_100fa1fa(0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  puVar3[3] = 5000;
  puVar3[4] = 10000;
  *(undefined4 **)(iVar2 + 0x84) = puVar3;
  *(char **)(iVar2 + 0x7c) = "imgui_impl_dx9";
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x418;
  iVar2 = FUN_1010331e();
  *(undefined4 *)(iVar2 + 0x24) = 0x1000;
  *(undefined4 *)(iVar2 + 0x20) = 0x1000;
  *(code **)(iVar2 + 0x2c) = FUN_10041162;
  *(undefined1 **)(iVar2 + 0x30) = &LAB_101bde6a;
  *(undefined1 **)(iVar2 + 0x34) = &LAB_101bde9d;
  *puVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  uVar1 = FUN_101bdece();
  *(undefined1 *)(puVar3 + 5) = uVar1;
  FUN_101bdf76();
  return 1;
}

