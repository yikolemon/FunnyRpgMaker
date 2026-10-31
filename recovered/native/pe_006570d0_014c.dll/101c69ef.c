/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c69ef */

void __fastcall FUN_101c69ef(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    iVar3 = FUN_101c1fae(puVar1 + 0x25,param_1);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x34) != 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x38) + 0x14))(*(int *)(param_1 + 0x34));
      }
      FUN_101c1fd2(puVar1 + 0x25,iVar3);
      FUN_101c0017(uVar2,iVar3);
      FUN_101c69d4();
      return;
    }
  }
  return;
}

