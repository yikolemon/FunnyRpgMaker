/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018bfde */

void __thiscall
FUN_1018bfde(int param_1,undefined4 param_2,float param_3,uint param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if (DAT_102b70e0 <= param_3 && 0xffffff < param_4) {
    if (param_5 < 1) {
      FUN_101896ac(param_2,param_3 + DAT_102b8d58,0,0x30,0);
      iVar1 = *(int *)(param_1 + 0x38) + -1;
      *(int *)(param_1 + 0x38) = iVar1;
    }
    else {
      iVar1 = FUN_10125d9a(param_5,3,0x200);
      FUN_10189cf2(param_2,param_3 + DAT_102b8d58,0,
                   ((DAT_102b8a50 + (float)iVar1) * DAT_102b956c) / (float)iVar1,iVar1 + -1);
      iVar1 = *(int *)(param_1 + 0x38);
    }
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),iVar1,param_4,param_6,0x200);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

