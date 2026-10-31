/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10030d22 */

undefined4 * __thiscall FUN_10030d22(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)*param_1;
  if (iVar4 != 0) {
    iVar2 = param_3[1];
    uVar3 = iVar2 + 1;
    if ((uint)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3,uVar3);
      iVar2 = param_3[1];
      uVar3 = iVar2 + 1;
    }
    param_3[1] = uVar3;
    *(char *)(*param_3 + iVar2) = (char)(0x202b2d00 >> ((byte)(iVar4 << 3) & 0x1f));
  }
  iVar4 = param_3[1];
  uVar3 = iVar4 + 1;
  if ((uint)param_3[2] < uVar3) {
    (*(code *)param_3[3])(param_3,uVar3);
    iVar4 = param_3[1];
    uVar3 = iVar4 + 1;
  }
  param_3[1] = uVar3;
  *(undefined1 *)(*param_3 + iVar4) = 0x30;
  if (*(char *)param_1[1] == '\x01') {
    uVar1 = *(undefined1 *)param_1[2];
    iVar4 = param_3[1];
    uVar3 = iVar4 + 1;
    if ((uint)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3,uVar3);
      iVar4 = param_3[1];
      uVar3 = iVar4 + 1;
    }
    param_3[1] = uVar3;
    *(undefined1 *)(*param_3 + iVar4) = uVar1;
    iVar4 = *(int *)param_1[3];
    if (0 < iVar4) {
      do {
        iVar2 = param_3[1];
        uVar3 = iVar2 + 1;
        if ((uint)param_3[2] < uVar3) {
          (*(code *)param_3[3])(param_3,uVar3);
          iVar2 = param_3[1];
          uVar3 = iVar2 + 1;
        }
        param_3[1] = uVar3;
        *(undefined1 *)(*param_3 + iVar2) = 0x30;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1001909c(*(int *)param_1[4],*(int *)param_1[5] + *(int *)param_1[4]);
  }
  *param_2 = param_3;
  return param_2;
}

