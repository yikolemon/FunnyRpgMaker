/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400214cf */

int FUN_1400214cf(longlong *param_1,longlong param_2,longlong param_3)

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
    if (param_1 != (longlong *)0x0) {
      puVar11 = (uint *)param_1[7];
      puVar10 = (ushort *)(param_2 + 2);
      bVar4 = false;
      do {
        bVar1 = (byte)puVar10[-1];
        switch(bVar1) {
        case 4:
          iVar5 = FUN_140021063(param_1,(uint)*puVar10);
          if (iVar5 != 0) goto LAB_140021650;
          puVar11 = (uint *)param_1[7];
          bVar4 = true;
          break;
        default:
          param_1[7] = (longlong)puVar11;
          iVar5 = 0;
LAB_140021650:
          if (!bVar4) {
            return iVar5;
          }
          FUN_140021187(param_1);
          return iVar5;
        case 8:
        case 9:
          uVar9 = (uint)(byte)*puVar11;
          puVar11 = (uint *)((longlong)puVar11 + 1);
          sVar7 = 0x18;
          goto LAB_1400215da;
        case 0xc:
        case 0xd:
          uVar8 = (ushort)*puVar11 << 8 | (ushort)*puVar11 >> 8;
          goto LAB_1400215af;
        case 0xe:
        case 0xf:
          uVar8 = (ushort)*puVar11;
LAB_1400215af:
          uVar9 = (uint)uVar8;
          puVar11 = (uint *)((longlong)puVar11 + 2);
          sVar7 = 0x10;
LAB_1400215da:
          uVar3 = (int)(uVar9 << sVar7) >> sVar7;
          if ((bVar1 & 1) == 0) {
            uVar3 = uVar9;
          }
          uVar6 = (ulonglong)*puVar10;
          cVar2 = *(char *)((longlong)puVar10 + -1);
          if (cVar2 == '\x04') {
LAB_140021605:
            *(uint *)(param_3 + uVar6) = uVar3;
          }
          else if (cVar2 == '\x02') {
            *(short *)(param_3 + uVar6) = (short)uVar3;
          }
          else {
            if (cVar2 != '\x01') goto LAB_140021605;
            *(char *)(param_3 + uVar6) = (char)uVar3;
          }
          break;
        case 0x10:
        case 0x11:
          uVar9 = *puVar11;
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          goto LAB_140021560;
        case 0x12:
        case 0x13:
          uVar9 = *puVar11;
LAB_140021560:
          puVar11 = puVar11 + 1;
          sVar7 = 0;
          goto LAB_1400215da;
        case 0x14:
        case 0x15:
          uVar9 = (uint)*(byte *)((longlong)puVar11 + 2) |
                  (uint)*(byte *)((longlong)puVar11 + 1) << 8 | (uint)(byte)*puVar11 << 0x10;
          goto LAB_1400215d5;
        case 0x16:
        case 0x17:
          uVar9 = (uint)(uint3)*puVar11;
LAB_1400215d5:
          puVar11 = (uint *)((longlong)puVar11 + 3);
          sVar7 = 8;
          goto LAB_1400215da;
        case 0x18:
        case 0x19:
          uVar6 = (ulonglong)*(byte *)((longlong)puVar10 + -1);
          if ((ulonglong)(param_1[8] - (longlong)puVar11) < uVar6) {
            iVar5 = 0x55;
            goto LAB_140021650;
          }
          if (bVar1 == 0x18) {
            FUN_1400b3550((undefined8 *)((ulonglong)*puVar10 + param_3),(undefined8 *)puVar11,uVar6)
            ;
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

