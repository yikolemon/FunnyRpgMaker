/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c417e */

undefined8 FUN_1402c417e(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  uint *local_58;
  longlong local_50;
  undefined1 local_48 [32];
  uint *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_1 + 4);
  local_58 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    local_58 = *(uint **)param_1;
  }
  lVar4 = uVar3 * 2;
  puVar1 = (uint *)((longlong)local_58 + uVar3 * 2);
  puVar5 = local_58;
  if (1 < (longlong)uVar3) {
    uVar2 = *local_58;
    if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar6 = local_58 + 1;
      goto LAB_1402c4229;
    }
    if (((short)uVar2 == 0x5c) || ((uVar2 & 0xffff) == 0x2f)) {
      uVar8 = uVar2 >> 0x10;
      sVar7 = (short)(uVar2 >> 0x10);
      if (uVar3 < 4) {
        if (uVar3 != 2) goto LAB_1402c4305;
      }
      else if (((*(short *)((longlong)local_58 + 6) == 0x5c) ||
               (*(short *)((longlong)local_58 + 6) == 0x2f)) &&
              ((uVar3 == 4 || (((short)local_58[2] != 0x2f && ((short)local_58[2] != 0x5c)))))) {
        puVar6 = (uint *)((longlong)local_58 + 6);
        if ((sVar7 == 0x2f) || (uVar8 == 0x5c)) {
          sVar9 = (short)local_58[1];
          if ((sVar9 == 0x2e) || (sVar9 == 0x3f)) goto LAB_1402c4229;
          if (uVar8 != 0x3f) goto LAB_1402c4305;
        }
        else {
          if (uVar8 != 0x3f) goto joined_r0x0001402c41be;
          sVar9 = (short)local_58[1];
        }
        if (sVar9 == 0x3f) goto LAB_1402c4229;
      }
      else {
LAB_1402c4305:
        if ((((sVar7 == 0x5c) || (uVar8 == 0x2f)) && ((short)local_58[1] != 0x2f)) &&
           ((short)local_58[1] != 0x5c)) {
          puVar5 = (uint *)((longlong)local_58 + 6);
          puVar6 = puVar5;
          if (uVar3 != 3) {
            lVar4 = lVar4 + -6;
            do {
              puVar6 = puVar5;
              if (((short)*puVar5 == 0x2f) || ((short)*puVar5 == 0x5c)) break;
              puVar5 = (uint *)((longlong)puVar5 + 2);
              lVar4 = lVar4 + -2;
              puVar6 = puVar1;
            } while (lVar4 != 0);
          }
          goto LAB_1402c4229;
        }
      }
    }
  }
joined_r0x0001402c41be:
  for (; (lVar4 != 0 && (((short)*puVar5 == 0x5c || ((short)*puVar5 == 0x2f))));
      puVar5 = (uint *)((longlong)puVar5 + 2)) {
    lVar4 = lVar4 + -2;
  }
  puVar6 = puVar5;
  if (puVar5 != puVar1 && local_58 == puVar5) {
    do {
      puVar6 = puVar5;
      if (((short)*puVar5 == 0x2f) || ((short)*puVar5 == 0x5c)) break;
      puVar5 = (uint *)((longlong)puVar5 + 2);
      puVar6 = puVar1;
    } while (puVar5 != puVar1);
  }
LAB_1402c4229:
  local_50 = (longlong)puVar6 - (longlong)local_58 >> 1;
  FUN_140213408(local_48,&local_58,0);
  local_28 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    local_28 = *(uint **)param_1;
  }
  FUN_1402c4b10(param_2,&local_28,local_48,param_1);
  FUN_14021331c(local_48);
  return param_2;
}

