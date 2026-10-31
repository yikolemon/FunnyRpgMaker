/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f80de */

ulonglong FUN_1801f80de(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(ushort *)(lVar2 + 0x1a);
  if (*(uint *)(lVar2 + 8) < (uint)*(ushort *)(lVar2 + 0x62) + (uint)uVar4 + 4) {
    uVar5 = FUN_1801c9d58(lVar2,4,0);
    if ((int)uVar5 != 0) goto LAB_1801f81f4;
    uVar4 = *(ushort *)(lVar2 + 0x1a);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar4 * 8) =
       *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 8 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x10 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x100);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x218) != 0) {
    FUN_1801c9b65(uVar6,*(undefined8 *)(lVar2 + 0x220));
    *(undefined8 *)(lVar2 + 0x220) = 0;
  }
  *(undefined4 *)(lVar2 + 0x218) = 0;
  uVar5 = FUN_1801ce63e(uVar3,*(undefined4 *)(param_1 + 0xe0));
  local_4c = (uint)uVar5;
  if (local_4c == 0) {
    uVar4 = FUN_1801ce6a2(uVar3,&local_4c);
    uVar5 = (ulonglong)local_4c;
    if (local_4c == 0) {
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x16;
        if ((uint)uVar4 <= *(uint *)(param_1 + 0x30)) {
          local_68 = 0;
          local_60 = &local_4c;
          uVar6 = FUN_1801cc8d6(uVar6,1,0,(uint)uVar4);
          *(undefined8 *)(lVar2 + 0x220) = uVar6;
          uVar5 = (ulonglong)local_4c;
          if (local_4c == 0) {
            uVar5 = FUN_1801ce682(uVar3,uVar6,(uint)uVar4);
            local_4c = (uint)uVar5;
            if (local_4c == 0) {
              *(uint *)(lVar2 + 0x218) = (uint)uVar4;
              FUN_1801f864e(param_1 + 0xa0,*(longlong *)(param_1 + 0x18) + 0x18,param_2,param_3);
              if (*(short *)(param_1 + 0xa0) != 4) {
                uVar5 = 0;
                do {
                  pbVar1 = (byte *)(*(longlong *)(param_1 + 0xc0) + uVar5);
                  *pbVar1 = *pbVar1 & 0xe7;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *(ushort *)(param_1 + 0xa0) - 4);
              }
              uVar5 = FUN_1801f86a9(param_1,1);
            }
          }
        }
      }
    }
  }
LAB_1801f81f4:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

