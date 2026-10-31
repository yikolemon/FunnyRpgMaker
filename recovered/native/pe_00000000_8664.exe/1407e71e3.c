/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e71e3 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407e71e3(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_RDI;
  undefined8 uStack_18;
  
  puVar4 = (undefined8 *)&stack0xfffffffffffffff0;
  uVar2 = unaff_RDI >> 0x20;
  if (*(int *)(uVar2 + 0x294) == 0) {
    uStack_18 = 0x1407e71f8;
    uStack_18 = FUN_1407ee954();
    puVar4 = &uStack_18;
    FUN_1407e664e(uVar2);
  }
  if ((*(uint *)(uVar2 + 0x30) != 0) && (*(int *)((ulonglong)*(uint *)(uVar2 + 0x30) + 0x28) != 0))
  {
    *(undefined8 *)((longlong)puVar4 + -8) = 0xd8;
    *(undefined8 *)((longlong)puVar4 + -0x10) = 0x1407e7274;
    uVar3 = FUN_1407520ca();
    puVar5 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -8) + 4);
    *(undefined8 *)(puVar5 + -8) = 0x1407e7280;
    FUN_1407ea23a(uVar3);
    *(undefined4 *)(uVar2 + 0x290) = uVar3;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar2 + 0x294) + 4);
    if (uVar1 != 0) {
      *(ulonglong *)(puVar5 + -8) = uVar2;
      *(undefined8 *)(puVar5 + -0x10) = 0x1407e7297;
      (*(code *)(ulonglong)uVar1)();
      puVar5 = (undefined1 *)(ulonglong)((int)(puVar5 + -8) + 4);
    }
    *(undefined8 *)(puVar5 + -8) = 0x1407e72a1;
    FUN_1407e8615(uVar2);
    *(ulonglong *)(puVar5 + -8) = uVar2;
    *(undefined8 *)(puVar5 + -0x10) = 0x1407e72a7;
    FUN_1407e9ab7();
    uVar6 = (ulonglong)((int)(puVar5 + -8) + 4);
    *(undefined8 *)(uVar6 - 8) = 0x1407e72b1;
    FUN_1407e9c7e(uVar2);
    *(undefined8 *)(uVar6 - 8) = 0x1407e72b8;
    FUN_1407e9ecc(uVar2);
    *(ulonglong *)(uVar6 - 8) = uVar2;
    *(undefined8 *)(uVar6 - 0x10) = 0x1407e72be;
    FUN_1407e742d();
    uVar7 = (ulonglong)((int)(uVar6 - 8) + 4);
    *(ulonglong *)(uVar7 - 8) = uVar2;
    *(undefined8 *)(uVar7 - 0x10) = 0x1407e72c7;
    FUN_1407e93ef();
    FUN_1407ea405();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

