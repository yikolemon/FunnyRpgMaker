/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a77b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a77b0(ulonglong param_1,wchar_t *param_2,ulonglong param_3,uint *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  ulonglong uVar2;
  wchar_t wVar3;
  uint uVar4;
  uint *puVar5;
  wchar_t *pwVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_140632d68;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pwVar6 = L"pNonPic";
  uVar2 = 1;
  if (param_2 != (wchar_t *)0x0) {
    pwVar6 = param_2;
    uVar2 = param_3;
  }
  puVar11 = (uint *)(-(ulonglong)(param_2 != (wchar_t *)0x0) & param_1);
  if (uVar2 == 0) goto LAB_1404a7951;
  if (*(short *)((longlong)puVar5 + 6) == 0) {
    uVar4 = FUN_1404a7778(pwVar6);
    uVar8 = (ulonglong)(int)uVar4;
    wVar3 = *pwVar6;
    pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
    if (uVar4 < 2) {
      if (puVar11 != (uint *)0x0) {
        *puVar11 = (uint)(byte)wVar3;
      }
      goto LAB_1404a7951;
    }
    if (uVar4 - 2 < 3) {
      bVar7 = (byte)uVar4;
      uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)(byte)wVar3;
      goto LAB_1404a789d;
    }
  }
  else {
    bVar1 = (byte)puVar5[1];
    uVar8 = (ulonglong)bVar1;
    uVar4 = *puVar5;
    bVar7 = *(byte *)((longlong)puVar5 + 6);
    if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) {
LAB_1404a789d:
      uVar10 = (ulonglong)bVar7;
      uVar9 = uVar10;
      if (uVar2 <= uVar10) {
        uVar9 = uVar2;
      }
      while ((ulonglong)((longlong)pwVar6 - (longlong)param_2) < uVar9) {
        wVar3 = *pwVar6;
        pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
        if (((byte)wVar3 & 0xc0) != 0x80) goto LAB_1404a7946;
        uVar4 = (byte)wVar3 & 0x3f | uVar4 << 6;
      }
      if (uVar9 < uVar10) {
        *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
        *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar9);
        *puVar5 = uVar4;
        goto LAB_1404a7951;
      }
      if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[uVar8 & 0xff] <= uVar4) {
          if (puVar11 != (uint *)0x0) {
            *puVar11 = uVar4;
          }
          FUN_1404b6228(-(ulonglong)(uVar4 != 0) & uVar10,puVar5);
          goto LAB_1404a7951;
        }
      }
    }
  }
LAB_1404a7946:
  FUN_1404b6214(puVar5,param_5);
LAB_1404a7951:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_78);
}

