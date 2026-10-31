/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ea15b */

void __fastcall
FUN_101ea15b(int param_1,undefined4 param_2,short param_3,short *param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  if (*(char *)(param_1 + 0x124) == '\0') {
    if (*(short *)(param_1 + 0x174) == -1) {
      *param_4 = (short)*(undefined4 *)(param_1 + 0xdc) - param_3;
      sVar1 = *(short *)(param_1 + 0xdc);
      sVar2 = *(short *)(param_1 + 0xde);
    }
    else {
      *param_4 = *(short *)(param_1 + 0x1ba) - param_3;
      sVar1 = *(short *)(param_1 + 0x1ba);
      sVar2 = *(short *)(param_1 + 0x1bc);
    }
    sVar3 = sVar2 - sVar1;
    if (sVar2 < sVar1) {
      sVar3 = sVar1 - sVar2;
    }
    *param_5 = sVar3;
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x21c) + 0xa8))(param_1,1,param_2,param_4,param_5);
  }
  return;
}

