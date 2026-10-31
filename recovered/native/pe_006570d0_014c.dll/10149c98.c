/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149c98 */

void __fastcall FUN_10149c98(undefined4 *param_1,undefined4 param_2)

{
  if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x40) != 0) {
    FUN_100f99e6("[selection] BeginBoxSelect() 0X%08X: Activate\n",*param_1);
  }
  *(undefined2 *)(param_1 + 1) = 1;
  param_1[10] = param_2;
  FUN_101026ba(*param_1,param_2);
  FUN_101036a0();
  if ((*(char *)((int)param_1 + 6) == '\x01') && ((*(byte *)((int)param_1 + 0xd) & 0x30) == 0)) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}

