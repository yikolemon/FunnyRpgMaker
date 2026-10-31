/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171f12 */

void __fastcall FUN_10171f12(int *param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[3];
  iVar2 = ((int *)*param_1)[1] * *(int *)*param_1;
  if (param_3 == 2) {
    if (iVar2 != 0) {
      iVar3 = 0;
      do {
        *(ushort *)(iVar1 + 2 + iVar3 * 4) = -(ushort)(*(short *)(iVar1 + iVar3 * 4) != *param_2);
        iVar3 = iVar3 + 1;
      } while (iVar2 - iVar3 != 0);
    }
  }
  else if (iVar2 != 0) {
    iVar3 = 0;
    do {
      if (((*(short *)(iVar1 + iVar3 * 8) == *param_2) &&
          (*(short *)(iVar1 + 2 + iVar3 * 8) == param_2[1])) &&
         (*(short *)(iVar1 + 4 + iVar3 * 8) == param_2[2])) {
        *(undefined2 *)(iVar1 + 6 + iVar3 * 8) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar2 - iVar3 != 0);
  }
  return;
}

