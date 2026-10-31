/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f596 */

void __thiscall FUN_1002f596(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    iVar1 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = 1;
    uVar3 = 1 << ((byte)iVar1 & 0x1f);
    *(undefined4 *)*param_1 = 5;
    if (param_1[2] == 0) {
      (*(code *)param_1[3])(param_1,1);
      uVar2 = (uint)(param_1[2] != 0);
    }
    param_1[1] = uVar2;
    param_1[0x25] = 0;
    while (uVar3 = (int)uVar3 >> 1, uVar3 != 0) {
      FUN_1002fa4c();
      if ((uVar3 & param_2) != 0) {
        FUN_1002fe68(5);
      }
    }
    FUN_1002f4fa();
    return;
  }
  *(undefined4 *)*param_1 = 1;
  if (param_1[2] == 0) {
    (*(code *)param_1[3])(param_1,1);
    uVar2 = (uint)(param_1[2] != 0);
  }
  else {
    uVar2 = 1;
  }
  param_1[1] = uVar2;
  param_1[0x25] = 0;
  return;
}

