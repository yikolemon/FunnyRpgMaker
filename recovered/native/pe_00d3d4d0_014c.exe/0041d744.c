/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d744 */

void __cdecl FUN_0041d744(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(iVar1 + 0x54);
    if (iVar3 != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
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
      FUN_0041d67b(param_1);
      FUN_0041c607(iVar2,param_1);
    }
  }
  return;
}

