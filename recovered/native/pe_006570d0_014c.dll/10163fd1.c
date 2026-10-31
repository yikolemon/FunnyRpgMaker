/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10163fd1 */

void FUN_10163fd1(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(DAT_1039d74c + 0x2308);
  if (param_1 == -1) {
    param_1 = puVar1[0x12];
  }
  if ((*(byte *)(puVar1 + 1) & 7) != 0) {
    iVar3 = 0xffff;
    if (param_1 != puVar1[0x10]) {
      iVar3 = param_1;
    }
    *(undefined1 *)((int)puVar1 + 0x1f2) = 1;
    *(short *)((int)puVar1 + 0x1da) = (short)iVar3;
    *(undefined2 *)((int)puVar1 + 0x4e) = *(undefined2 *)(puVar1 + 0x13);
    uVar2 = FUN_100fa6c3("##ContextMenu",0,*puVar1);
    FUN_10115eed(uVar2,0);
  }
  return;
}

