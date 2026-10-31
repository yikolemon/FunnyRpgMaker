/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015230b */

int __fastcall FUN_1015230b(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  FUN_10152384();
  if (*(short *)(param_1 + 0xa18) == 99) {
    FUN_10152398();
  }
  if (param_2 < 1000) {
    iVar2 = *(int *)(param_1 + 0xa1c);
    while (999 < iVar2 + param_2) {
      FUN_10152398();
      iVar2 = *(int *)(param_1 + 0xa1c);
    }
    sVar1 = *(short *)(param_1 + 0xa18);
    *(short *)(param_1 + 0xa18) = sVar1 + 1;
    param_1 = sVar1 * 0x10 + param_1;
  }
  else {
    *(undefined2 *)(param_1 + 0xa18) = 0;
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    param_1 = 0;
  }
  return param_1;
}

