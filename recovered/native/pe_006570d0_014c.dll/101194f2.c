/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101194f2 */

void FUN_101194f2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1010331e();
  if (1 < *(int *)(iVar2 + 0xb4)) {
    iVar3 = 1;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0xbc) + iVar3 * 4);
      if ((*(byte *)(iVar1 + 5) & 0x10) == 0) {
        if (*(code **)(iVar2 + 0x70) != (code *)0x0) {
          (**(code **)(iVar2 + 0x70))(iVar1,param_1);
        }
        if (*(code **)(iVar2 + 0x94) != (code *)0x0) {
          (**(code **)(iVar2 + 0x94))(iVar1,param_2);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0xb4));
    if (1 < *(int *)(iVar2 + 0xb4)) {
      iVar3 = 1;
      do {
        iVar1 = *(int *)(*(int *)(iVar2 + 0xbc) + iVar3 * 4);
        if ((*(byte *)(iVar1 + 5) & 0x10) == 0) {
          if (*(code **)(iVar2 + 0x74) != (code *)0x0) {
            (**(code **)(iVar2 + 0x74))(iVar1,param_1);
          }
          if (*(code **)(iVar2 + 0x98) != (code *)0x0) {
            (**(code **)(iVar2 + 0x98))(iVar1,param_2);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0xb4));
    }
  }
  return;
}

