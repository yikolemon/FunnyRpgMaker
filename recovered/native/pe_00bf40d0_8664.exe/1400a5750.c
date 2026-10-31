/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5750 */

void FUN_1400a5750(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_140143800;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pbVar6 = (byte *)0x14011c136;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) goto LAB_1400a58f1;
  if (*(short *)((longlong)puVar5 + 6) == 0) {
    uVar3 = FUN_1400a5718(pbVar6);
    uVar4 = (uint)uVar3;
    uVar8 = (ulonglong)(int)uVar4;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (uVar4 < 2) {
      if (puVar10 != (uint *)0x0) {
        *puVar10 = (uint)bVar1;
      }
      goto LAB_1400a58f1;
    }
    if (uVar4 - 2 < 3) {
      bVar7 = (byte)uVar3;
      uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar1;
      goto LAB_1400a583d;
    }
  }
  else {
    bVar1 = (byte)puVar5[1];
    uVar8 = (ulonglong)bVar1;
    uVar4 = *puVar5;
    bVar7 = *(byte *)((longlong)puVar5 + 6);
    if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) {
LAB_1400a583d:
      uVar9 = (ulonglong)bVar7;
      uVar3 = uVar9;
      if (uVar2 <= uVar9) {
        uVar3 = uVar2;
      }
      while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar3) {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_1400a58e6;
        uVar4 = bVar1 & 0x3f | uVar4 << 6;
      }
      if (uVar3 < uVar9) {
        *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
        *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar3);
        *puVar5 = uVar4;
        goto LAB_1400a58f1;
      }
      if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[uVar8 & 0xff] <= uVar4) {
          if (puVar10 != (uint *)0x0) {
            *puVar10 = uVar4;
          }
          FUN_1400b1928(-(ulonglong)(uVar4 != 0) & uVar9,(undefined8 *)puVar5);
          goto LAB_1400a58f1;
        }
      }
    }
  }
LAB_1400a58e6:
  FUN_1400b1914((undefined8 *)puVar5,param_5);
LAB_1400a58f1:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_78);
}

