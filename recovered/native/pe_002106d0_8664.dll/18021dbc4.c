/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021dbc4 */

void FUN_18021dbc4(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  puVar7 = param_1 + (ulonglong)param_2 * 0x12 + 0xc;
  lVar2 = *(longlong *)(*(uint **)(puVar7 + 0xe) + 2);
  uVar10 = **(uint **)(puVar7 + 0xe);
  cVar6 = (param_2 != 0) * '\t' + '\x03';
  iVar5 = FUN_1801cc3a4(0x20,*(undefined4 *)
                              (*(longlong *)(param_1 + 10) + 0xcc + (ulonglong)param_2 * 0xcc));
  iVar8 = 0xc;
  if (iVar5 < 0xc) {
    iVar8 = iVar5;
  }
  if (uVar10 < 2) {
    if (uVar10 != 1) goto LAB_18021dcca;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      return;
    }
    if (*(uint *)(lVar2 + 0x10) < uVar1) {
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    do {
      uVar9 = *param_1;
      if (*(uint *)(lVar2 + 0x28) < *param_1) {
        uVar9 = *(uint *)(lVar2 + 0x28);
      }
      if (uVar1 <= uVar9 && uVar9 - uVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 2);
        FUN_18021ec26(puVar7,lVar2 + 0x18);
        FUN_18021ecfe(puVar7,(ulonglong)uVar1 * 0x40 + lVar3,uVar9 - uVar1,iVar8,cVar6);
      }
      uVar10 = uVar10 - 1;
      uVar1 = uVar9;
      lVar2 = lVar2 + 0x18;
    } while (1 < uVar10);
  }
  uVar10 = *param_1;
  uVar4 = *(undefined8 *)(param_1 + 2);
  FUN_18021ec26(puVar7,*(undefined8 *)(*(longlong *)(puVar7 + 0xe) + 8));
  FUN_18021ecfe(puVar7,uVar4,uVar10,iVar8,cVar6);
LAB_18021dcca:
  uVar10 = *param_1;
  if (uVar10 != 0) {
    puVar7 = (uint *)(*(longlong *)(param_1 + 2) + 0x1c);
    do {
      if ((*(longlong *)(puVar7 + 3) != 0) && ((*puVar7 & 0x10) == 0)) {
        *puVar7 = *puVar7 | 0x10;
      }
      puVar7 = puVar7 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

