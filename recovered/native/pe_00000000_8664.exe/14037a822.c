/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037a822 */

void FUN_14037a822(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(DAT_14062a630 + 0x24f8);
  if (param_1 == -1) {
    param_1 = puVar1[0x1d];
  }
  if ((*(byte *)(puVar1 + 1) & 7) != 0) {
    *(undefined1 *)((longlong)puVar1 + 0x23e) = 1;
    iVar3 = 0xffff;
    if (param_1 != puVar1[0x1b]) {
      iVar3 = param_1;
    }
    *(short *)((longlong)puVar1 + 0x226) = (short)iVar3;
    *(undefined2 *)((longlong)puVar1 + 0x7a) = *(undefined2 *)(puVar1 + 0x1e);
    uVar2 = FUN_140310209("eftAlt",0,*puVar1);
    FUN_14032c1b5(uVar2,0);
    return;
  }
  return;
}

