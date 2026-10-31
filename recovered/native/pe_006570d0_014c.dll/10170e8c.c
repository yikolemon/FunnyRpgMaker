/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10170e8c */

void __fastcall FUN_10170e8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x28;
  iVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined4 *)(param_1 + 0x1c),iVar1,*(undefined4 *)(param_1 + 0x24));
  *(int *)(param_1 + 0xa8) =
       *(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xb4));
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar2 = param_1 + 0x29;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    iVar2 = iVar2 + iVar1;
  }
  *(int *)(param_1 + 0xac) = iVar1;
  *(int *)(param_1 + 0xb0) = iVar2;
  return;
}

