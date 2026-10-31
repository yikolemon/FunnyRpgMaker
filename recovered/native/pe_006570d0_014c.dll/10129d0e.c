/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129d0e */

void __fastcall FUN_10129d0e(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xdf;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10129d0e();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10129d0e();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    for (iVar1 = *(int *)(param_1 + 0x80); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) | 0x20;
    }
  }
  return;
}

