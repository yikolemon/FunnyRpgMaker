/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102246d8 */

int __fastcall FUN_102246d8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -2;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((*(code **)(param_1 + 0x20) != (code *)0x0) && (*(int *)(param_1 + 0x24) != 0)) {
      piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bd0);
      if (piVar1 == (int *)0x0) {
        iVar2 = -4;
      }
      else {
        *(int **)(param_1 + 0x1c) = piVar1;
        *piVar1 = param_1;
        piVar1[0xe] = 0;
        piVar1[1] = 0x3f34;
        iVar2 = FUN_10226334();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
    }
  }
  return iVar2;
}

