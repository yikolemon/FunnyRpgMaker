/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076945d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076945d(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar3 = &stack0xffffffffffffffe8;
  uVar6 = (ulonglong)_DAT_150b06bb2;
  while ((*(uint *)(uVar6 + 0x2308) != 0 &&
         (*(int *)((ulonglong)*(uint *)(uVar6 + 0x2308) + 0x158) == *(int *)(uVar6 + 0x14cc)))) {
    *(undefined8 *)(puVar3 + -8) = 0x10349b25;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769488;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x140769490;
    FUN_1407baf1e();
  }
  uVar1 = *(uint *)(uVar6 + 0x14cc);
  uVar2 = (ulonglong)uVar1;
  while ((*(uint *)(uVar6 + 0x2358) != 0 && (*(uint *)(ulonglong)*(uint *)(uVar6 + 0x2358) == uVar1)
         )) {
    *(undefined8 *)(puVar3 + -8) = 0x10349a5a;
    *(undefined8 *)(puVar3 + -0x10) = 0x1407694b0;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x1407694b8;
    FUN_1407a65fb();
  }
  while ((*(uint *)(uVar6 + 0x2414) != 0 &&
         (*(uint *)(ulonglong)*(uint *)((ulonglong)*(uint *)(uVar6 + 0x2414) + 0x28) == uVar1))) {
    *(undefined8 *)(puVar3 + -8) = 0x10349998;
    *(undefined8 *)(puVar3 + -0x10) = 0x1407694cb;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x1407694d3;
    FUN_1407a28c9();
  }
  uVar7 = (ulonglong)*(uint *)(puVar3 + 0x10);
  if (*(char *)(uVar2 + 0x1a7) == '\x01') {
    *(undefined8 *)(puVar3 + -8) = 0x10349a45;
    *(undefined8 *)(puVar3 + -0x10) = 0x1407694f4;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x1407694fc;
    FUN_1407a49c3();
  }
  while ((int)*(short *)(uVar7 + 4) < *(int *)(uVar2 + 0x1cc)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349a81;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769508;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x140769510;
    FUN_1407a1257();
  }
  while ((int)*(short *)(uVar7 + 0xe) < *(int *)(uVar6 + 0x1fb0)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349a6e;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769528;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x140769530;
    FUN_14076c4ff();
  }
  while ((int)*(short *)(uVar7 + 2) < *(int *)(uVar2 + 0x138)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349ba7;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769548;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x140769550;
    FUN_14076b438();
  }
  while (*(short *)(uVar7 + 0x14) < *(short *)(uVar6 + 0x25e8)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349b84;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769568;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    if ((*(byte *)(uVar6 + 0x1e40) & 0x40) == 0) {
      *(undefined8 *)(puVar3 + -8) = 0x140769579;
      FUN_140769306();
      *(undefined1 *)
       (((ulonglong)*(uint *)(uVar6 + 0x14b0) - 6) +
       (ulonglong)(uint)(*(int *)(uVar6 + 0x14a8) * 0x70)) = 0;
    }
    else {
      *(undefined8 *)(puVar3 + -8) = 0x140769592;
      FUN_140769831();
    }
  }
  while ((int)*(short *)(uVar7 + 6) < *(int *)(uVar6 + 0x1f74)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349a17;
    *(undefined8 *)(puVar3 + -0x10) = 0x1407695ab;
    FUN_140754dc5();
    uVar4 = (ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(uVar4 - 8) = 1;
    *(undefined8 *)(uVar4 - 0x10) = 0x1407695b5;
    FUN_140754d5e();
    puVar3 = (undefined1 *)(ulonglong)((int)(uVar4 - 8) + 4);
  }
  while ((int)*(short *)(uVar7 + 0x10) < *(int *)(uVar6 + 0x1fa4)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349ae7;
    *(undefined8 *)(puVar3 + -0x10) = 0x1407695d0;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x1407695d8;
    FUN_140769709();
  }
  while ((int)*(short *)(uVar7 + 8) < *(int *)(uVar6 + 0x1f80)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349a2f;
    *(undefined8 *)(puVar3 + -0x10) = 0x1407695f0;
    FUN_140754dc5();
    uVar5 = (ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(uVar5 - 8) = 1;
    *(undefined8 *)(uVar5 - 0x10) = 0x1407695fa;
    FUN_140755394();
    puVar3 = (undefined1 *)(ulonglong)((int)(uVar5 - 8) + 4);
  }
  while ((int)*(short *)(uVar7 + 10) < *(int *)(uVar6 + 0x1f8c)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349986;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769615;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x14076961d;
    FUN_14076acd0();
  }
  while ((int)*(short *)(uVar7 + 0xc) < *(int *)(uVar6 + 0x1f98)) {
    *(undefined8 *)(puVar3 + -8) = 0x10349afd;
    *(undefined8 *)(puVar3 + -0x10) = 0x140769635;
    FUN_140754dc5();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -8) + 4);
    *(undefined8 *)(puVar3 + -8) = 0x14076963d;
    FUN_1407692bf();
  }
  return;
}

