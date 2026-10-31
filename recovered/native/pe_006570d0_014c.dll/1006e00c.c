/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006e00c */

void Catch_1006e00c(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined1 auStack_18 [20];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_18;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -100) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 8;
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  puVar3 = &DAT_1039cb0c;
  if (7 < DAT_1039cb20) {
    puVar3 = DAT_1039cb0c;
  }
  FUN_10005a0c(unaff_EBP + -0x7c,puVar3,DAT_1039cb1c,unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -4) = 9;
  *(char **)(unaff_EBP + -0x48) = "Error while processing: {}\n{}";
  *(undefined4 *)(unaff_EBP + -0x44) = 0x1d;
  FUN_1006f677(unaff_EBP + -0x60,*(undefined8 *)(unaff_EBP + -0x48),unaff_EBP + -0x7c,
               unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_1006f6d8(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(unaff_EBP + -0xa0,&DAT_10367ca8);
}

