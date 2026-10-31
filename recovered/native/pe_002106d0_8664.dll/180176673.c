/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180176673 */

void FUN_180176673(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x38;
  iVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x28),lVar1,*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    lVar3 = param_1 + 0x39;
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar3 = iVar2 + lVar1;
  }
  *(longlong *)(param_1 + 0xc0) = lVar1;
  *(longlong *)(param_1 + 200) = lVar3;
  return;
}

