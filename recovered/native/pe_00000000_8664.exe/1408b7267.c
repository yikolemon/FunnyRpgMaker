/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b7267 */

ulonglong FUN_1408b7267(uint param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  longlong unaff_R13;
  
  uVar6 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(undefined8 *)(uVar6 - 8) = unaff_RBX;
  *(undefined8 *)(uVar6 - 0x10) = unaff_RSI;
  uVar5 = (ulonglong)param_1;
  *(ulonglong *)(uVar6 - 0x18) = (ulonglong)unaff_EDI;
  puVar7 = (undefined1 *)(uVar6 - 0x20);
  *(undefined8 *)(uVar6 - 0x20) = *(undefined8 *)(uVar5 + 8);
  *(undefined8 *)(uVar6 - 0x28) = 0x1408b7282;
  cVar3 = FUN_1408b71c9(param_1 + 0x448);
  if (cVar3 != '\0') {
    uVar1 = *(uint *)(uVar5 + 0xc);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(uVar5 + 8);
      *(undefined1 *)((ulonglong)uVar1 + 0x1c) = 1;
      *(undefined4 *)((ulonglong)uVar1 + 0x18) = 0x16;
    }
    else {
      iVar2 = *(int *)(uVar5 + 0x450);
      *(int *)(uVar5 + 0x450) = iVar2;
      while( true ) {
        if (iVar2 == 2) {
          return (ulonglong)*(uint *)(uVar5 + 0x14);
        }
        *(undefined4 *)(uVar5 + 0x34) = 0;
        *(undefined1 *)(uVar5 + 0x18) = 0;
        cVar3 = *(char *)(ulonglong)uVar1;
        *(char *)(unaff_R13 + -1) = cVar3;
        *(uint *)(uVar5 + 0xc) = uVar1;
        *(char *)(uVar5 + 0x2d) = cVar3;
        if ((cVar3 != '\0') &&
           (*(char *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 9) = cVar3,
           -1 < *(int *)(ulonglong)(param_1 + 0x14))) break;
        *(int *)(uVar5 + 0x450) = *(int *)(uVar5 + 0x450) + 1;
        iVar2 = *(int *)(uVar5 + 0x450);
      }
      *(ulonglong *)(uVar6 - 0x28) = (ulonglong)*(byte *)(uVar5 + 0x18);
      puVar7 = (undefined1 *)(uVar6 - 0x30);
      *(undefined8 *)(uVar6 - 0x30) =
           *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 9);
      *(undefined8 *)(uVar6 - 0x38) = 0x1408b7304;
      bVar4 = FUN_1408b7eb8(uVar5);
      *(byte *)(uVar5 + 0x18) = bVar4;
      if (bVar4 < 8) {
        if (7 < bVar4) {
          return 0xffffffff;
        }
                    /* WARNING: Could not emulate address calculation at 0x0001408b7317 */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)((ulonglong)bVar4 * 4 + 0x1025f61f))();
        return uVar5;
      }
      uVar1 = *(uint *)(uVar5 + 8);
      *(undefined1 *)((ulonglong)uVar1 + 0x1c) = 1;
      *(undefined4 *)((ulonglong)uVar1 + 0x18) = 0x16;
    }
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(uVar5 + 8);
    *(undefined8 *)(puVar7 + -0x10) = 0;
    *(undefined8 *)(puVar7 + -0x18) = 0;
    *(undefined8 *)(puVar7 + -0x20) = 0;
    *(undefined8 *)(puVar7 + -0x28) = 0;
    *(undefined8 *)(puVar7 + -0x30) = 0;
    *(undefined8 *)(puVar7 + -0x38) = 0x1408b72aa;
    FUN_1408cbf04();
  }
  return 0xffffffff;
}

