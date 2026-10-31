/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002472e */

int FUN_1002472e(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (99 < param_2) {
    do {
      param_2 = uVar2 / 100;
      *(undefined2 *)(param_1 + -2 + param_3) = *(undefined2 *)(&DAT_102903d0 + (uVar2 % 100) * 2);
      param_3 = param_3 + -2;
      bVar1 = 9999 < uVar2;
      uVar2 = param_2;
    } while (bVar1);
  }
  if (param_2 < 10) {
    *(byte *)(param_1 + -1 + param_3) = (byte)param_2 | 0x30;
    param_3 = param_3 + -1;
  }
  else {
    *(undefined2 *)(param_1 + -2 + param_3) = *(undefined2 *)(&DAT_102903d0 + param_2 * 2);
    param_3 = param_3 + -2;
  }
  return param_1 + param_3;
}

