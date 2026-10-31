/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037e2b1 */

void FUN_14037e2b1(undefined8 *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < param_4) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x14);
    iVar2 = param_4;
    do {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0xffff;
      *(byte *)((longlong)puVar1 + 0xe) = *(byte *)((longlong)puVar1 + 0xe) & 0xe0 | 0xc;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)param_1 = param_2;
  *(undefined2 *)((longlong)param_1 + 0xc) = param_3;
  *(short *)((longlong)param_1 + 0xe) = (short)param_4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

