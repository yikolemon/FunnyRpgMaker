/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001575a */

longlong FUN_14001575a(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = 0;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      iVar2 = *(int *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(int **)(param_1 + 0x50) = iVar2 - (int)lVar3;
    }
    cVar1 = FUN_140015412(param_1);
    iVar2 = FUN_1401a29f0();
    lVar3 = 0;
    if (iVar2 == 0) {
      lVar3 = param_1;
    }
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x74) = DAT_140f2a400;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar3;
}

