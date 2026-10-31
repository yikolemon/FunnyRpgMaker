/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407959c5 */

ulonglong FUN_1407959c5(void)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  undefined4 unaff_retaddr;
  undefined8 uStack_18;
  
  uStack_18 = CONCAT44(unaff_retaddr,(int)((ulonglong)unaff_RDI >> 0x20));
  pcVar2 = (char *)FUN_14079594f();
  uVar5 = (ulonglong)((int)&uStack_18 + 4);
  uVar8 = 0x10356101;
  if (*pcVar2 == '%') {
    uVar8 = (ulonglong)pcVar2 & 0xffffffff;
    *(char **)(uVar5 - 8) = pcVar2;
    *(undefined8 *)(uVar5 - 0x10) = 0x1407959e5;
    pcVar3 = (char *)FUN_140795972();
    uVar6 = (ulonglong)((int)(uVar5 - 8) + 4);
    if (*pcVar3 != '\0') {
      uVar1 = *(uint *)(uVar6 + 0x10);
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar6 + 0x14);
      *(ulonglong *)(uVar6 - 0x10) = (ulonglong)(uint)((int)pcVar3 - (int)pcVar2);
      *(undefined8 *)(uVar6 - 0x18) = 0x1407959fe;
      uVar4 = FUN_14077608d();
      uVar7 = (ulonglong)((int)(uVar6 - 0x10) + 8);
      *(undefined8 *)(uVar7 - 8) = uVar4;
      *(ulonglong *)(uVar7 - 0x10) = uVar8;
      *(ulonglong *)(uVar7 - 0x18) = (ulonglong)uVar1;
      *(undefined8 *)(uVar7 - 0x20) = 0x140795a09;
      FUN_14075206f();
      uVar8 = (ulonglong)uVar1;
    }
  }
  return uVar8;
}

