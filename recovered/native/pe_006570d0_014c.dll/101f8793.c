/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f8793 */

void __fastcall FUN_101f8793(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_101f7dbf();
  FUN_101f7dbf();
  FUN_101f7dbf();
  FUN_101f7dbf();
  if (*(int *)(param_1 + 0x7e4) != 0) {
    uVar2 = 0;
    do {
      FUN_101f88f3();
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x7e4));
    FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x7e8));
    *(undefined4 *)(param_1 + 0x7e8) = 0;
  }
  FUN_101dfd21();
  FUN_101f8963();
  FUN_101f863c();
  FUN_101f88f3();
  FUN_101f898a();
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0xc10));
  *(undefined4 *)(param_1 + 0xc10) = 0;
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x544));
  *(undefined4 *)(param_1 + 0x544) = 0;
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x548));
  *(undefined4 *)(param_1 + 0x548) = 0;
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x550));
  *(undefined4 *)(param_1 + 0x550) = 0;
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x554));
  *(undefined4 *)(param_1 + 0x554) = 0;
  if (*(code **)(param_1 + 0xc20) != (code *)0x0) {
    (**(code **)(param_1 + 0xc20))(*(undefined4 *)(param_1 + 0xc1c));
    FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0xc1c));
    *(undefined4 *)(param_1 + 0xc1c) = 0;
  }
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0xc38));
  *(undefined4 *)(param_1 + 0xc38) = 0;
  return;
}

