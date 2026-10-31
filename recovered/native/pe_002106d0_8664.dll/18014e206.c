/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014e206 */

void FUN_18014e206(int *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(undefined2 *)(param_1 + 1) = 0;
  if (*(int *)(lVar1 + 0x167c) == *param_1) {
    if ((*(byte *)(lVar1 + 0x2acc) & 0x40) != 0) {
      FUN_1800fdfea("[selection] BeginBoxSelect() 0X%08X: Deactivate\n");
    }
    FUN_180107456();
  }
  *param_1 = 0;
  return;
}

