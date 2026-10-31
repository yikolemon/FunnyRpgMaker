/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140045712 */

ulonglong FUN_140045712(longlong param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStackY_88 [32];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar5 = *(ushort *)((longlong)plVar2 + 0x1a);
  if (*(uint *)(plVar2 + 1) < (uint)*(ushort *)((longlong)plVar2 + 0x62) + (uint)uVar5 + 4) {
    iVar6 = FUN_14001c730(plVar2,4,0);
    uVar7 = CONCAT44(extraout_var,iVar6);
    if (iVar6 != 0) goto LAB_140045828;
    uVar5 = *(ushort *)((longlong)plVar2 + 0x1a);
  }
  *(undefined8 *)(plVar2[4] + (ulonglong)uVar5 * 8) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(plVar2[4] + 8 + (ulonglong)*(ushort *)((longlong)plVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(plVar2[4] + 0x10 + (ulonglong)*(ushort *)((longlong)plVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(plVar2[4] + 0x18 + (ulonglong)*(ushort *)((longlong)plVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x100);
  plVar2 = *(longlong **)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x218) != 0) {
    FUN_14001c53d(lVar4,*(longlong *)(lVar3 + 0x220));
    *(undefined8 *)(lVar3 + 0x220) = 0;
  }
  *(undefined4 *)(lVar3 + 0x218) = 0;
  uVar7 = FUN_140020a41((longlong)plVar2,*(uint *)(param_1 + 0xe0));
  local_4c = (uint)uVar7;
  if (local_4c == 0) {
    uVar5 = FUN_140020aa5(plVar2,&local_4c);
    uVar7 = (ulonglong)local_4c;
    if (local_4c == 0) {
      if (uVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x16;
        if ((uint)uVar5 <= *(uint *)(param_1 + 0x30)) {
          puVar8 = (undefined8 *)FUN_14001f231(lVar4,1,0,(uint)uVar5,0,(int *)&local_4c);
          *(undefined8 **)(lVar3 + 0x220) = puVar8;
          uVar7 = (ulonglong)local_4c;
          if (local_4c == 0) {
            uVar7 = FUN_140020a85(plVar2,puVar8,(uint)uVar5);
            local_4c = (uint)uVar7;
            if (local_4c == 0) {
              *(uint *)(lVar3 + 0x218) = (uint)uVar5;
              FUN_140045c82((short *)(param_1 + 0xa0),
                            (undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18),param_2,param_3);
              if (*(short *)(param_1 + 0xa0) != 4) {
                uVar7 = 0;
                do {
                  pbVar1 = (byte *)(*(longlong *)(param_1 + 0xc0) + uVar7);
                  *pbVar1 = *pbVar1 & 0xe7;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *(ushort *)(param_1 + 0xa0) - 4);
              }
              uVar7 = FUN_140045cdd(param_1,'\x01');
            }
          }
        }
      }
    }
  }
LAB_140045828:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
}

