/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003a43c */

int FUN_14003a43c(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  int iVar7;
  
  iVar7 = 0;
  do {
    if (iVar7 == 1000000) {
      iVar7 = 0x8b;
      goto LAB_14003ab57;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    bVar1 = *(byte *)(param_1[0x3c] + (longlong)(int)param_1[0x3d]);
    *(byte *)(param_1 + 0x3e) = bVar1;
    *(undefined4 *)((longlong)param_1 + 500) = 1;
    bVar2 = (&DAT_1400f44d0)[bVar1];
    uVar4 = *(int *)((longlong)param_1 + 0x24) - (uint)(bVar2 >> 4);
    *(uint *)(param_1 + 7) = uVar4;
    if ((int)uVar4 < 0) {
      if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
        iVar7 = 0x81;
        goto LAB_14003ab57;
      }
      if (0xf < bVar2) {
        uVar5 = 0;
        do {
          *(undefined4 *)(param_1[6] + uVar5 * 4) = 0;
          uVar5 = uVar5 + 1;
          bVar1 = *(byte *)(param_1 + 0x3e);
          bVar2 = (&DAT_1400f44d0)[bVar1];
        } while (uVar5 < bVar2 >> 4);
      }
      *(undefined4 *)(param_1 + 7) = 0;
      uVar4 = 0;
    }
    iVar3 = (bVar2 & 0xf) + uVar4;
    *(int *)((longlong)param_1 + 0x3c) = iVar3;
    if ((int)param_1[5] < iVar3) {
      iVar7 = 0x82;
      goto LAB_14003ab57;
    }
    pauVar6 = (undefined1 (*) [32])((ulonglong)uVar4 * 4 + param_1[6]);
    switch(bVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      FUN_14003ab64((longlong)param_1);
      break;
    case 6:
    case 7:
      FUN_14003abba((longlong)param_1,(ushort *)pauVar6);
      break;
    case 8:
    case 9:
      FUN_14003abf9((longlong)param_1,(ushort *)pauVar6);
      break;
    case 10:
      FUN_14003ac2c((longlong)param_1,(short *)pauVar6);
      break;
    case 0xb:
      FUN_14003ac62((longlong)param_1,(short *)pauVar6);
      break;
    case 0xc:
      FUN_14003ac8c((longlong)param_1,(int *)pauVar6);
      break;
    case 0xd:
      FUN_14003aca0((longlong)param_1,(int *)pauVar6);
      break;
    case 0xe:
      FUN_14003acb4((longlong)param_1);
      break;
    case 0xf:
      FUN_14003acc5((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x10:
      FUN_14003af67((longlong)param_1,(undefined2 *)pauVar6);
      break;
    case 0x11:
      FUN_14003af72((longlong)param_1,(undefined2 *)pauVar6);
      break;
    case 0x12:
      FUN_14003af7d((longlong)param_1,(undefined2 *)pauVar6);
      break;
    case 0x13:
      FUN_14003af88((longlong)param_1,(int *)pauVar6);
      break;
    case 0x14:
      FUN_14003afde((longlong)param_1,(int *)pauVar6);
      break;
    case 0x15:
      FUN_14003b03d((longlong)param_1,(int *)pauVar6);
      break;
    case 0x16:
      FUN_14003b09f((longlong)param_1,(int *)pauVar6);
      break;
    case 0x17:
      FUN_14003b142((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x18:
      FUN_14003b161((longlong)param_1);
      break;
    case 0x19:
      FUN_14003b17a((longlong)param_1);
      break;
    case 0x1a:
      FUN_14003b193((longlong)param_1,(undefined4 *)pauVar6);
      break;
    case 0x1b:
      FUN_14003b19c((longlong)param_1);
      break;
    case 0x1c:
      FUN_14003b1d8((longlong)param_1,(int *)pauVar6);
      break;
    case 0x1d:
      FUN_14003b253((longlong)param_1,(undefined4 *)pauVar6);
      break;
    case 0x1e:
      FUN_14003b25c((longlong)param_1,(undefined4 *)pauVar6);
      break;
    case 0x1f:
      FUN_14003b265((longlong)param_1,(int *)pauVar6);
      break;
    case 0x20:
      FUN_14003b28e((undefined4 *)pauVar6);
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      FUN_14003b294((longlong)param_1);
      break;
    case 0x23:
      FUN_14003b29c((undefined8 *)pauVar6);
      break;
    case 0x24:
      FUN_14003b2aa((longlong)param_1,(undefined4 *)pauVar6);
      break;
    case 0x25:
      FUN_14003b2b0((longlong)param_1,(int *)pauVar6);
      break;
    case 0x26:
      FUN_14003b2e0((longlong)param_1,(int *)pauVar6);
      break;
    case 0x27:
      FUN_14003b338((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
switchD_14003a515_caseD_28:
      FUN_14003b3fa((longlong)param_1);
      break;
    case 0x29:
      FUN_14003b49d((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x2a:
      FUN_14003b4e6((longlong)param_1,(int *)pauVar6);
      break;
    case 0x2b:
      FUN_14003b5e3((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x2c:
      FUN_14003b6b8((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x2d:
      FUN_14003b79c((longlong)param_1);
      break;
    case 0x2e:
    case 0x2f:
      FUN_14003b7fe((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x30:
    case 0x31:
      FUN_14003b889((longlong)param_1);
      break;
    case 0x32:
    case 0x33:
      FUN_14003ba77((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x34:
    case 0x35:
      FUN_14003bb64((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x36:
    case 0x37:
      FUN_14003bc89((longlong)param_1,(int *)pauVar6);
      break;
    case 0x38:
      FUN_14003bd9b((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x39:
      FUN_14003bed9((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x3a:
    case 0x3b:
      FUN_14003c214((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x3c:
      FUN_14003c32f((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x3d:
      FUN_14003c404((longlong)param_1);
      break;
    case 0x3e:
    case 0x3f:
      FUN_14003c41d((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x40:
      FUN_14003c55c((longlong)param_1,(longlong)pauVar6);
      break;
    case 0x41:
      FUN_14003c5dc((longlong)param_1,(longlong)pauVar6);
      break;
    case 0x42:
      FUN_14003c676((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x43:
      FUN_14003c76e((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x44:
      FUN_14003c79f((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x45:
      FUN_14003c7cb((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x46:
    case 0x47:
      FUN_14003c801((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x48:
      FUN_14003c869((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x49:
    case 0x4a:
      FUN_14003c8fa((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x4b:
      FUN_14003ca7c((longlong)param_1,(undefined4 *)pauVar6);
      break;
    case 0x4c:
      FUN_14003ca92(param_1,(undefined4 *)pauVar6);
      break;
    case 0x4d:
      FUN_14003cac0((longlong)param_1);
      break;
    case 0x4e:
      FUN_14003cac8((longlong)param_1);
      break;
    case 0x4f:
      FUN_14003cad0((longlong)param_1);
      break;
    case 0x50:
      FUN_14003cad8((uint *)pauVar6);
      break;
    case 0x51:
      FUN_14003cae5((uint *)pauVar6);
      break;
    case 0x52:
      FUN_14003caf2((uint *)pauVar6);
      break;
    case 0x53:
      FUN_14003caff((uint *)pauVar6);
      break;
    case 0x54:
      FUN_14003cb0c((uint *)pauVar6);
      break;
    case 0x55:
      FUN_14003cb19((uint *)pauVar6);
      break;
    case 0x56:
      FUN_14003cb26((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x57:
      FUN_14003cb47((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x58:
      FUN_14003cb69((longlong)param_1,(int *)pauVar6);
      break;
    case 0x5a:
      FUN_14003cbc9((uint *)pauVar6);
      break;
    case 0x5b:
      FUN_14003cbde((uint *)pauVar6);
      break;
    case 0x5c:
      FUN_14003cbf4((uint *)pauVar6);
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_14003cbff((longlong)param_1,(int *)pauVar6);
      break;
    case 0x5e:
      FUN_14003cd49((longlong)param_1,(undefined2 *)pauVar6);
      break;
    case 0x5f:
      FUN_14003cd54((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x60:
      FUN_14003cd6b((int *)pauVar6);
      break;
    case 0x61:
      FUN_14003cd71((int *)pauVar6);
      break;
    case 0x62:
      FUN_14003cd77((longlong)param_1,(uint *)pauVar6);
      break;
    case 99:
      FUN_14003cda5((uint *)pauVar6);
      break;
    case 100:
      FUN_14003cdc5((int *)pauVar6);
      break;
    case 0x65:
      FUN_14003cdd1((int *)pauVar6);
      break;
    case 0x66:
      FUN_14003cdd4((byte *)pauVar6);
      break;
    case 0x67:
      FUN_14003cdd8((uint *)pauVar6);
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      FUN_14003cde3((longlong)param_1,(undefined4 *)pauVar6);
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      FUN_14003ce0d((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x70:
      FUN_14003ce36((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      FUN_14003cea2((longlong)param_1,(int *)pauVar6);
      break;
    case 0x76:
      FUN_14003cfa3((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x77:
      FUN_14003cfd5((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x78:
      FUN_14003d007((longlong)param_1,(int *)pauVar6);
      break;
    case 0x79:
      FUN_14003d012((longlong)param_1,(int *)pauVar6);
      break;
    case 0x7a:
      FUN_14003d01d((longlong)param_1);
      break;
    case 0x7c:
      FUN_14003d036((longlong)param_1);
      break;
    case 0x7d:
      FUN_14003d04f((longlong)param_1);
      break;
    case 0x80:
      FUN_14003d068((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x81:
      FUN_14003d0e3((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x82:
      FUN_14003d143((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x85:
      FUN_14003d1a3((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x86:
    case 0x87:
      FUN_14003d256((longlong)param_1,(ushort *)pauVar6);
      break;
    case 0x88:
      FUN_14003d371(param_1,(uint *)pauVar6);
      break;
    case 0x89:
      FUN_14003d46e((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x8a:
      FUN_14003d556((undefined8 *)pauVar6);
      break;
    case 0x8b:
      FUN_14003d563((int *)pauVar6);
      break;
    case 0x8c:
      FUN_14003d56d((int *)pauVar6);
      break;
    case 0x8d:
      FUN_14003d577((longlong)param_1,(uint *)pauVar6);
      break;
    case 0x8e:
      FUN_14003d587(param_1,(uint *)pauVar6);
      break;
    case 0x91:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_14003a515_caseD_28;
      FUN_14003d607(param_1,pauVar6);
      break;
    case 0x92:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_14003a515_caseD_28;
      FUN_14003d678((undefined4 *)pauVar6);
      break;
    default:
      if (bVar1 < 0xe0) {
        if (bVar1 < 0xc0) {
          if (bVar1 < 0xb8) {
            if (bVar1 < 0xb0) goto switchD_14003a515_caseD_28;
            FUN_14003dbc8((longlong)param_1,(longlong)pauVar6);
          }
          else {
            FUN_14003db2d((longlong)param_1,(longlong)pauVar6);
          }
        }
        else {
          FUN_14003d8f2((longlong)param_1,(uint *)pauVar6);
        }
      }
      else {
        FUN_14003d67f((longlong)param_1,(uint *)pauVar6);
      }
    }
    if ((int)param_1[4] != 0) {
      return (int)param_1[4];
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x3c);
    iVar3 = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
    *(int *)(param_1 + 0x3d) = iVar3;
    if (*(int *)((longlong)param_1 + 0x1ec) <= iVar3) {
      iVar7 = 0x83;
      if ((int)param_1[0x4a] < 1) {
        return 0;
      }
LAB_14003ab57:
      *(int *)(param_1 + 4) = iVar7;
      return iVar7;
    }
    iVar7 = iVar7 + 1;
    if (*(char *)((longlong)param_1 + 0x2c4) != '\0') {
      return 0;
    }
  } while( true );
}

