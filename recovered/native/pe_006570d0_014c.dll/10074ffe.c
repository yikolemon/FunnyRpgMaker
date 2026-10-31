/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074ffe */

void __thiscall FUN_10074ffe(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_2 + 0xc))();
  piVar2 = (int *)0x0;
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0xc) = param_1 + 4;
    *(int *)(param_1 + 0x10) = param_1 + 8;
    *(int *)(param_1 + 0x1c) = param_1 + 0x14;
    *(int *)(param_1 + 0x20) = param_1 + 0x18;
    *(int *)(param_1 + 0x2c) = param_1 + 0x24;
    *(int *)(param_1 + 0x30) = param_1 + 0x28;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    piVar2 = param_2;
  }
  *(int **)(param_1 + 0x38) = piVar2;
  return;
}

