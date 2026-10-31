/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007cfc */

bool FUN_140007cfc(undefined8 param_1,ushort *param_2,ushort *param_3,ushort *param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  ushort uVar1;
  byte *pbVar2;
  bool bVar3;
  ushort *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  *param_5 = param_3;
  *param_8 = param_6;
  puVar4 = (ushort *)*param_5;
  if ((puVar4 != param_4) && (param_6 != param_7)) {
    uVar8 = (uint)*param_2;
    do {
      uVar1 = *puVar4;
      uVar5 = (uint)uVar1;
      if ((ushort)uVar8 < 2) {
        if ((uVar5 & 0xfc00) != 0xd800) {
          if (uVar1 < 0x80) {
            iVar9 = 0;
            bVar6 = (byte)uVar1;
          }
          else {
            if (0x7ff < uVar5) goto LAB_140007e08;
            bVar6 = (byte)(uVar1 >> 6) | 0xc0;
            iVar9 = 1;
          }
          goto LAB_140007e19;
        }
        uVar5 = uVar5 * 0x400 + 0xfca10000;
        bVar6 = (byte)(uVar5 >> 0x12) | 0xf0;
        uVar8 = 1;
        bVar3 = true;
        iVar9 = 3;
LAB_140007e1f:
        if (param_7 - param_6 < (longlong)(ulonglong)uVar8) break;
        *param_5 = puVar4 + 1;
        pbVar2 = (byte *)*param_8;
        *param_8 = (longlong)(pbVar2 + 1);
        *pbVar2 = bVar6;
        iVar7 = uVar8 - 1;
        if (iVar7 != 0) goto LAB_140007e46;
      }
      else {
        if ((ushort)(uVar1 + 0x2000) < 0xfc00) {
          return (bool)2;
        }
        uVar5 = (uVar5 + (uVar8 & 0xffff) * 0x400) - 0xdc00;
        if (uVar5 < 0x10000) {
LAB_140007e08:
          bVar6 = (byte)(uVar5 >> 0xc) | 0xe0;
          iVar9 = 2;
LAB_140007e19:
          uVar8 = iVar9 + 1;
          bVar3 = false;
          goto LAB_140007e1f;
        }
        if (param_7 - param_6 < 3) break;
        *param_5 = puVar4 + 1;
        iVar7 = 3;
        bVar3 = false;
        iVar9 = 3;
LAB_140007e46:
        uVar8 = iVar7 + 1;
        iVar9 = iVar9 * 6;
        do {
          iVar9 = iVar9 + -6;
          pbVar2 = (byte *)*param_8;
          *param_8 = (longlong)(pbVar2 + 1);
          *pbVar2 = (byte)(uVar5 >> ((byte)iVar9 & 0x1f)) & 0x3f | 0x80;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
      uVar8 = uVar5 >> 10;
      if (!bVar3) {
        uVar8 = 1;
      }
      *param_2 = (ushort)uVar8;
      puVar4 = (ushort *)*param_5;
      if ((puVar4 == param_4) || (param_6 = *param_8, param_6 == param_7)) break;
    } while( true );
  }
  return param_3 == puVar4;
}

