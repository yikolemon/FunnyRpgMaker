/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004252a */

ulonglong FUN_14004252a(undefined1 (*param_1) [32],longlong *param_2,longlong param_3,uint param_4,
                       char param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  bool bVar13;
  
  lVar2 = *(longlong *)(param_3 + 8);
  FUN_1400b3c00(param_1,0,0x130);
  if (param_5 == '\0' && (char)((param_4 & 2) >> 1) == '\0') {
    uVar10 = param_4 >> 0x10 & 0xf;
    bVar13 = uVar10 != 2;
    uVar5 = *(uint *)(param_2 + 0x23);
    if (0 < (int)uVar5) {
      return (ulonglong)uVar5;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
    if (((int)uVar5 < 0) && (uVar6 = FUN_140043529(param_2,(byte)param_4 >> 7), (int)uVar6 != 0)) {
      return uVar6;
    }
    puVar3 = (undefined8 *)param_2[0x22];
    *(undefined4 *)((longlong)puVar3 + 0x324) = 0;
    bVar4 = false;
    if (*(int *)(lVar9 + 0x70) == 0x28) {
      bVar13 = false;
      bVar4 = false;
      if (uVar10 != *(uint *)(puVar3 + 0x65)) {
        *(uint *)(puVar3 + 0x65) = uVar10;
        bVar4 = true;
        bVar13 = false;
      }
    }
    if (bVar13 != (bool)*(char *)(puVar3 + 100)) {
      *(bool *)(puVar3 + 100) = bVar13;
      bVar4 = true;
    }
    uVar5 = *(uint *)((longlong)param_2 + 0x11c);
    if (0 < (int)uVar5) {
      return (ulonglong)uVar5;
    }
    if ((uVar5 != 0 || bVar4) && (uVar6 = FUN_1400436f7(param_2), (int)uVar6 != 0)) {
      return uVar6;
    }
    FUN_14004384f(puVar3,lVar2,(longlong)param_2);
    bVar1 = *(byte *)((longlong)param_2 + 0xcd);
    bVar7 = bVar1;
    if ((bVar1 & 2) != 0) {
      puVar11 = &DAT_1400f4478;
      plVar12 = param_2 + 0x11;
      for (lVar8 = 0x13; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined4 *)plVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        plVar12 = (longlong *)((longlong)plVar12 + 4);
      }
      bVar7 = 0;
    }
    if (((uVar10 != 2) && (*(int *)(lVar9 + 0x70) == 0x28)) &&
       ((*(byte *)(*(longlong *)(param_3 + 8) + 9) & 0x20) == 0)) {
      *(uint *)((longlong)puVar3 + 0x324) = (uint)(~bVar7 & 4);
    }
    uVar5 = (uint)bVar1 + (uint)bVar1 & 2;
    *(undefined8 **)(param_1[6] + 0x18) = puVar3;
    lVar9 = 0;
    if (((param_4 >> 0x15 & 1) == 0) && ((char)uVar5 == '\0')) {
      if ((*(int *)((longlong)puVar3 + 0x324) == 0) && (*(int *)(lVar2 + 0x27c) == 0)) {
        lVar9 = param_2[0xf];
      }
      else {
        lVar9 = 0;
      }
    }
    param_4 = param_4 | uVar5;
    *(longlong *)(param_1[9] + 8) = lVar9;
  }
  else if (param_5 != '\0') goto LAB_14004258c;
  lVar9 = **(longlong **)(param_3 + 0xf0);
  FUN_14001c4a0(lVar9);
  *(longlong *)(*param_1 + 0x18) = lVar9;
LAB_14004258c:
  *(uint *)param_1[1] = param_4;
  *(longlong *)*param_1 = lVar2;
  *(longlong **)(*param_1 + 8) = param_2;
  *(longlong *)(*param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1[1] + 8) = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(param_1[8] + 0x18) = 0;
  *(undefined8 *)param_1[9] = 0;
  return 0;
}

