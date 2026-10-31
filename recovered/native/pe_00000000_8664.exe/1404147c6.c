/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404147c6 */

void Unwind_1404147c6(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  byte unaff_BPL;
  char unaff_SIL;
  uint uVar5;
  longlong in_R10;
  int unaff_R12D;
  longlong unaff_R14;
  int unaff_R15D;
  int iVar6;
  ulonglong in_stack_00000040;
  longlong in_stack_00000048;
  char in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000068;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int iStack0000000000000074;
  longlong in_stack_000004d8;
  
  *(int *)(in_R10 + 0x40) = (int)((ulonglong)(param_1 + 0x8000 + (param_1 >> 0x3f)) >> 0x10);
  lVar3 = (longlong)*(int *)(in_R10 + 0x4c) * (longlong)*(int *)(unaff_R14 + 0xc);
  iVar6 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
  *(int *)(in_R10 + 0x4c) = iVar6;
  if (unaff_R12D != 0 || unaff_R15D != 0) {
    FUN_1403dca70();
    *(int *)(in_stack_00000048 + 0x40) = *(int *)(in_stack_00000048 + 0x40) + unaff_R12D;
    iVar6 = unaff_R15D + *(int *)(in_stack_00000048 + 0x4c);
    *(int *)(in_stack_00000048 + 0x4c) = iVar6;
    in_R10 = in_stack_00000048;
  }
  if ((unaff_BPL & in_stack_00000050 == '\0') == 0) {
    iVar1 = *(int *)(in_R10 + 0xfc);
    iVar2 = *(int *)(in_R10 + 0x100);
    if (((in_stack_00000058._4_1_ & in_stack_000004d8 != 0) == 0) &&
       (*(ushort *)(in_R10 + 0x9a) != 0)) {
      piVar4 = *(int **)(in_R10 + 0xa0);
      uVar5 = *(ushort *)(in_R10 + 0x9a) + 1;
      do {
        lVar3 = (longlong)*piVar4 * (longlong)iVar1;
        *piVar4 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
        lVar3 = (longlong)piVar4[1] * (longlong)iVar2;
        piVar4[1] = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
        piVar4 = piVar4 + 2;
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
      iVar6 = *(int *)(in_stack_00000048 + 0x4c);
      in_R10 = in_stack_00000048;
    }
    lVar3 = (longlong)*(int *)(in_R10 + 0x40) * (longlong)iVar1;
    *(int *)(in_R10 + 0x40) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    lVar3 = (longlong)iVar6 * (longlong)iVar2;
    *(int *)(in_R10 + 0x4c) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
  }
  FUN_1403dbf53();
  *(ulonglong *)(in_stack_00000048 + 0x30) =
       CONCAT44(iStack0000000000000074 - iStack000000000000006c,
                iStack0000000000000070 - iStack0000000000000068);
  *(int *)(in_stack_00000048 + 0x38) = iStack0000000000000068;
  *(int *)(in_stack_00000048 + 0x3c) = iStack0000000000000074;
  if (unaff_SIL != '\0') {
    if ((in_stack_00000040 & 0x1000000000) != 0) {
      FUN_1403dd750(in_stack_00000048 + 0x30,*(undefined4 *)(in_stack_00000048 + 0x4c));
      FUN_140414545();
      return;
    }
    FUN_14041425e();
    return;
  }
  *(int *)(in_stack_00000048 + 0x44) =
       iStack0000000000000068 - *(int *)(in_stack_00000048 + 0x40) / 2;
  lVar3 = (longlong)*(int *)(in_stack_00000048 + 0x48) *
          (longlong)*(int *)(in_stack_00000048 + 0x100);
  *(int *)(in_stack_00000048 + 0x48) = (int)((ulonglong)((lVar3 >> 0x3f) + lVar3 + 0x8000) >> 0x10);
  FUN_140414545();
  return;
}

