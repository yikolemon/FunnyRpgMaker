/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc2b5 */

void FUN_1801fc2b5(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = *puVar2;
    uVar7 = (ulonglong)uVar1;
    uVar6 = (ulonglong)puVar2[1];
    FUN_1801c9b65(uVar3,*(undefined8 *)(puVar2 + 10));
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    if (1 < uVar7) {
      FUN_1802a89a0(puVar2 + 0xc,0,(ulonglong)(uVar1 - 1) << 3);
    }
    FUN_1801c9b65(uVar3,*(undefined8 *)(puVar2 + 0x6a));
    puVar2[0x6a] = 0;
    puVar2[0x6b] = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(puVar2 + 0x48));
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(puVar2 + 0x8e));
    puVar2[0x8e] = 0;
    puVar2[0x8f] = 0;
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        (puVar2 + uVar4 * 2 + 0x68)[0] = 0;
        (puVar2 + uVar4 * 2 + 0x68)[1] = 0;
        (puVar2 + uVar4 * 2 + 0x46)[0] = 0;
        (puVar2 + uVar4 * 2 + 0x46)[1] = 0;
        (puVar2 + uVar4 * 2 + 0x8c)[0] = 0;
        (puVar2 + uVar4 * 2 + 0x8c)[1] = 0;
        uVar4 = uVar4 + 1;
      } while (uVar7 != uVar4);
    }
    FUN_1801c9b65(uVar3,*(undefined8 *)(puVar2 + 0x42));
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        FUN_1801c9b65(uVar3,*(undefined8 *)(puVar2 + uVar7 * 2 + 2));
        (puVar2 + uVar7 * 2 + 2)[0] = 0;
        (puVar2 + uVar7 * 2 + 2)[1] = 0;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      lVar5 = 0;
      do {
        FUN_1801c9b65(uVar3,*(undefined8 *)((longlong)puVar2 + lVar5 + 0xb8));
        *(undefined8 *)((longlong)puVar2 + lVar5 + 0xb8) = 0;
        FUN_1801c9b65(uVar3,*(undefined8 *)((longlong)puVar2 + lVar5 + 0xb0));
        *(undefined8 *)((longlong)puVar2 + lVar5 + 0xb0) = 0;
        *(undefined1 *)((longlong)puVar2 + lVar5 + 0xa8) = 0;
        lVar5 = lVar5 + 0x18;
      } while (uVar6 * 0x18 != lVar5);
    }
    FUN_1801c9b65(uVar3,*(undefined8 *)(param_1 + 0x2e0));
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return;
}

