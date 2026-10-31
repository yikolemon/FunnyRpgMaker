/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a427 */

void FUN_14079a427(undefined4 param_1,ulonglong param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  puVar8 = (uint *)(param_2 & 0xffffffff);
  pcVar2 = (char *)(unaff_RBX >> 0x20);
  if ((*pcVar2 == '\n') && (*(char *)((longlong)puVar8 + 0x17) != '\0')) {
    return;
  }
  if (((char)puVar8[3] != '\0') && (puVar8[1] == puVar8[2])) {
    uVar1 = *puVar8;
    uStack_28 = 0x14079a459;
    iVar3 = FUN_1407a9c61(param_1);
    if ((int)uVar1 < iVar3) {
      uStack_28 = 0;
      pcStack_30 = (char *)0x0;
      uStack_38 = (ulonglong)uVar1;
      FUN_1407aa2e8(param_1,puVar8);
      uVar5 = (ulonglong)((int)&uStack_38 + 0xc);
      uVar1 = *puVar8;
      *(undefined8 *)(uVar5 - 8) = 0;
      *(undefined8 *)(uVar5 - 0x10) = 0x14079a47c;
      FUN_1407a9e28(param_1,uVar1);
      uVar6 = (ulonglong)((int)(uVar5 - 8) + 4);
      uVar1 = *puVar8;
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar6 + 0x18);
      *(char **)(uVar6 - 0x10) = pcVar2;
      *(undefined8 *)(uVar6 - 0x18) = 0x14079a48d;
      iVar3 = FUN_1407a9e5b(param_1,uVar1);
      if (iVar3 == 0) {
        return;
      }
      goto LAB_14079a4c5;
    }
  }
  uStack_28 = 0x14079a4a1;
  FUN_1407a9c0f(param_1,puVar8);
  uStack_38 = 0x14079a4af;
  pcStack_30 = pcVar2;
  uVar4 = FUN_1407a9e5b(param_1,*puVar8);
  uVar7 = (ulonglong)((int)&pcStack_30 + 8);
  iVar3 = (int)uVar4;
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *puVar8;
  *(undefined8 *)(uVar7 - 8) = uVar4;
  *(undefined8 *)(uVar7 - 0x10) = 0x14079a4c2;
  FUN_1407aa335(puVar8,uVar1);
LAB_14079a4c5:
  *puVar8 = *puVar8 + iVar3;
  *(undefined1 *)((longlong)puVar8 + 0x16) = 0;
  return;
}

