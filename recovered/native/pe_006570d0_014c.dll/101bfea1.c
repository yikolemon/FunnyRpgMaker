/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bfea1 */

undefined4 FUN_101bfea1(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(*(int **)(param_1 + 0x60),"font-format");
      return uVar2;
    }
  }
  return 0;
}

