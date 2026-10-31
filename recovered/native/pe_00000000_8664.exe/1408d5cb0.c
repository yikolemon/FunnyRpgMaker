/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d5cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d5cb0(void)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  bool bVar7;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar4 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  bVar7 = _DAT_150c7b15f != 0;
  puVar5 = (undefined1 *)(uVar4 - 8);
  *(ulonglong *)(uVar4 - 8) = (ulonglong)unaff_EDI;
  if (bVar7) {
    puVar5 = (undefined1 *)(uVar4 - 0x10);
    *(undefined8 *)(uVar4 - 0x10) = _DAT_150c7b16c;
    pcVar3 = _DAT_150c33b96;
    *(undefined8 *)(uVar4 - 0x18) = 0x1408d5cce;
    (*pcVar3)();
  }
  iVar2 = *(int *)(uVar6 + 0x14);
  if (iVar2 < 0x3e9) {
    if (iVar2 == 1000) {
LAB_1408d5eb8:
      *(undefined8 *)(ulonglong)*(uint *)(uVar6 + 0x10) =
           *(undefined8 *)(ulonglong)*(uint *)(uVar6 + 8);
      return;
    }
    if (iVar2 - 2U < 0x3c) {
      bVar1 = *(byte *)((ulonglong)(iVar2 - 2U) + 0x1027e038);
      *(undefined8 *)(puVar5 + -8) = unaff_RSI;
                    /* WARNING: Could not emulate address calculation at 0x0001408d5cf3 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((ulonglong)bVar1 * 4 + 0x1027dffc))();
      return;
    }
  }
  else if (iVar2 == 0x3e9) goto LAB_1408d5eb8;
  return;
}

