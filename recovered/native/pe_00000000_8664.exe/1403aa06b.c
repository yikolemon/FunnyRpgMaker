/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403aa06b */

void FUN_1403aa06b(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  if ((DAT_14062a630 != 0) && ((*(byte *)(DAT_14062a630 + 0x2acd) & 1) != 0)) {
    if (*(int *)(param_2 + 4) == 0) {
      pcVar5 = "u8";
    }
    else {
      pcVar5 = *(char **)param_2[5];
    }
    FUN_14030f4ba(L"erve",(double)*(float *)(param_3 + 0x14),pcVar5);
  }
  iVar2 = *(int *)(param_3 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(param_3 + 0x38);
    lVar6 = 0;
    do {
      if (*(int *)(lVar7 + 0x28 + lVar6) != -1) {
        FUN_1403a8fa3(param_1);
      }
      lVar6 = lVar6 + 0x2c;
    } while ((longlong)iVar2 * 0x2c - lVar6 != 0);
  }
  iVar2 = *(int *)(param_2 + 4);
  lVar7 = *(longlong *)(param_3 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar6 = param_2[5];
    lVar4 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar6 + lVar4) + 0x88);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x2b8);
      }
      if (*(code **)(lVar8 + 0x38) != (code *)0x0) {
        (**(code **)(lVar8 + 0x38))(param_1,*(longlong *)(lVar6 + lVar4),param_3,lVar7);
      }
      lVar7 = lVar7 + *(longlong *)(lVar8 + 0x48);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
    lVar7 = *(longlong *)(param_3 + 0x60);
  }
  if (lVar7 != 0) {
    FUN_14030fda4(lVar7);
    *(undefined8 *)(param_3 + 0x60) = 0;
  }
  FUN_140310f58(lVar3 + 0xd8,*(undefined4 *)(param_3 + 0x54),0);
  piVar1 = (int *)(lVar3 + 0xe8);
  *piVar1 = *piVar1 + 1;
  FUN_1403aa1ac(param_3);
  *(byte *)(param_3 + 0x4f) = *(byte *)(param_3 + 0x4f) | 4;
  *param_2 = 0;
  return;
}

