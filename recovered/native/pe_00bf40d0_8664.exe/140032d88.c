/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140032d88 */

void FUN_140032d88(longlong param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  int iVar7;
  ushort uVar8;
  
  uVar3 = *(ulonglong *)(param_1 + 0x60 + (ulonglong)param_2 * 0x898);
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3 + (ulonglong)*(uint *)((ulonglong)param_2 * 0x898 + param_1 + 0x58) * 0x48;
  }
  if (uVar3 < uVar6) {
    uVar1 = *(uint *)(param_1 + 0x117c);
    do {
      lVar4 = *(longlong *)(uVar3 + 0x38);
      if ((2 - (param_2 == 0) & uVar1) == 0) {
        iVar7 = *(int *)(uVar3 + 8) - *(int *)(uVar3 + 4);
        do {
          puVar5 = (ushort *)(lVar4 + 0x38);
          do {
            puVar2 = *(ushort **)puVar5;
            if (param_2 == 0) {
              *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + iVar7;
              uVar8 = 4;
            }
            else {
              *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + iVar7;
              uVar8 = 8;
            }
            *puVar2 = *puVar2 | uVar8;
            puVar5 = puVar2 + 0x10;
          } while (puVar2 != *(ushort **)(lVar4 + 0x40));
          lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != *(longlong *)(uVar3 + 0x38));
      }
      else {
        do {
          puVar5 = (ushort *)(lVar4 + 0x38);
          do {
            puVar2 = *(ushort **)puVar5;
            if (param_2 == 0) {
              *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(uVar3 + 8);
              uVar8 = 4;
            }
            else {
              *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(uVar3 + 8);
              uVar8 = 8;
            }
            *puVar2 = *puVar2 | uVar8;
            puVar5 = puVar2 + 0x10;
          } while (puVar2 != *(ushort **)(lVar4 + 0x40));
          lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != *(longlong *)(uVar3 + 0x38));
      }
      uVar3 = uVar3 + 0x48;
    } while (uVar3 < uVar6);
  }
  return;
}

