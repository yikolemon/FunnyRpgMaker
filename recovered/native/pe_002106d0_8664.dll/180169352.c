/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180169352 */

void FUN_180169352(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(DAT_180419160 + 0x24f8);
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
    uVar2 = FUN_1800fed39("##ContextMenu",0,*puVar1);
    FUN_18011ace5(uVar2,0);
    return;
  }
  return;
}

