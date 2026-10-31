/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044ff0b */

void __fastcall FUN_0044ff0b(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0044f537((int *)(param_1 + 0x6c));
  FUN_0044f537((int *)(param_1 + 0x4d8));
  FUN_0044f537((int *)(param_1 + 0x24));
  FUN_0044f537((int *)(param_1 + 0x4b4));
  if (*(int *)(param_1 + 0x7e4) != 0) {
    uVar2 = 0;
    do {
      FUN_0045006b(iVar1,*(int *)(param_1 + 0x7e8 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x7e4));
    FUN_0041c607(iVar1,*(int *)(param_1 + 0x7e8));
    *(undefined4 *)(param_1 + 0x7e8) = 0;
  }
  FUN_00437491((undefined4 *)(param_1 + 0x90));
  FUN_004500db((undefined4 *)(param_1 + 0x49c),*(int *)(param_1 + 4));
  FUN_0044fdb4((uint *)(param_1 + 0xc24),iVar1);
  FUN_0045006b(iVar1,param_1 + 0x55c);
  FUN_00450102((undefined1 *)(param_1 + 0xbe8),*(int *)(param_1 + 4));
  FUN_0041c607(iVar1,*(int *)(param_1 + 0xc10));
  *(undefined4 *)(param_1 + 0xc10) = 0;
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x544));
  *(undefined4 *)(param_1 + 0x544) = 0;
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x548));
  *(undefined4 *)(param_1 + 0x548) = 0;
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x550));
  *(undefined4 *)(param_1 + 0x550) = 0;
  FUN_0041c607(iVar1,*(int *)(param_1 + 0x554));
  *(undefined4 *)(param_1 + 0x554) = 0;
  if (*(code **)(param_1 + 0xc20) != (code *)0x0) {
    (**(code **)(param_1 + 0xc20))(*(undefined4 *)(param_1 + 0xc1c));
    FUN_0041c607(iVar1,*(int *)(param_1 + 0xc1c));
    *(undefined4 *)(param_1 + 0xc1c) = 0;
  }
  FUN_0041c607(iVar1,*(int *)(param_1 + 0xc38));
  *(undefined4 *)(param_1 + 0xc38) = 0;
  return;
}

