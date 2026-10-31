/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4f57 */

int FUN_101c4f57(int param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  sbyte sVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    iVar9 = 6;
  }
  else {
    if (param_1 != 0) {
      puVar8 = *(uint **)(param_1 + 0x20);
      puVar7 = (ushort *)(param_2 + 2);
      bVar3 = false;
      do {
        bVar1 = (byte)puVar7[-1];
        switch(bVar1) {
        case 4:
          iVar9 = FUN_101c4b69(param_1,*puVar7);
          if (iVar9 != 0) goto LAB_101c50b7;
          puVar8 = *(uint **)(param_1 + 0x20);
          bVar3 = true;
          break;
        default:
          *(uint **)(param_1 + 0x20) = puVar8;
          iVar9 = 0;
LAB_101c50b7:
          if (!bVar3) {
            return iVar9;
          }
          FUN_101c4c66(param_1);
          return iVar9;
        case 8:
        case 9:
          uVar10 = (uint)(byte)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          sVar4 = 0x18;
          goto LAB_101c5037;
        case 0xc:
        case 0xd:
          uVar5 = (ushort)*puVar8 << 8 | (ushort)*puVar8 >> 8;
          goto LAB_101c5013;
        case 0xe:
        case 0xf:
          uVar5 = (ushort)*puVar8;
LAB_101c5013:
          uVar10 = (uint)uVar5;
          puVar8 = (uint *)((int)puVar8 + 2);
          sVar4 = 0x10;
LAB_101c5037:
          uVar6 = (int)(uVar10 << sVar4) >> sVar4;
          if ((bVar1 & 1) == 0) {
            uVar6 = uVar10;
          }
          uVar10 = (uint)*puVar7;
          cVar2 = *(char *)((int)puVar7 + -1);
          if (cVar2 == '\x04') {
LAB_101c505e:
            *(uint *)(param_3 + uVar10) = uVar6;
          }
          else if (cVar2 == '\x02') {
            *(short *)(param_3 + uVar10) = (short)uVar6;
          }
          else {
            if (cVar2 != '\x01') goto LAB_101c505e;
            *(char *)(param_3 + uVar10) = (char)uVar6;
          }
          break;
        case 0x10:
        case 0x11:
          uVar10 = *puVar8;
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          goto LAB_101c4fc9;
        case 0x12:
        case 0x13:
          uVar10 = *puVar8;
LAB_101c4fc9:
          puVar8 = puVar8 + 1;
          sVar4 = 0;
          goto LAB_101c5037;
        case 0x14:
        case 0x15:
          uVar10 = (uint)*(byte *)((int)puVar8 + 2) |
                   (uint)*(byte *)((int)puVar8 + 1) << 8 | (uint)(byte)*puVar8 << 0x10;
          goto LAB_101c5032;
        case 0x16:
        case 0x17:
          uVar10 = (uint)(uint3)*puVar8;
LAB_101c5032:
          puVar8 = (uint *)((int)puVar8 + 3);
          sVar4 = 8;
          goto LAB_101c5037;
        case 0x18:
        case 0x19:
          uVar10 = (uint)*(byte *)((int)puVar7 + -1);
          if ((uint)(*(int *)(param_1 + 0x24) - (int)puVar8) < uVar10) {
            iVar9 = 0x55;
            goto LAB_101c50b7;
          }
          if (bVar1 == 0x18) {
            FUN_1025b2d0((uint)*puVar7 + param_3,puVar8,uVar10);
          }
          puVar8 = (uint *)((int)puVar8 + uVar10);
        }
        puVar7 = puVar7 + 2;
      } while( true );
    }
    iVar9 = 0x28;
  }
  return iVar9;
}

