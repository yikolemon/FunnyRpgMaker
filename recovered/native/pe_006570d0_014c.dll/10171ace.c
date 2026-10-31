/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171ace */

void __fastcall FUN_10171ace(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (param_2 < 0) {
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    else {
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar1 = *(int *)(param_1 + 0xac);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xac);
        iVar2 = *(int *)(param_1 + 0xb0) - iVar1;
        iVar3 = param_2 - iVar2;
        if (iVar3 != 0 && iVar2 <= param_2) {
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xb0);
          (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x1c),iVar3);
          return;
        }
      }
      iVar1 = iVar1 + param_2;
    }
    *(int *)(param_1 + 0xac) = iVar1;
  }
  return;
}

