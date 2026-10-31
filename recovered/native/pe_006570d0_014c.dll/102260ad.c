/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102260ad */

undefined4 __fastcall FUN_102260ad(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1022621e();
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar1 + 0x38) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x38));
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

