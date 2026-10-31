/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c70dc */

void FUN_1400c70dc(undefined4 *param_1,undefined8 param_2)

{
  if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x40) != 0) {
    FUN_1400772a6("[selection] BeginBoxSelect() 0X%08X: Activate\n",*param_1);
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 10) = param_2;
  FUN_140080508(*param_1,param_2);
  FUN_1400815f4();
  if ((*(char *)((longlong)param_1 + 6) == '\x01') &&
     ((*(byte *)((longlong)param_1 + 0xd) & 0x30) == 0)) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}

