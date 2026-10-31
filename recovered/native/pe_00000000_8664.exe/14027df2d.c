/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027df2d */

ulonglong FUN_14027df2d(uint *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  uint *puVar8;
  int iVar9;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 4) == 0) {
    uVar3 = FUN_1402136e8();
    *param_2 = 3;
    *(undefined8 *)(param_2 + 2) = uVar3;
    uVar5 = 0;
LAB_14027e11e:
    return uVar5 & 0xffffff01;
  }
  *param_2 = 0;
  uVar3 = FUN_1402136e8();
  *(undefined8 *)(param_2 + 2) = uVar3;
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 7;
  uVar5 = *(ulonglong *)(param_1 + 4);
  if (7 < uVar5) {
    FUN_140215702(&local_68);
    uVar5 = *(ulonglong *)(param_1 + 4);
  }
  local_58 = 0;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    param_1 = *(uint **)param_1;
  }
  puVar1 = (uint *)((longlong)param_1 + uVar5 * 2);
  puVar4 = (uint *)FUN_14021344f(param_1,puVar1);
  puVar8 = puVar4;
  if (((puVar4 != param_1) && (4 < (longlong)puVar1 - (longlong)puVar4)) &&
     ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) {
    if ((short)puVar4[1] == 0x2f) {
      puVar8 = puVar4 + 1;
    }
    if ((short)puVar4[1] == 0x5c) {
      puVar8 = puVar4 + 1;
    }
  }
  FUN_140215be8(&local_68,param_1,(longlong)puVar8 - (longlong)param_1 >> 1);
  uVar6 = 0;
  uVar5 = 0;
LAB_14027e023:
  iVar9 = (int)uVar6;
  puVar4 = puVar8;
LAB_14027e029:
  do {
    do {
      iVar2 = (int)uVar6;
      puVar8 = puVar4;
      if (puVar4 == puVar1) {
        if (iVar9 == 0) {
          iVar9 = iVar2;
        }
        if (iVar2 == 0) {
          iVar9 = iVar2;
        }
        uVar3 = FUN_1402136e8();
        *param_2 = iVar9;
        *(undefined8 *)(param_2 + 2) = uVar3;
        FUN_1402125bc(&local_68);
        goto LAB_14027e11e;
      }
      do {
        if (((short)*puVar8 != 0x5c) && ((short)*puVar8 != 0x2f)) break;
        puVar8 = (uint *)((longlong)puVar8 + 2);
      } while (puVar8 != puVar1);
      for (; ((puVar8 != puVar1 && ((short)*puVar8 != 0x2f)) && ((short)*puVar8 != 0x5c));
          puVar8 = (uint *)((longlong)puVar8 + 2)) {
      }
      FUN_140215be8(&local_68,puVar4,(longlong)puVar8 - (longlong)puVar4 >> 1);
      ppppuVar7 = &local_68;
      if (7 < local_50) {
        ppppuVar7 = (undefined8 ****)local_68;
      }
      uVar5 = FUN_14044bde0(ppppuVar7);
      uVar6 = uVar5 >> 0x20;
      puVar4 = puVar8;
    } while (uVar6 == 0);
    iVar2 = (int)(uVar5 >> 0x20);
    if (0x7a < iVar2) {
      if ((iVar2 != 0x7b) && ((iVar2 != 0xa1 && (iVar2 != 0x10b)))) goto LAB_14027e023;
      goto LAB_14027e029;
    }
    if ((0x3e < iVar2 - 2U) || ((0x4008000000000003U >> ((ulonglong)(iVar2 - 2U) & 0x3f) & 1) == 0))
    goto LAB_14027e023;
  } while( true );
}

