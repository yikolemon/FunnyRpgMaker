/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e87e2 */

void FUN_1407e87e2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  int unaff_retaddr;
  uint unaff_retaddr_00;
  char local_res8;
  int iVar7;
  int iVar8;
  
  pcVar5 = (char *)(ulonglong)unaff_retaddr_00;
  iVar8 = (int)((ulonglong)unaff_RBP >> 0x20);
  uVar1 = *(uint *)((unaff_RBX & 0xffffffff) + 0x30);
  iVar7 = (int)(unaff_RBX >> 0x20);
  if (*(int *)((ulonglong)uVar1 + 0x18) == 0) {
    if (0 < unaff_retaddr) {
      uVar6 = (ulonglong)uVar1;
      iVar2 = *(int *)(uVar6 + 0x1c);
      iVar3 = *(int *)(uVar6 + 0x24);
      iVar4 = *(int *)(uVar6 + 0x28);
      do {
        if (0 < iVar8) {
          do {
            *(uint *)(ulonglong)(uint)(((int)unaff_RBP * iVar2 + iVar7) * iVar3 + iVar4) =
                 -(uint)(*pcVar5 == local_res8);
          } while (iVar8 != 0);
        }
        pcVar5 = (char *)(ulonglong)(uint)((int)pcVar5 + iVar8);
      } while (unaff_retaddr != 0);
    }
  }
  else if ((*(int *)((ulonglong)uVar1 + 0x18) == 1) && (0 < unaff_retaddr)) {
    uVar6 = (ulonglong)uVar1;
    iVar2 = *(int *)(uVar6 + 0x1c);
    iVar3 = *(int *)(uVar6 + 0x24);
    iVar4 = *(int *)(uVar6 + 0x28);
    do {
      if (0 < iVar8) {
        do {
          *(char *)(ulonglong)(uint)(((int)unaff_RBP * iVar2 + iVar7) * iVar3 + iVar4) =
               -(*pcVar5 == local_res8);
        } while (iVar8 != 0);
      }
      pcVar5 = (char *)(ulonglong)(uint)((int)pcVar5 + iVar8);
    } while (unaff_retaddr != 0);
  }
  return;
}

