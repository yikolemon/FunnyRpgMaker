/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407740e4 */

void FUN_1407740e4(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar3;
  longlong unaff_RBX;
  uint uVar4;
  ulonglong uVar5;
  longlong in_FS_OFFSET;
  uint *puVar2;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar4 = (int)&stack0xfffffffffffffff8 - 0x14;
  *(undefined4 *)(uVar5 - 0x14) = param_1;
  uVar1 = (int)&stack0xfffffffffffffff8 - 0xc;
  puVar2 = (uint *)(ulonglong)uVar1;
  puVar2[-1] = uVar4;
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0x1012c9d0;
  pcVar3 = (char *)(ulonglong)*(uint *)(in_FS_OFFSET + 0x140774108);
  *puVar2 = *(uint *)(in_FS_OFFSET + 0x140774108);
  *(uint *)(in_FS_OFFSET + 0x840c700000000) = uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_2 >> 8);
  *(undefined1 *)(unaff_RBX + 0x4189ec4d) = *(undefined1 *)(unaff_RBX + 0x4189ec4d);
  *(uint *)(pcVar3 + 0x1c) = uVar1;
  *(undefined4 *)(uVar5 - 4) = 0xffffffff;
  uVar1 = *(uint *)((ulonglong)*(uint *)(uVar5 - 0x14) + 0x2c);
  if (uVar1 != 0) {
    *(ulonglong *)((ulonglong)uVar4 - 8) = (ulonglong)uVar1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((ulonglong)uVar4 - 0x10) = &UNK_14077413b;
    FUN_14075219b();
  }
  *(undefined4 *)(in_FS_OFFSET + 0x5d14c48300000000) = *(undefined4 *)(uVar5 - 0xc);
  return;
}

