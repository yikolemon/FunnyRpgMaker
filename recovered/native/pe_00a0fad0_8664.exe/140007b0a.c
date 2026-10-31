/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007b0a */

bool FUN_140007b0a(undefined8 param_1,ushort *param_2,byte *param_3,byte *param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  *param_5 = (longlong)param_3;
  *param_8 = param_6;
  pbVar5 = (byte *)*param_5;
  if ((pbVar5 != param_4) && (param_6 != param_7)) {
    do {
      bVar1 = *pbVar5;
      uVar8 = (uint)bVar1;
      if (*param_2 < 2) {
        param_3 = pbVar5;
        if ((char)bVar1 < '\0') {
          if (bVar1 < 0xc0) {
            *param_5 = (longlong)(pbVar5 + 1);
            return (bool)2;
          }
          uVar8 = (uint)bVar1;
          if (bVar1 < 0xe0) {
            uVar8 = uVar8 & 0x1f;
            uVar9 = 1;
          }
          else if (bVar1 < 0xf0) {
            uVar8 = uVar8 & 0xf;
            uVar9 = 2;
          }
          else if (bVar1 < 0xf8) {
            uVar8 = uVar8 & 7;
            uVar9 = 3;
          }
          else {
            uVar8 = uVar8 & 3;
            uVar9 = 5 - (bVar1 < 0xfc);
          }
          uVar7 = (uint)(2 < uVar9);
          if ((longlong)param_4 - (longlong)pbVar5 < (longlong)(ulonglong)((uVar9 - uVar7) + 1))
          break;
          pbVar6 = pbVar5 + 1;
          *param_5 = (longlong)pbVar6;
          uVar10 = uVar9;
          if (uVar7 < uVar9) {
            do {
              if (-0x41 < (char)*pbVar6) {
                return (bool)2;
              }
              uVar8 = *pbVar6 & 0x3f | uVar8 << 6;
              uVar10 = uVar10 - 1;
              pbVar6 = pbVar6 + 1;
              *param_5 = (longlong)pbVar6;
            } while ((int)uVar7 < (int)uVar10);
          }
          uVar7 = uVar8;
          if (2 < uVar9) {
            uVar7 = uVar8 << 6;
          }
          if (0x10ffff < uVar7) {
            return (bool)2;
          }
          if (0xffff < uVar7) {
            puVar3 = (ushort *)*param_8;
            *param_8 = (longlong)(puVar3 + 1);
            *puVar3 = (short)(uVar7 >> 10) + 0x3fc0U | 0xd800;
            *param_2 = (ushort)uVar7 & 0x3ff | 0xdc00;
            goto LAB_140007b98;
          }
          if (2 < uVar9) {
            if (pbVar6 == param_4) {
              *param_5 = (longlong)pbVar5;
              break;
            }
            *param_5 = (longlong)(pbVar6 + 1);
            if (-0x41 < (char)*pbVar6) {
              return (bool)2;
            }
            uVar8 = uVar8 << 6 | *pbVar6 & 0x3f;
          }
        }
        else {
          *param_5 = (longlong)(pbVar5 + 1);
        }
        if (*param_2 == 0) {
          *param_2 = 1;
        }
        puVar4 = (undefined2 *)*param_8;
        *param_8 = (longlong)(puVar4 + 1);
        *puVar4 = (short)uVar8;
      }
      else {
        if (-0x41 < (char)bVar1) {
          return (bool)2;
        }
        *param_5 = (longlong)(pbVar5 + 1);
        uVar2 = *param_2;
        puVar3 = (ushort *)*param_8;
        *param_8 = (longlong)(puVar3 + 1);
        *puVar3 = bVar1 & 0x3f | uVar2;
        *param_2 = 1;
      }
LAB_140007b98:
      pbVar5 = (byte *)*param_5;
      if ((pbVar5 == param_4) || (*param_8 == param_7)) break;
    } while( true );
  }
  return param_3 == pbVar5;
}

