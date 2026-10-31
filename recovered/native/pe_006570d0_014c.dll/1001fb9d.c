/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001fb9d */

void FUN_1001fb9d(int *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6,
                 int param_7)

{
  uint uVar1;
  bool bVar2;
  
  if (param_3 != param_5 || param_2 != param_4) {
    do {
      bVar2 = param_5 != 0;
      param_5 = param_5 - 1;
      param_4 = param_4 + (bVar2 - 1);
      if (!bVar2) {
        param_5 = 0x1f;
      }
      bVar2 = param_7 != 0;
      param_7 = param_7 + -1;
      if (!bVar2) {
        param_7 = 0x1f;
      }
      param_6 = param_6 + (bVar2 - 1);
      uVar1 = 1 << ((byte)param_7 & 0x1f);
      if ((*param_4 >> (param_5 & 0x1f) & 1) == 0) {
        uVar1 = ~uVar1 & *param_6;
      }
      else {
        uVar1 = uVar1 | *param_6;
      }
      *param_6 = uVar1;
    } while (param_3 != param_5 || param_2 != param_4);
  }
  *param_1 = (int)param_6;
  param_1[1] = param_7;
  return;
}

