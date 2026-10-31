/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c7136 */

void FUN_1400c7136(int *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined2 *)(param_1 + 1) = 0;
  if (*(int *)(lVar1 + 0x167c) == *param_1) {
    if ((*(byte *)(lVar1 + 0x2acc) & 0x40) != 0) {
      FUN_1400772a6("[selection] BeginBoxSelect() 0X%08X: Deactivate\n");
    }
    FUN_14008076e();
  }
  *param_1 = 0;
  return;
}

