/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e665e */

void FUN_1407e665e(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar4 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  if (*(int *)((ulonglong)*(uint *)((longlong)puVar4 + 0x20) + 0x294) !=
      *(int *)((longlong)puVar4 + 0x24)) {
    uVar3 = (ulonglong)*(uint *)((longlong)puVar4 + 0x20);
    iVar1 = *(int *)(uVar3 + 0x54);
    if (iVar1 != 0) {
      uVar2 = *(uint *)(uVar3 + 0x5c);
      uVar6 = 0;
      do {
        *(undefined8 *)((longlong)puVar4 + -8) = *(undefined8 *)(uVar2 + uVar6);
        *(ulonglong *)((longlong)puVar4 + -0x10) = uVar3;
        *(undefined8 *)((longlong)puVar4 + -0x18) = 0x1407e6695;
        FUN_1407e6537();
        puVar4 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -0x10) + 8);
        uVar5 = (int)uVar6 + 4;
        uVar6 = (ulonglong)uVar5;
      } while (iVar1 << 2 != uVar5);
    }
    if (((*(int *)(uVar3 + 0x290) != 0) && (*(uint *)(uVar3 + 0x294) != 0)) &&
       (uVar2 = *(uint *)((ulonglong)*(uint *)(uVar3 + 0x294) + 8), uVar2 != 0)) {
      *(ulonglong *)((longlong)puVar4 + -8) = uVar3;
      *(undefined8 *)((longlong)puVar4 + -0x10) = 0x1407e66bc;
      (*(code *)(ulonglong)uVar2)();
      puVar4 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -8) + 4);
    }
    uVar2 = *(uint *)((longlong)puVar4 + 0x24);
    *(uint *)(uVar3 + 0x294) = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)(uVar3 + 0x298) = 0x1033c442;
    }
    else {
      *(undefined4 *)(uVar3 + 0x298) = *(undefined4 *)(ulonglong)uVar2;
      if ((*(int *)(uVar3 + 0x290) != 0) &&
         (uVar2 = ((undefined4 *)(ulonglong)uVar2)[1], uVar2 != 0)) {
        *(ulonglong *)((longlong)puVar4 + -8) = uVar3;
        *(undefined8 *)((longlong)puVar4 + -0x10) = 0x1407e66e8;
        (*(code *)(ulonglong)uVar2)();
        puVar4 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -8) + 4);
      }
    }
    iVar1 = *(int *)(uVar3 + 0x54);
    if (iVar1 != 0) {
      uVar6 = (ulonglong)*(uint *)((longlong)puVar4 + 0x20);
      uVar2 = *(uint *)(uVar6 + 0x5c);
      uVar3 = 0;
      do {
        *(undefined8 *)((longlong)puVar4 + -8) = *(undefined8 *)(uVar2 + uVar3);
        *(ulonglong *)((longlong)puVar4 + -0x10) = uVar6;
        *(undefined8 *)((longlong)puVar4 + -0x18) = 0x1407e6713;
        FUN_1407e87a5();
        puVar4 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -0x10) + 8);
        uVar5 = (int)uVar3 + 4;
        uVar3 = (ulonglong)uVar5;
      } while (iVar1 << 2 != uVar5);
      if (*(int *)(uVar6 + 0x54) != 0) {
        uVar2 = *(uint *)((ulonglong)*(uint *)((longlong)puVar4 + 0x20) + 0x5c);
        *(uint *)((longlong)puVar4 + 4) = uVar2 + *(int *)(uVar6 + 0x54) * 4;
        do {
          puVar4[2] = uVar2;
          uVar2 = *(uint *)(ulonglong)uVar2;
          *puVar4 = uVar2;
          iVar1 = *(int *)((ulonglong)uVar2 + 0x18);
          uVar2 = puVar4[8];
          if (iVar1 != 0) {
            uVar5 = *(uint *)((ulonglong)*puVar4 + 0x20);
            uVar3 = 0;
            do {
              *(undefined8 *)((longlong)puVar4 + -8) = *(undefined8 *)(uVar5 + uVar3);
              *(undefined8 *)((longlong)puVar4 + -0x10) = *(undefined8 *)((longlong)puVar4 + -4);
              *(ulonglong *)((longlong)puVar4 + -0x18) = (ulonglong)uVar2;
              *(undefined8 *)((longlong)puVar4 + -0x20) = 0x1407e675e;
              FUN_1407e7589();
              puVar4 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -0x18) + 0xc);
              uVar7 = (int)uVar3 + 4;
              uVar3 = (ulonglong)uVar7;
            } while (iVar1 << 2 != uVar7);
          }
          uVar2 = *(int *)((longlong)puVar4 + 8) + 4;
        } while (uVar2 != *(uint *)((longlong)puVar4 + 4));
      }
    }
  }
  return;
}

