/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001fc1b */

void FUN_1001fc1b(uint *param_1,int param_2,uint *param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_4 || param_1 != param_3) {
    uVar1 = -1 << ((byte)param_2 & 0x1f);
    if (param_1 == param_3) {
      uVar3 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      uVar2 = uVar3 & uVar1;
      uVar1 = ~uVar3 | ~uVar1;
      param_3 = param_1;
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar3 = uVar1;
      }
      *param_1 = uVar3 | ~uVar1 & *param_1;
      _memset(param_1 + 1,-(uint)param_5,(int)param_3 - (int)(param_1 + 1));
      if (param_4 == 0) {
        return;
      }
      uVar2 = 0xffffffff >> (-(char)param_4 & 0x1fU);
      uVar1 = ~uVar2;
    }
    uVar3 = 0;
    if (param_5 != 0) {
      uVar3 = uVar2;
    }
    *param_3 = uVar3 | uVar1 & *param_3;
  }
  return;
}

