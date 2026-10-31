/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140061d58 */

ulonglong FUN_140061d58(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_94;
  size_t local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  puVar2 = (undefined1 *)param_1[2];
  local_94 = 0;
  if (puVar2 == (undefined1 *)0x0) {
    uVar8 = 6;
  }
  else {
    pbVar5 = FUN_14006258e((longlong)param_1,(longlong *)&local_90);
    uVar8 = 2;
    if (((pbVar5 != (byte *)0x0) && (local_90 == 0x10)) &&
       (iVar3 = strncmp((char *)pbVar5,"StartFontMetrics",0x10), iVar3 == 0)) {
      pbVar5 = FUN_14006258e((longlong)param_1,(longlong *)&local_90);
      uVar8 = 0xa0;
      if (pbVar5 != (byte *)0x0) {
        do {
          iVar3 = FUN_1400625e6((char *)pbVar5,local_90);
          if (iVar3 < 0x1e) {
            if (iVar3 < 0x14) {
              if (iVar3 == 0) {
                local_88[0] = 2;
                uVar6 = FUN_1400626d2(param_1,(longlong)local_88,1);
                if ((int)uVar6 != 1) break;
                *(undefined4 *)(puVar2 + 0x14) = local_80;
              }
              else if (iVar3 == 0xe) {
                local_88[0] = 2;
                uVar6 = FUN_1400626d2(param_1,(longlong)local_88,1);
                if ((int)uVar6 != 1) break;
                *(undefined4 *)(puVar2 + 0x18) = local_80;
              }
            }
            else if (iVar3 == 0x1a) {
              local_88[0] = 2;
              local_78 = 2;
              local_68 = 2;
              local_58 = 2;
              uVar6 = FUN_1400626d2(param_1,(longlong)local_88,4);
              if ((int)uVar6 != 4) break;
              *(undefined4 *)(puVar2 + 4) = local_80;
              *(undefined4 *)(puVar2 + 8) = local_70;
              *(undefined4 *)(puVar2 + 0xc) = local_60;
              *(undefined4 *)(puVar2 + 0x10) = local_50;
            }
            else if (iVar3 == 0x14) {
LAB_14006200e:
              uVar8 = 0;
              goto LAB_140061fd9;
            }
          }
          else if (iVar3 < 0x2d) {
            if (iVar3 == 0x1e) {
              local_88[0] = 4;
              uVar6 = FUN_1400626d2(param_1,(longlong)local_88,1);
              if ((int)uVar6 != 1) break;
              *puVar2 = (undefined1)local_80;
            }
            else if (iVar3 == 0x28) {
              uVar7 = FUN_140062669(param_1,&local_94);
              if ((int)uVar7 != 0) break;
              if ((local_94 & 0xfffffffd) != 0) {
                uVar8 = 7;
                break;
              }
            }
          }
          else if (iVar3 == 0x2d) {
            local_98 = 0;
            uVar7 = FUN_140062669(param_1,&local_98);
            if ((int)uVar7 != 0) break;
            uVar6 = FUN_14006283d((longlong)param_1,local_98);
            uVar8 = 0;
            if ((int)uVar6 != 0) {
              uVar8 = uVar6 & 0xffffffff;
              goto LAB_140061fd9;
            }
          }
          else if (iVar3 == 0x31) {
            uVar4 = FUN_1400628ce(param_1);
            uVar8 = (ulonglong)uVar4;
            if (uVar4 == 0) goto LAB_14006200e;
            break;
          }
          pbVar5 = FUN_14006258e((longlong)param_1,(longlong *)&local_90);
        } while (pbVar5 != (byte *)0x0);
      }
      FUN_14001c53d(lVar1,*(longlong *)(puVar2 + 0x20));
      *(undefined8 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      FUN_14001c53d(lVar1,*(longlong *)(puVar2 + 0x30));
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined4 *)(puVar2 + 0x38) = 0;
      *puVar2 = 0;
    }
  }
LAB_140061fd9:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar8;
}

