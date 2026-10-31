/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103445 */

void FUN_10103445(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = DAT_1039d74c;
  FUN_101034e2(param_1,0);
  FUN_101026ba(*(undefined4 *)(param_1 + 0xb4),param_1);
  if (*(char *)(iVar4 + 0x6a) == '\x01') {
    *(undefined1 *)(iVar4 + 0x2040) = 0;
  }
  uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x3b0) + 0x50);
  *(ulonglong *)(iVar4 + 0x1540) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(iVar4 + 0xac8) >> 0x20) -
                (float)((ulonglong)uVar1 >> 0x20),
                (float)*(undefined8 *)(iVar4 + 0xac8) - (float)uVar1);
  *(undefined1 *)(iVar4 + 0x1536) = 1;
  FUN_101036a0();
  if (((*(byte *)(param_1 + 0xc) & 4) != 0) ||
     (bVar3 = true, (*(byte *)(*(int *)(param_1 + 0x3b0) + 0xc) & 4) != 0)) {
    bVar3 = false;
  }
  if ((*(int *)(param_1 + 0x434) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x434) + 0x7c), iVar2 != 0)) {
    bVar3 = (bool)(bVar3 & (*(byte *)(iVar2 + 0xc) & 4) == 0);
  }
  if (bVar3) {
    *(int *)(iVar4 + 0x14dc) = param_1;
  }
  return;
}

