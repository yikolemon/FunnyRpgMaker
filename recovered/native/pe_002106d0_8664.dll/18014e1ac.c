/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014e1ac */

void FUN_18014e1ac(undefined4 *param_1,undefined8 param_2)

{
  if ((*(byte *)(DAT_180419160 + 0x2acc) & 0x40) != 0) {
    FUN_1800fdfea("[selection] BeginBoxSelect() 0X%08X: Activate\n",*param_1);
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 10) = param_2;
  FUN_1801071f0(*param_1,param_2);
  FUN_1801082dc();
  if ((*(char *)((longlong)param_1 + 6) == '\x01') &&
     ((*(byte *)((longlong)param_1 + 0xd) & 0x30) == 0)) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}

