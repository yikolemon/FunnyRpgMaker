/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191153 */

void FUN_10191153(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x290);
  if ((DAT_1039d74c != 0) && ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
    if (param_2[6] == 0) {
      pcVar4 = "<unknown>";
    }
    else {
      pcVar4 = *(char **)param_2[8];
    }
    FUN_100f99e6("[font] Discard baked %.2f for \"%s\"\n",(double)*(float *)(param_3 + 0x10),pcVar4)
    ;
  }
  iVar3 = *(int *)(param_3 + 0x24);
  if (iVar3 != 0) {
    iVar8 = *(int *)(param_3 + 0x2c);
    iVar5 = 0;
    do {
      if (*(int *)(iVar8 + 0x28 + iVar5) != -1) {
        FUN_10190196();
      }
      iVar5 = iVar5 + 0x2c;
    } while (iVar3 * 0x2c - iVar5 != 0);
  }
  iVar3 = param_2[6];
  iVar8 = *(int *)(param_3 + 0x4c);
  if (iVar3 != 0) {
    iVar5 = param_2[8];
    iVar6 = 0;
    do {
      iVar7 = *(int *)(*(int *)(iVar5 + iVar6) + 0x74);
      if (iVar7 == 0) {
        iVar7 = *(int *)(param_1 + 0x294);
      }
      if (*(code **)(iVar7 + 0x1c) != (code *)0x0) {
        (**(code **)(iVar7 + 0x1c))(param_1,*(int *)(iVar5 + iVar6),param_3,iVar8);
      }
      iVar8 = iVar8 + *(int *)(iVar7 + 0x24);
      iVar6 = iVar6 + 4;
    } while (iVar3 << 2 != iVar6);
    iVar8 = *(int *)(param_3 + 0x4c);
  }
  if (iVar8 != 0) {
    FUN_100fa2cb(iVar8);
    *(undefined4 *)(param_3 + 0x4c) = 0;
  }
  FUN_100fb37c();
  piVar1 = (int *)(iVar2 + 0xcc);
  *piVar1 = *piVar1 + 1;
  FUN_1019128c();
  *(byte *)(param_3 + 0x3f) = *(byte *)(param_3 + 0x3f) | 4;
  *param_2 = 0;
  return;
}

