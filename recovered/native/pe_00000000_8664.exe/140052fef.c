/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140052fef */

undefined8 *
FUN_140052fef(undefined8 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [61];
  byte local_3b;
  undefined2 local_3a;
  undefined8 local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar4 = 6;
  if (-1 < (int)param_5) {
    uVar4 = (ulonglong)param_5;
  }
  uVar7 = param_4 & 0x7fffff;
  uVar9 = 0xffffff82;
  if (uVar7 == 0) {
    uVar9 = 0;
  }
  uVar8 = uVar7 * 2 + 0x1000000;
  uVar2 = (param_4 >> 0x17) - 0x7f;
  if (param_4 >> 0x17 == 0) {
    uVar8 = uVar7 * 2;
    uVar2 = uVar9;
  }
  uVar9 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar9 = uVar2;
  }
  if ((longlong)uVar4 <= (longlong)param_3 - (longlong)param_2) {
    lVar10 = 1;
    if (9 < uVar9) {
      lVar10 = 3 - (ulonglong)(uVar9 < 100);
    }
    if ((longlong)((lVar10 - (ulonglong)(uVar4 == 0)) + 4) <=
        (longlong)(((longlong)param_3 - (longlong)param_2) - uVar4)) {
      uVar7 = (uint)uVar4;
      if (uVar7 < 6) {
        uVar8 = (1 << ((char)uVar4 * -4 + 0x18U & 0x1f) &
                (uVar8 * 2 + 0x1ffffff | uVar8) & uVar8 * 2) + uVar8;
        *param_2 = (byte)(uVar8 >> 0x18) | 0x30;
        if (uVar4 != 0) goto LAB_14005310c;
        param_2 = param_2 + 1;
      }
      else {
        *param_2 = (byte)(uVar8 >> 0x18) | 0x30;
LAB_14005310c:
        uVar8 = uVar8 & 0xffffff;
        param_2[1] = 0x2e;
        param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8 >> 0x14];
        param_2 = param_2 + 3;
        if (uVar7 != 1) {
          iVar5 = 0x14;
          uVar11 = 0;
          do {
            if (iVar5 == 0) {
              param_2 = param_2 + uVar11;
              uVar11 = ~uVar11 + uVar4;
              FUN_1401c5830(param_2,CONCAT71((uint7)(uint3)(uVar8 >> 8),0x30),uVar11);
              break;
            }
            uVar8 = uVar8 & ~(-1 << ((byte)iVar5 & 0x1f));
            iVar5 = iVar5 + -4;
            param_2[uVar11] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8 >> ((byte)iVar5 & 0x3f)];
            uVar11 = uVar11 + 1;
          } while (uVar7 - 1 != (int)uVar11);
          param_2 = param_2 + uVar11;
        }
      }
      pbVar1 = param_2 + 2;
      *param_2 = 0x70;
      param_2[1] = (char)((int)uVar2 >> 0x1f) * -2 + 0x2b;
      if (uVar9 < 10) {
        pbVar6 = (byte *)((longlong)&local_3a + 1);
        uVar7 = uVar9;
LAB_1400531d8:
        *pbVar6 = (byte)uVar7 | 0x30;
      }
      else {
        uVar7 = uVar9 / 100;
        local_3a = *(undefined2 *)(&DAT_1401c8c78 + (ulonglong)(uVar9 % 100) * 2);
        if (99 < uVar9) {
          pbVar6 = &local_3b;
          goto LAB_1400531d8;
        }
        pbVar6 = (byte *)&local_3a;
      }
      lVar10 = (longlong)&local_38 - (longlong)pbVar6;
      uVar3 = 0x84;
      if (lVar10 <= (longlong)param_3 - (longlong)pbVar1) {
        thunk_FUN_14004a75e(pbVar6,lVar10,pbVar1);
        param_3 = pbVar1 + lVar10;
        uVar3 = 0;
      }
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = uVar3;
      goto LAB_14005320b;
    }
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
LAB_14005320b:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

