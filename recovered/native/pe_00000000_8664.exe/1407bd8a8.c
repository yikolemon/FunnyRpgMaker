/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd8a8 */

ulonglong FUN_1407bd8a8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  int iVar3;
  
  iVar3 = (int)((ulonglong)unaff_RBX >> 0x20);
  if (iVar3 == *(short *)(param_1 + 0x1c6)) {
    bVar2 = *(short *)(param_1 + 0x4e) == *(short *)(param_1 + 0x4c);
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) || (iVar3 == *(short *)(param_1 + 0x1c0))) {
    uVar1 = FUN_140754a09();
  }
  else if ((param_2 == *(short *)(param_1 + 0x1e2)) || ((*(byte *)(param_1 + 5) & 0x18) != 0)) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x78);
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x7c);
  }
  return uVar1;
}

