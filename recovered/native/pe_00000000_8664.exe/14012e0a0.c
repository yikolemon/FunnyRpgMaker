/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e0a0 */

int FUN_14012e0a0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  sbyte sVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  uint *puVar11;
  
  if (param_2 == 0) {
    iVar5 = 6;
  }
  else {
    if (param_1 != 0) {
      puVar11 = *(uint **)(param_1 + 0x38);
      puVar10 = (ushort *)(param_2 + 2);
      bVar4 = false;
      do {
        bVar1 = (byte)puVar10[-1];
        switch(bVar1) {
        case 4:
          iVar5 = FUN_14012dc34(param_1,*puVar10);
          if (iVar5 != 0) goto LAB_14012e221;
          puVar11 = *(uint **)(param_1 + 0x38);
          bVar4 = true;
          break;
        default:
          *(uint **)(param_1 + 0x38) = puVar11;
          iVar5 = 0;
LAB_14012e221:
          if (!bVar4) {
            return iVar5;
          }
          FUN_14012dd58(param_1);
          return iVar5;
        case 8:
        case 9:
          uVar9 = (uint)(byte)*puVar11;
          puVar11 = (uint *)((longlong)puVar11 + 1);
          sVar7 = 0x18;
          goto LAB_14012e1ab;
        case 0xc:
        case 0xd:
          uVar8 = (ushort)*puVar11 << 8 | (ushort)*puVar11 >> 8;
          goto LAB_14012e180;
        case 0xe:
        case 0xf:
          uVar8 = (ushort)*puVar11;
LAB_14012e180:
          uVar9 = (uint)uVar8;
          puVar11 = (uint *)((longlong)puVar11 + 2);
          sVar7 = 0x10;
LAB_14012e1ab:
          uVar3 = (int)(uVar9 << sVar7) >> sVar7;
          if ((bVar1 & 1) == 0) {
            uVar3 = uVar9;
          }
          uVar6 = (ulonglong)*puVar10;
          cVar2 = *(char *)((longlong)puVar10 + -1);
          if (cVar2 == '\x04') {
LAB_14012e1d6:
            *(uint *)(param_3 + uVar6) = uVar3;
          }
          else if (cVar2 == '\x02') {
            *(short *)(param_3 + uVar6) = (short)uVar3;
          }
          else {
            if (cVar2 != '\x01') goto LAB_14012e1d6;
            *(char *)(param_3 + uVar6) = (char)uVar3;
          }
          break;
        case 0x10:
        case 0x11:
          uVar9 = *puVar11;
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          goto LAB_14012e131;
        case 0x12:
        case 0x13:
          uVar9 = *puVar11;
LAB_14012e131:
          puVar11 = puVar11 + 1;
          sVar7 = 0;
          goto LAB_14012e1ab;
        case 0x14:
        case 0x15:
          uVar9 = (uint)*(byte *)((longlong)puVar11 + 2) |
                  (uint)*(byte *)((longlong)puVar11 + 1) << 8 | (uint)(byte)*puVar11 << 0x10;
          goto LAB_14012e1a6;
        case 0x16:
        case 0x17:
          uVar9 = (uint)(uint3)*puVar11;
LAB_14012e1a6:
          puVar11 = (uint *)((longlong)puVar11 + 3);
          sVar7 = 8;
          goto LAB_14012e1ab;
        case 0x18:
        case 0x19:
          uVar6 = (ulonglong)*(byte *)((longlong)puVar10 + -1);
          if ((ulonglong)(*(longlong *)(param_1 + 0x40) - (longlong)puVar11) < uVar6) {
            iVar5 = 0x55;
            goto LAB_14012e221;
          }
          if (bVar1 == 0x18) {
            FUN_1401c5180((ulonglong)*puVar10 + param_3,puVar11,uVar6);
          }
          puVar11 = (uint *)((longlong)puVar11 + uVar6);
        }
        puVar10 = puVar10 + 2;
      } while( true );
    }
    iVar5 = 0x28;
  }
  return iVar5;
}

