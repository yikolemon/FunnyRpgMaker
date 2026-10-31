/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129cd6 */

void __fastcall FUN_10129cd6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1;
  iVar2 = *(int *)(param_2 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x18) = param_1;
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x18) = param_1;
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

