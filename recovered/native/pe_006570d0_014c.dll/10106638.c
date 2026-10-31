/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10106638 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106638(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_1039d74c;
  if ((*(char *)(DAT_1039d74c + 0x2250) == '\x01') && ((*(byte *)(DAT_1039d74c + 0x27b4) & 2) != 0))
  {
    FUN_100f99e6("[dragdrop] ClearDragDrop()\n");
  }
  *(undefined1 *)(iVar4 + 0x2250) = 0;
  *(undefined4 *)(iVar4 + 0x2274) = 0;
  *(undefined4 *)(iVar4 + 0x2278) = 0;
  *(undefined4 *)(iVar4 + 0x227c) = 0;
  *(undefined4 *)(iVar4 + 0x2280) = 0;
  *(undefined4 *)(iVar4 + 0x2284) = 0;
  *(undefined4 *)(iVar4 + 0x2288) = 0;
  *(undefined4 *)(iVar4 + 0x228c) = 0;
  *(undefined4 *)(iVar4 + 0x2290) = 0;
  *(undefined1 *)(iVar4 + 0x2294) = 0;
  *(undefined4 *)(iVar4 + 0x2260) = 0;
  *(undefined4 *)(iVar4 + 0x2264) = 0;
  *(undefined4 *)(iVar4 + 0x2268) = 0;
  *(undefined4 *)(iVar4 + 0x226c) = 0;
  *(undefined4 *)(iVar4 + 0x2270) = 0xffffffff;
  *(undefined2 *)(iVar4 + 0x2295) = 0;
  *(undefined4 *)(iVar4 + 0x22c0) = 0;
  uVar3 = _UNK_102b8c0c;
  uVar2 = _UNK_102b8c08;
  uVar1 = _UNK_102b8c04;
  *(undefined4 *)(iVar4 + 0x22c8) = _DAT_102b8c00;
  *(undefined4 *)(iVar4 + 0x22cc) = uVar1;
  *(undefined4 *)(iVar4 + 0x22d0) = uVar2;
  *(undefined4 *)(iVar4 + 0x22d4) = uVar3;
  if (*(int *)(iVar4 + 0x22e4) != 0) {
    *(undefined4 *)(iVar4 + 0x22e0) = 0;
    *(undefined4 *)(iVar4 + 0x22dc) = 0;
    FUN_100fa2cb(*(int *)(iVar4 + 0x22e4));
    *(undefined4 *)(iVar4 + 0x22e4) = 0;
  }
  *(undefined4 *)(iVar4 + 0x22e8) = 0;
  *(undefined4 *)(iVar4 + 0x22ec) = 0;
  *(undefined4 *)(iVar4 + 0x22f0) = 0;
  *(undefined4 *)(iVar4 + 0x22f4) = 0;
  return;
}

