/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e101a */

void FUN_1400e101a(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1400e109a();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 0x20) = param_4;
  iVar1 = FUN_1400e0fcb(param_2);
  *(int *)(param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 0x56) = 0;
  uVar2 = FUN_140077ab4((longlong)(param_4 * param_3 * iVar1));
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  FUN_1401c5830(uVar2,0,(longlong)*(int *)(param_1 + 0x24) *
                        (longlong)*(int *)(param_1 + 0x20) * (longlong)*(int *)(param_1 + 0x1c));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  return;
}

