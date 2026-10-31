/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140126000 */

void FUN_140126000(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  puVar4 = (uint *)&DAT_140355640;
  if (param_4 != (uint *)0x0) {
    puVar4 = param_4;
  }
  pbVar5 = &DAT_1401728de;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) goto LAB_1401261a1;
  if (*(short *)((longlong)puVar4 + 6) == 0) {
    uVar3 = FUN_140125fc8(pbVar5);
    uVar7 = (ulonglong)(int)uVar3;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (uVar3 < 2) {
      if (puVar10 != (uint *)0x0) {
        *puVar10 = (uint)bVar1;
      }
      goto LAB_1401261a1;
    }
    if (uVar3 - 2 < 3) {
      bVar6 = (byte)uVar3;
      uVar3 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint)bVar1;
      goto LAB_1401260ed;
    }
  }
  else {
    bVar1 = (byte)puVar4[1];
    uVar7 = (ulonglong)bVar1;
    uVar3 = *puVar4;
    bVar6 = *(byte *)((longlong)puVar4 + 6);
    if ((((byte)(bVar1 - 2) < 3) && (bVar6 != 0)) && (bVar6 < bVar1)) {
LAB_1401260ed:
      uVar9 = (ulonglong)bVar6;
      uVar8 = uVar9;
      if (uVar2 <= uVar9) {
        uVar8 = uVar2;
      }
      while ((ulonglong)((longlong)pbVar5 - (longlong)param_2) < uVar8) {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_140126196;
        uVar3 = bVar1 & 0x3f | uVar3 << 6;
      }
      if (uVar8 < uVar9) {
        *(ushort *)(puVar4 + 1) = (ushort)uVar7 & 0xff;
        *(ushort *)((longlong)puVar4 + 6) = (ushort)(byte)(bVar6 - (char)uVar8);
        *puVar4 = uVar3;
        goto LAB_1401261a1;
      }
      if ((0x7ff < uVar3 - 0xd800) && (uVar3 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[uVar7 & 0xff] <= uVar3) {
          if (puVar10 != (uint *)0x0) {
            *puVar10 = uVar3;
          }
          FUN_1401324b8(-(ulonglong)(uVar3 != 0) & uVar9,puVar4);
          goto LAB_1401261a1;
        }
      }
    }
  }
LAB_140126196:
  FUN_1401324a4(puVar4,param_5);
LAB_1401261a1:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_78);
}

