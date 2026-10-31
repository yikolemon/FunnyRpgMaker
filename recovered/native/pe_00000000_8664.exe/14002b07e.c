/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002b07e */

void FUN_14002b07e(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined2 local_7a;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  pbVar7 = *(byte **)param_2;
  uVar4 = *(ulonglong *)(param_2 + 0x18);
  pbVar11 = param_2;
  if (0xf < uVar4) {
    pbVar11 = pbVar7;
  }
  pbVar11 = pbVar11 + *(longlong *)(param_2 + 0x10);
  local_70 = (undefined8 *)0x0;
  plVar6 = *(longlong **)(param_1 + 0x80);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar6 != plVar1) {
    do {
      puVar10 = (undefined8 *)*plVar6;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x80);
    pbVar7 = *(byte **)param_2;
    uVar4 = *(ulonglong *)(param_2 + 0x18);
  }
  if (0xf < uVar4) {
    param_2 = pbVar7;
  }
  puVar3 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)0x0;
  for (; param_2 != pbVar11; param_2 = param_2 + 1) {
    bVar9 = *param_2;
    if (bVar9 == 0x25) {
      if (puVar12 != (undefined8 *)0x0) {
        local_70 = (undefined8 *)0x0;
        local_68 = puVar12;
        FUN_140018cfc(param_1 + 0x80,&local_68);
        if (local_68 != (undefined8 *)0x0) {
          (**(code **)*local_68)(local_68,1);
        }
        puVar3 = (undefined8 *)0x0;
      }
      pbVar7 = param_2 + 1;
      if (pbVar7 == pbVar11) {
LAB_14002b273:
        if (pbVar7 == pbVar11) break;
        local_98 = 0;
        uStack_90 = 0;
        FUN_14002d480(param_1,CONCAT71((int7)((ulonglong)pbVar7 >> 8),*pbVar7),&local_98);
      }
      else {
        if (*pbVar7 == 0x2d) {
          uVar2 = 1;
LAB_14002b1f9:
          pbVar7 = param_2 + 2;
        }
        else {
          uVar2 = 0;
          if (*pbVar7 == 0x3d) {
            uVar2 = 2;
            goto LAB_14002b1f9;
          }
        }
        if ((pbVar7 == pbVar11) || (9 < (byte)(*pbVar7 - 0x30))) goto LAB_14002b273;
        uVar4 = (ulonglong)*pbVar7 - 0x30;
        pbVar8 = pbVar7 + 1;
        if (pbVar8 == pbVar11) {
LAB_14002b29d:
          bVar13 = false;
          pbVar7 = pbVar8;
        }
        else {
          bVar9 = *pbVar8;
          if ((byte)(bVar9 - 0x30) < 10) {
            pbVar7 = pbVar7 + 2;
            do {
              pbVar8 = pbVar7;
              uVar4 = ((ulonglong)bVar9 + uVar4 * 10) - 0x30;
              if (pbVar8 == pbVar11) goto LAB_14002b29d;
              bVar9 = *pbVar8;
              pbVar7 = pbVar8 + 1;
            } while ((byte)(bVar9 - 0x30) < 10);
            pbVar7 = pbVar8 + -1;
          }
          pbVar5 = pbVar7 + 2;
          bVar13 = bVar9 == 0x21;
          pbVar7 = pbVar8;
          if (bVar13) {
            pbVar7 = pbVar5;
          }
        }
        if (pbVar7 == pbVar11) break;
        if (0x3f < uVar4) {
          uVar4 = 0x40;
        }
        local_7b = 1;
        local_7a = 0;
        local_88 = uVar4;
        local_80 = uVar2;
        local_7c = bVar13;
        FUN_14002b47c(param_1,*pbVar7,&local_88);
      }
      puVar12 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
      param_2 = pbVar7;
    }
    else {
      if (puVar10 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_1401887b0(0x38);
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[6] = 0;
        local_78 = puVar3;
        FUN_140036f8e();
        local_68 = (undefined8 *)0x0;
        local_70 = local_78;
        bVar9 = *param_2;
        puVar10 = local_78;
        puVar12 = local_78;
      }
      FUN_140004108(puVar10 + 3,bVar9);
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_70 = (undefined8 *)0x0;
    local_68 = puVar3;
    FUN_140018cfc(param_1 + 0x80,&local_68);
    if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  return;
}

