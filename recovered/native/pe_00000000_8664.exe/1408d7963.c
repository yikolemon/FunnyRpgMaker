/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d7963 */

ulonglong FUN_1408d7963(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar7 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar8 = *(undefined8 *)(uVar7 + 0xc);
  uStack_18 = 0x1408d7970;
  FUN_1408d056e();
  if ((*(uint *)((ulonglong)*(uint *)(uVar7 + 0xc) + 0xc) & 6) == 0) {
    uVar5 = (ulonglong)*(uint *)(uVar7 + 0x10);
    *(undefined4 *)(uVar5 + 0x18) = 9;
  }
  else {
    if ((*(uint *)((ulonglong)*(uint *)(uVar7 + 0xc) + 0xc) >> 0xc & 1) == 0) {
      if ((*(uint *)((ulonglong)*(uint *)(uVar7 + 0xc) + 0xc) & 1) == 0) {
LAB_1408d79e8:
        puVar6 = (uint *)(ulonglong)(*(int *)(uVar7 + 0xc) + 0xc);
        LOCK();
        *puVar6 = *puVar6 | 2;
        UNLOCK();
        puVar6 = (uint *)(ulonglong)(*(int *)(uVar7 + 0xc) + 0xc);
        LOCK();
        *puVar6 = *puVar6 & 0xfffffff7;
        UNLOCK();
        *(undefined4 *)((ulonglong)*(uint *)(uVar7 + 0xc) + 8) = 0;
        uVar8 = 0xfffffffffffffff7;
        if ((*(uint *)((ulonglong)*(uint *)(uVar7 + 0xc) + 0xc) & 0x4c0) == 0) {
          uVar2 = *(undefined8 *)(uVar7 + 0xc);
          uStack_18 = 0x1408d7a1d;
          cVar3 = FUN_1408cf174();
          uVar8 = uVar2;
          if (cVar3 == '\0') {
            uVar8 = *(undefined8 *)(uVar7 + 0xc);
            uStack_18 = 0x1408d7a2a;
            FUN_1408db241(uVar2);
          }
        }
        uStack_18 = *(undefined8 *)(uVar7 + 0x10);
        uVar4 = *(uint *)(uVar7 + 8);
        uStack_20 = *(undefined8 *)(uVar7 + 0xc);
        uStack_28 = (ulonglong)uVar4;
        cVar3 = FUN_1408d7b53(uVar8);
        uVar9 = (ulonglong)((int)&uStack_28 + 0xc);
        if (cVar3 == '\0') {
          iVar1 = *(int *)(uVar7 + 0xc);
          *(undefined8 *)(uVar9 - 8) = 0x10;
          puVar6 = (uint *)(ulonglong)(iVar1 + 0xc);
          LOCK();
          *puVar6 = *puVar6 | (uint)*(undefined8 *)(uVar9 - 8);
          UNLOCK();
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (ulonglong)uVar4 & 0xff;
        }
        return uVar7;
      }
      uStack_18 = 0x1408d79c8;
      cVar3 = FUN_1408d78d4(uVar8);
      *(undefined4 *)((ulonglong)*(uint *)(uVar7 + 0xc) + 8) = 0;
      uVar4 = *(uint *)(uVar7 + 0xc);
      if (cVar3 != '\0') {
        *(undefined4 *)(ulonglong)uVar4 = ((undefined4 *)(ulonglong)uVar4)[1];
        puVar6 = (uint *)(ulonglong)(*(int *)(uVar7 + 0xc) + 0xc);
        LOCK();
        *puVar6 = *puVar6 & 0xfffffffe;
        UNLOCK();
        goto LAB_1408d79e8;
      }
      goto LAB_1408d798d;
    }
    uVar5 = (ulonglong)*(uint *)(uVar7 + 0x10);
    *(undefined4 *)(uVar5 + 0x18) = 0x22;
  }
  *(undefined1 *)(uVar5 + 0x1c) = 1;
  uVar4 = *(uint *)(uVar7 + 0xc);
LAB_1408d798d:
  LOCK();
  *(uint *)(ulonglong)(uVar4 + 0xc) = *(uint *)(ulonglong)(uVar4 + 0xc) | 0x10;
  UNLOCK();
  return 0xffffffff;
}

