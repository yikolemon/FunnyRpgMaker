/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c31c */

int __cdecl FUN_0041c31c(int param_1,uint param_2,uint param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0x23;
  }
  else if (param_4 == 0) {
    iVar2 = 6;
  }
  else {
    iVar2 = 0x10;
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 0x54);
      if ((pcVar1 != (code *)0x0) && ((param_3 & 3) != 0 || (param_3 & 0xf0000) == 0x10000)) {
        iVar2 = (*pcVar1)(param_1,param_2,1,param_3,param_4);
        if (iVar2 == 0) {
          iVar2 = FUN_0041c3c4(param_1,param_4,1,param_3);
          return iVar2;
        }
        if ((char)iVar2 != '\a') {
          return iVar2;
        }
      }
      iVar2 = 7;
      if ((param_3 >> 0x1d & 1) == 0) {
        iVar2 = FUN_0041c41f(param_1,param_2,1,param_3,param_4);
      }
    }
  }
  return iVar2;
}

