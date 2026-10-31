/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00437e95 */

undefined4 __fastcall FUN_00437e95(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  puVar2 = *(undefined4 **)(iVar1 + 0x68);
  if (puVar2[5] == 0) {
    uVar4 = (*(code *)**(undefined4 **)(param_1[0x66] + 0x38))(*puVar2,puVar2[1],1,iVar1,0);
    uVar3 = (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x28))(uVar4,*(undefined4 *)(iVar1 + 4));
    (**(code **)(*(int *)(param_1[0x66] + 0x38) + 4))(uVar4);
  }
  else {
    uVar3 = (*(code *)(*(undefined4 **)(param_1[0x66] + 0x38))[0xb])(&LAB_00437f26,param_1,0);
  }
  (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x34))(uVar3,*(undefined4 *)(iVar1 + 4));
  (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x38))(uVar3,*(undefined2 *)(iVar1 + 0x44));
  return uVar3;
}

