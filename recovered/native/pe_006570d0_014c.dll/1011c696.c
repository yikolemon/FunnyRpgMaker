/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c696 */

void __fastcall FUN_1011c696(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (((iVar1 != 0) && (iVar1 != param_2)) && (*(int *)(iVar1 + 0x434) == param_1)) {
    *(undefined4 *)(iVar1 + 0x434) = 0;
  }
  *(int *)(param_2 + 0x434) = param_1;
  *(int *)(param_1 + 0x78) = param_2;
  return;
}

