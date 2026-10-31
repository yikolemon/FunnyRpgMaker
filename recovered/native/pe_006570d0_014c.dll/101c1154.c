/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1154 */

void FUN_101c1154(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(iVar1 + 0x54);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x60) + 8);
      if (iVar3 == param_1) {
        iVar4 = 0;
      }
      else {
        do {
          iVar4 = iVar3;
          iVar3 = *(int *)(iVar4 + 8);
          if (iVar3 == 0) {
            return;
          }
        } while (iVar3 != param_1);
      }
      if (iVar4 == 0) {
        *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar3 + 8);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
      }
      if (*(code **)(param_1 + 0x14) != (code *)0x0) {
        (**(code **)(param_1 + 0x14))(param_1);
      }
      FUN_101c108b();
      FUN_101c0017(uVar2,param_1);
    }
  }
  return;
}

