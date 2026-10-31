/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801779a8 */

void FUN_1801779a8(undefined8 *param_1,short *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1[3];
  iVar2 = ((int *)*param_1)[1] * *(int *)*param_1;
  if (param_3 == 2) {
    if (iVar2 != 0) {
      lVar3 = 0;
      do {
        *(ushort *)(lVar1 + 2 + lVar3 * 4) = -(ushort)(*(short *)(lVar1 + lVar3 * 4) != *param_2);
        lVar3 = lVar3 + 1;
      } while (iVar2 != (int)lVar3);
    }
  }
  else if (iVar2 != 0) {
    lVar3 = 0;
    do {
      if (((*(short *)(lVar1 + lVar3 * 8) == *param_2) &&
          (*(short *)(lVar1 + 2 + lVar3 * 8) == param_2[1])) &&
         (*(short *)(lVar1 + 4 + lVar3 * 8) == param_2[2])) {
        *(undefined2 *)(lVar1 + 6 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  return;
}

