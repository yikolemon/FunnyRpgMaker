/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d119 */

undefined4 __fastcall FUN_0047d119(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_0047d28a(param_1);
  uVar2 = 0xfffffffe;
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar3 + 0x38) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar3 + 0x38));
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

