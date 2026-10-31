/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402852d4 */

void FUN_1402852d4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &DAT_1404c9bf8;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    iVar1 = *(int *)(param_1 + 0x12);
    uVar2 = param_1[0x11];
    *(undefined8 *)param_1[3] = uVar2;
    *(undefined8 *)param_1[7] = uVar2;
    *(int *)param_1[10] = iVar1 - (int)uVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) == '\x01') {
    FUN_140286f86(param_1);
  }
  FUN_140285f2a(param_1);
  return;
}

