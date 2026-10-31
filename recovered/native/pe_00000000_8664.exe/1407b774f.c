/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b774f */

void FUN_1407b774f(void)

{
  uint uVar1;
  uint uVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong in_FS_OFFSET;
  uint *puVar2;
  ulonglong uVar4;
  
  uVar7 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (int)&stack0xffffffffffffffe0 - 0xdc;
  uVar4 = (ulonglong)uVar3;
  uVar1 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar2 = (uint *)(ulonglong)uVar1;
  puVar2[-1] = uVar3;
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0x1016a600;
  uVar3 = *(uint *)(in_FS_OFFSET + 0x1407b7776);
  *puVar2 = uVar3;
  *(uint *)(in_FS_OFFSET + -0x28b3f27500000000) = uVar1;
  *(undefined1 *)((ulonglong)*(uint *)((ulonglong)uVar3 + 0x14cc) + 0xfb) = 1;
  *(uint *)(uVar7 - 0x24) = uVar3;
  uVar3 = *(uint *)((ulonglong)uVar3 + 0x14cc);
  *(uint *)(uVar7 - 0x28) = uVar3;
  if (*(char *)((ulonglong)uVar3 + 0xfe) != '\0') {
    uVar3 = *(uint *)(uVar7 - 0x18);
    *(uint *)(in_FS_OFFSET + -0x3b7e277700000000) = uVar3;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    return;
  }
  *(ulonglong *)(uVar4 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x6c);
  *(undefined8 *)(uVar4 - 0x10) = 0x1407b77ba;
  FUN_1407642b4();
  if ((*(uint *)(uVar7 + 0x14) & 0x3000000) != 0) {
    puVar5 = (undefined4 *)(ulonglong)((int)(uVar4 - 8) - 4);
    *puVar5 = *(undefined4 *)(uVar7 - 0x68);
    puVar5[1] = 0x40800000;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar5 + -2) = &UNK_1407b77e1;
    FUN_140755a9a();
  }
  *(undefined4 *)(uVar7 - 0x20) = 0;
  puVar6 = (undefined4 *)(ulonglong)((int)(uVar4 - 8) - 4);
  *puVar6 = *(undefined4 *)(uVar7 - 0x6c);
  puVar6[1] = 0x40800000;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -2) = &UNK_1407b7816;
  FUN_140755a9a();
}

